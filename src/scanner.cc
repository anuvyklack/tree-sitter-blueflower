#include <functional>
#include <vector>
#include <cstring>
#include <cwctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <unordered_map>
#include "tree_sitter/parser.h"

typedef uint16_t stack_t;

// #define DEBUG 1

/**
 * Print the current character after every advance() call.
 */
// #define DEBUG_CURRENT_CHAR 1

using namespace std;

enum TokenType : unsigned char {
    BOLD,
    ITALIC,
    STRIKETHROUGH,
    UNDERLINE,
    VERBATIM,
    INLINE_MATH,

    BOLD_CLOSE,
    ITALIC_CLOSE,
    STRIKETHROUGH_CLOSE,
    UNDERLINE_CLOSE,
    VERBATIM_CLOSE,
    INLINE_MATH_CLOSE,

    PARAGRAPH_END,

    HEADING,
    SECTION_END,

    DEFINITION_TERM_BEGIN,
    DEFINITION_TERM_END,
    DEFINITION_END,

    LIST_START,
    LIST_TOKEN,
    LIST_END,

    TAG_BEGIN,
    HASHTAG,

    CODE_BLOCK,

    ESCAPE_TOKEN,
    ESCAPED_CHAR,

    FORCE_NEW_LINE,

    BLANK_LINE,
    SOFT_BREAK,
    HARD_BREAK,

    NEW_LINE,
    END_OF_FILE,

    ERROR
};

#ifdef DEBUG
vector<string> tokens_names = {
    "bold",
    "italic",
    "strikethrough",
    "underline",
    "verbatim",
    "inline_math",

    "bold_close",
    "italic_close",
    "strikethrough_close",
    "underline_close",
    "verbatim_close",
    "inline_math_close",

    "paragraph_end",

    "heading",
    "section_end",

    "definition_term_begin",
    "definition_term_end",
    "definition_end",

    "list_start",
    "list_token",
    "list_end",

    "tag_begin",
    "hashtag",

    "code_block",

    "escape_token",
    "escaped_char",

    "force_new_line",

    "blank_line",
    "soft_break",
    "hard_break",

    "new_line",
    "eof",

    "error"
};
#endif // DEBUG

constexpr uint8_t MARKUP = 6; //< Total number of markup tokens.

const unordered_map<char, TokenType> markup_tokens = {
    {'*', BOLD},
    {'/', ITALIC},
    {'+', STRIKETHROUGH},
    {'_', UNDERLINE},
    {'`', VERBATIM},
    {'$', INLINE_MATH},
};

struct Scanner
{
    TSLexer* lexer;

    const bool* valid_tokens;

    int32_t
    previous = 0, //< Previous char
    current = 0;  //< Current char

    /// Number of parsed chars since last space char.
    size_t parsed_chars = 0;

    vector<stack_t> heading_stack;
    vector<stack_t> list_stack;
    deque<char> markup_stack;

    bool inside_code_block = false;

    bool escaped_active = false;

    bool scan () {
        /**
         * Recover form error
         * The parser appears to call `scan` with all symbols declared as valid
         * directly after it encountered an error. ERROR token can never be
         * requested in normal, so if it is requested, that error occurred.
         */
        if (valid_tokens[ERROR]) return false;

#ifdef DEBUG
        clog << "{" << endl;
        debug_valid_tokens();
#endif

        if (is_eof()) {
            if (valid_tokens[END_OF_FILE])
                return found(END_OF_FILE);
#ifdef DEBUG
            clog << "  false" << endl << "}" << endl;
#endif
            return false;
        }

        if (parse_escaped_char()) return true;

        lexer->mark_end(lexer);

        if (get_column() == 0)
            if (parse_newline()) return true;

        // if (parse_ordered_list()) return true;
        // if (parse_tag_name()) return true;

        if (parsed_chars == 0) {
            skip_spaces();
            if (is_eof()) {
                if (valid_tokens[END_OF_FILE]) {
                    lexer->mark_end(lexer);
                    return found(END_OF_FILE);
                }
#ifdef DEBUG
                clog << "  false" << endl << "}" << endl;
#endif
                return false;
            }
        }

        if (is_newline(lexer->lookahead)) {
            if (lexer->lookahead == 13) advance(); // \r
            if (lexer->lookahead == 10) advance(); // \n
            lexer->mark_end(lexer);
            return found(NEW_LINE);
        }

        // if (parse_comment()) return true;
        // if (parse_escape_char()) return true;
        //
        // if (parse_checkbox()) return true;
        // if (prase_link()) return true;

        if (parse_definition()) return true;
        if (parse_open_markup()) return true;
        if (parse_close_markup()) return true;
        if (parse_force_newline_token())  return true;

        // if (parse_raw_word()) return true;
        // if (parse_word()) return true;

#ifdef DEBUG
        clog << "  false" << endl << "}" << endl;
#endif

        return false;
    };

    /// Advances the lexer forward. The char that was advanced
    /// will be returned in the final result.
    void advance() {
//         if (!lexer->lookahead) {
// #ifdef DEBUG_CURRENT_CHAR
//             clog << "  Next char is \\0" << endl;
// #endif
//             return;
//         }
        previous = current;
        current = lexer->lookahead;
        lexer->advance(lexer, false);
        ++parsed_chars;

#ifdef DEBUG_CURRENT_CHAR
        clog << "  -> " << setw(3) << current << ' ';
        switch (current) {
        case 13:
            clog << "\\r";
            break;
        case 10:
            clog << "\\n";
            break;
        case 0:
            clog << "\\0";
            break;
        default:
            clog << static_cast<char>(current);
        }
        clog << endl;
#endif
    }

    /// Skips the next character without including it in the final result.
    void skip() {
        if (!lexer->lookahead) {
#ifdef DEBUG_CURRENT_CHAR
            clog << "  Next char is \\0" << endl;
#endif
            return;
        }
        previous = current;
        current = lexer->lookahead;
        lexer->advance(lexer, true);
        parsed_chars = 0;
    }

    inline void skip_spaces() {
        while (is_space(lexer->lookahead))
            skip();
    }

    /// Skip newline char
    inline void skip_newline() {
        if (lexer->lookahead == 13) skip(); // \r
        if (lexer->lookahead == 10) skip(); // \n
    }

    bool parse_escaped_char() {
        if (escaped_active) {
            escaped_active = false;
            if (is_newline(lexer->lookahead)) {
                if (lexer->lookahead == 13) advance(); // \r
                if (lexer->lookahead == 10) advance(); // \n
                return found(NEW_LINE);
            }
            else {
                advance();
                return found(ESCAPED_CHAR);
            }
        }
        else if (valid_tokens[ESCAPE_TOKEN] && lexer->lookahead == '\\') {
            advance();
            escaped_active = true;
            return found(ESCAPE_TOKEN);
        }

        return false;
    }

    /// Rules that decide based on the first token on the next line.
    bool parse_newline() {
        // If we're here, then we're in column 0 on a new line.

        skip_spaces();
        if (is_eof()) return false;

        // Check if current line is empty line.
        if (is_newline(lexer->lookahead)) {
            if (valid_tokens[PARAGRAPH_END])
                return found(PARAGRAPH_END);
            else {
                if (lexer->lookahead == 13) advance(); // \r
                if (lexer->lookahead == 10) advance(); // \n
                lexer->mark_end(lexer);
                return found(BLANK_LINE);
            }
        }

        stack_t n = 0; //< Number of parsed chars
        switch (lexer->lookahead) {
        case '*': { // HEADING, BOLD
            while (lexer->lookahead == '*') {
                advance();
                ++n;
            }
            if (is_space(lexer->lookahead)) {
                if (valid_tokens[PARAGRAPH_END])
                    return found(PARAGRAPH_END);
                else if (valid_tokens[HEADING]) {
                    if (heading_stack.empty() || n > heading_stack.back()) {
                        heading_stack.push_back(n);
                        lexer->mark_end(lexer);
                        return found(HEADING);
                    }
                    else {
                        heading_stack.pop_back();
                        return found(SECTION_END);
                    }
                }
            }

            // We are on the first non-blank character of the line, and it is '*',
            // it may be a bold markup.
            if (n == 1
                && not_space_or_newline(lexer->lookahead)
                && is_markup_allowed(current))
            {
                markup_stack.push_back(current);
                debug_markup_stack();
                lexer->mark_end(lexer);
                return found(markup_tokens.find(current)->second);
            }
            break;
        }
        case ':': { // DEFINITION
            advance();
            if (valid_tokens[PARAGRAPH_END] && is_space_or_newline_or_eof(lexer->lookahead))
                return found(PARAGRAPH_END);
            else if (valid_tokens[DEFINITION_TERM_BEGIN] && is_space(lexer->lookahead)) {
                lexer->mark_end(lexer);
                return found(DEFINITION_TERM_BEGIN);
            }
            else if (valid_tokens[DEFINITION_END] && is_newline_or_eof(lexer->lookahead)) {
                lexer->mark_end(lexer);
                return found(DEFINITION_END);
            }
            break;
        }
        case '-': { // LIST, SOFT_BREAK
            while (lexer->lookahead == '-') {
                advance();
                ++n;
            }

            if (valid_tokens[PARAGRAPH_END] && is_space_or_newline_or_eof(lexer->lookahead))
                return found(PARAGRAPH_END);

            if (n == 3 && is_newline_or_eof(lexer->lookahead)) {
                if (valid_tokens[LIST_END]) {
                    list_stack.pop_back();
                    return found(LIST_END);
                }
                else {
                    if (!heading_stack.empty())
                        heading_stack.pop_back();
                    lexer->mark_end(lexer);
                    return found(SOFT_BREAK);
                }
            }

            if (valid_tokens[LIST_START] || valid_tokens[LIST_END] || valid_tokens[LIST_TOKEN]
                && is_space(lexer->lookahead))
            {
                if (list_stack.empty() || n > list_stack.back())
                {
                    list_stack.push_back(n);
                    return found(LIST_START);
                }
                else if (n == list_stack.back()) {
                    lexer->mark_end(lexer);
                    return found(LIST_TOKEN);
                }
                else if (n < list_stack.back()) {
                    list_stack.pop_back();
                    return found(LIST_END);
                }
            }

            break;
        }
        case '=': // HARD_BREAK
            while (lexer->lookahead == '=') {
                advance();
                ++n;
            }
            if (n == 3 && (is_newline_or_eof(lexer->lookahead))) {
                if (valid_tokens[PARAGRAPH_END])
                    return found(PARAGRAPH_END);
                else if (valid_tokens[SECTION_END] && !heading_stack.empty()) {
                    heading_stack.pop_back();
                    return found(SECTION_END);
                }
                else {
                    lexer->mark_end(lexer);
                    return found(HARD_BREAK);
                }
            }
            break;
        case '#': // HASHTAG
            if (valid_tokens[PARAGRAPH_END])
                return found(PARAGRAPH_END);
            else if (valid_tokens[HASHTAG]) {
                advance();
                if (not_space_or_newline(lexer->lookahead)
                    && !is_inline_tag_control_character(lexer->lookahead))
                {
                    lexer->mark_end(lexer);
                    return found(HASHTAG);
                }
            }
            break;
        case '@': // TAG_BEGIN
            while (!is_inline_tag_control_character(lexer->lookahead)
                   && not_space_or_newline(lexer->lookahead))
                advance();

            if (!is_inline_tag_control_character(lexer->lookahead)) {
                if (valid_tokens[PARAGRAPH_END])
                    return found(PARAGRAPH_END);
                else if (!inside_code_block)
                    return found(TAG_BEGIN);
            }

            break;
        case '`': // CODE_BLOCK, VERBATIM
            while (lexer->lookahead == '`') {
                advance();
                ++n;
            }
            // We are on the first non-blank character of the line, and it is '`',
            // it may be a verbatim markup.
            if (n == 1
                && not_space_or_newline(lexer->lookahead)
                && is_markup_allowed(current))
            {
                markup_stack.push_back(current);
                debug_markup_stack();
                lexer->mark_end(lexer);
                return found(markup_tokens.find(current)->second);
            }
            else if (n == 3) {
                if (valid_tokens[PARAGRAPH_END])
                    return found(PARAGRAPH_END);
                else {
                    lexer->mark_end(lexer);
                    inside_code_block = !inside_code_block;
                    return found(CODE_BLOCK);
                }
            }
            break;
        }

        return false;
    }

    bool parse_definition() {
        if (is_space(current) && lexer->lookahead == ':') {
            advance();
            if (valid_tokens[PARAGRAPH_END] && is_space_or_newline_or_eof(lexer->lookahead))
                return found(PARAGRAPH_END);
            else if (valid_tokens[DEFINITION_TERM_END] && is_space_or_newline(lexer->lookahead)) {
                lexer->mark_end(lexer);
                return found(DEFINITION_TERM_END);
            }
            else if (valid_tokens[DEFINITION_END] && is_newline_or_eof(lexer->lookahead)) {
                lexer->mark_end(lexer);
                return found(DEFINITION_END);
            }
        }
        return false;
    }

    bool parse_open_markup() {
        // if (parsed_chars != 1) return false;

        /// Markup token
        auto mt = markup_tokens.find(lexer->lookahead);

        if (mt != markup_tokens.end() && is_markup_allowed(mt->first)) {
            advance();

            if (is_space_or_newline_or_eof(lexer->lookahead))
                return false;

            // Empty markup. I.e: **, or //, or ``, ...
            if (lexer->lookahead == mt->first)
                return false;

            markup_stack.push_back(mt->first);
            debug_markup_stack();

            lexer->mark_end(lexer);
            return found(mt->second);
        }

        return false;
    };

    bool parse_close_markup() {
        if (markup_stack.empty()
            // || parsed_chars != 1
            || lexer->lookahead != markup_stack.back()
            || iswspace(current))
        {
            return false;
        }

        if (!markup_stack.empty() && lexer->lookahead == markup_stack.back()) {
            advance();
            lexer->mark_end(lexer);
            found(static_cast<TokenType>(markup_tokens.at(current) + MARKUP));
            markup_stack.pop_back();
            debug_markup_stack();
            return true;
        }
        return false;
    }

    bool parse_force_newline_token() {
        if (valid_tokens[FORCE_NEW_LINE] && lexer-> lookahead == '~') {
            advance();
            if (is_newline_or_eof(lexer->lookahead)) {
                lexer->mark_end(lexer);
                return found(FORCE_NEW_LINE);
            }
        }
        return false;
    }

    inline bool is_inline_tag_open_char(int32_t c) {
        switch (c) {
        case '@':
        case ':':
            return true;
        default:
            return false;
        }
    }

    inline bool is_markup_allowed(const int32_t c) {
        if (!valid_tokens[markup_tokens.at(c)])
            return false;

        if (markup_stack.empty()) return true;

        for (auto m : markup_stack)
            if (c == m) return false;

        // clog << (int)markup_stack.back() << endl;

        switch (markup_tokens.at(markup_stack.back())) {
        case VERBATIM:
        case INLINE_MATH:
            return false;
        default:
            return true;
        }
    };

    inline bool is_markup_token(int32_t c) { return markup_tokens.find(c) != markup_tokens.end(); }

    bool token(const string str) {
        for (int32_t c : str)
        {
            if (c == lexer->lookahead)
                advance();
            else
                return false;
        }
        return true;
    }

    inline bool found(TokenType token) {
        lexer->result_symbol = token;
#ifdef DEBUG
        clog << "  found: " << tokens_names[lexer->result_symbol] << endl
             // << "  parsed chars: " << m_parsed_chars << endl
             << "}" << endl;
#endif
        return true;
    }

    // inline uint32_t get_column() { return is_eof() ? 0 : lexer->get_column(lexer); }
    inline uint32_t get_column() { return lexer->get_column(lexer); }

    inline bool is_inline_tag_control_character(int32_t c) {
        switch (c) {
        case '[':
        case '(':
        case '{':
            return true;
        default:
            return false;
        }
    }

    inline bool is_space(const int32_t c) { return c && iswblank(c); }

    inline bool is_newline(const int32_t c) {
        switch (c) {
        case 13: // \r
        case 10: // \n
            return true;
        default:
            return false;
        }
    }

    inline bool is_space_or_newline(const int32_t c) { return c && iswspace(c); }

    inline bool is_newline_or_eof(const int32_t c) { return !c || is_newline(c); }

    inline bool is_space_or_newline_or_eof(const int32_t c) { return !c || iswspace(c); }

    inline bool not_space_or_newline(const int32_t c) { return c && !iswspace(c); }

    inline bool is_eof() { return lexer->eof(lexer); }

    inline void debug_valid_tokens() {
#ifdef DEBUG
        clog << "  Valid: ";

        if (valid_tokens[ERROR]) {
            cout << "all" << endl;
            return;
        }

        for (int i = 0; i <= ERROR; ++i) {
            if (valid_tokens[i])
                clog << tokens_names[i] << ' ';
        }

        clog << endl;
#endif
    }

    inline void debug_list_stack() {
#ifdef DEBUG
        cout << "  list stack: ";
        for (uint16_t l : list_stack)
            cout << l << " ";
        cout << endl;
#endif
    }

    inline void debug_heading_stack() {
#ifdef DEBUG
        cout << "  heading stack: ";
        for (uint16_t h : heading_stack)
            cout << h << " ";
        cout << endl;
#endif
    }

    inline void debug_markup_stack() {
#ifdef DEBUG
        clog << "  markup stack: ";
        for (auto m : markup_stack)
            clog << m << ", ";
        clog << endl;
#endif
    }

    unsigned int serialize(char* buffer)
    {
        /// Heading stack length in bytes.
        stack_t hsl = heading_stack.size() * sizeof(stack_t);

        /// List stack length in bytes.
        stack_t lsl = list_stack.size() * sizeof(stack_t);

        /// Markup stack length.
        stack_t msl = markup_stack.size();

        if (sizeof(hsl) + hsl + sizeof(lsl) + lsl + sizeof(msl) + msl
            + sizeof(inside_code_block) + sizeof(escaped_active)
            >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE)
            return 0;

        uint16_t n = 0;

        buffer[n++] = inside_code_block;
        buffer[n++] = escaped_active;

        memcpy(buffer + n, &hsl, sizeof(hsl));
        n += sizeof(hsl);
        if (hsl) {
            memcpy(buffer + n, heading_stack.data(), hsl);
            n += hsl;
        }

        memcpy(buffer + n, &lsl, sizeof(lsl));
        n += sizeof(lsl);
        if (lsl) {
            memcpy(buffer + n, list_stack.data(), lsl);
            n += lsl;
        }

        memcpy(buffer + n, &msl, sizeof(msl));
        n += sizeof(msl);
        if (msl)
            for (char m : markup_stack)
                buffer[n++] = m;

        return n;
    };

    void deserialize(const char* buffer, unsigned length)
    {
        current = 0;
        parsed_chars = 0;

        heading_stack.clear();
        list_stack.clear();
        markup_stack.clear();

        if (!length) return;

        uint16_t n = 0;
        inside_code_block = buffer[n++] ;
        escaped_active = buffer[n++];

        stack_t sl; //< stack length

        memcpy(&sl, buffer + n, sizeof(sl));
        n += sizeof(sl);
        if (sl) {
            heading_stack.resize(sl / sizeof(stack_t));
            memcpy(heading_stack.data(), buffer + n, sl);
            n += sl;
        }

        memcpy(&sl, buffer + n, sizeof(sl));
        n += sizeof(sl);
        if (sl) {
            list_stack.resize(sl / sizeof(stack_t));
            memcpy(list_stack.data(), buffer + n, sl);
            n += sl;
        }

        memcpy(&sl, buffer + n, sizeof(sl));
        n += sizeof(sl);
        for (stack_t i = 0; i < sl; ++i)
            markup_stack.push_back(buffer[n + i]);
    };
};

extern "C"
{
    /// Create new Scanner object
    void* tree_sitter_blueflower_external_scanner_create() { return new Scanner(); }

    /// Destroy Scanner object
    void tree_sitter_blueflower_external_scanner_destroy(void* payload) {
        delete static_cast<Scanner*>(payload);
    }

    /// Main logic entry point
    bool tree_sitter_blueflower_external_scanner_scan(void* payload, TSLexer* lexer,
                                                      const bool* valid_tokens)
    {
        Scanner* scanner = static_cast<Scanner*>(payload);
        scanner->lexer = lexer;
        scanner->valid_tokens = const_cast<bool*>(valid_tokens);
        return scanner->scan();
    }

    /// Copy the current Scanner state to another location for later reuse.
    unsigned tree_sitter_blueflower_external_scanner_serialize(void* payload, char* buffer)
    {
        Scanner* scanner = static_cast<Scanner*>(payload);
        return scanner->serialize(buffer);
    }

    /// Load another Scanner state into Scanner object,
    void tree_sitter_blueflower_external_scanner_deserialize(
                            void* payload, const char* buffer, unsigned length)
    {
        Scanner* scanner = static_cast<Scanner*>(payload);
        scanner->deserialize(buffer, length);
    }
}
