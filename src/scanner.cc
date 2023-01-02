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

// #define DEBUG 1

/**
 * Print the current character after every advance() call.
 */
// #define DEBUG_CURRENT_CHAR 1

using namespace std;

enum TokenType : unsigned char {
    HEADING_1,
    HEADING_2,
    HEADING_3,
    HEADING_4,
    HEADING_5,
    HEADING_6,

    LIST_1,
    LIST_2,
    LIST_3,
    LIST_4,
    LIST_5,
    LIST_6,
    LIST_7,
    LIST_8,
    LIST_9,
    LIST_10,

    TAG_TOKEN,
    EXTENDED_TAG_TOKEN,
    HASHTAG,
    TAG_PARAMETER,
    END_TAG,

    BLANK_LINE,
    SOFT_BREAK,
    HARD_BREAK,

    END_OF_FILE,
};

#ifdef DEBUG
vector<string> tokens_names = {
    "heading_1",
    "heading_2",
    "heading_3",
    "heading_4",
    "heading_5",
    "heading_6",

    "list1",
    "list2",
    "list3",
    "list4",
    "list5",
    "list6",
    "list7",
    "list8",
    "list9",
    "list10",

    "tag_token",
    "extended_tag_token",
    "hashtag",
    "tag_parameter",
    "end_tag",

    "blank_line",
    "soft_break",
    "hard_break",

    "eof",
};
#endif // DEBUG

// const unordered_map<char, TokenType> markup_tokens = {
//     {'*', BOLD},
//     {'/', ITALIC},
//     {'~', STRIKETHROUGH},
//     {'_', UNDERLINE},
//     {'`', VERBATIM},
//     {'$', INLINE_MATH},
// };

constexpr uint8_t MARKUP = 6;      //< Total number of markup tokens.
constexpr uint8_t MAX_HEADING = 6; //< Maximum heading level.
constexpr uint8_t MAX_LIST = 10;   //< Maximum list level.

struct Scanner
{
    TSLexer* lexer;

    const bool* valid_tokens;

    int32_t
    previous = 0, //< Previous char
    current = 0;  //< Current char

    /// Number of parsed chars since last space char.
    size_t parsed_chars = 0;

    deque<char> markup_stack;

    bool tag_parameter_is_valid = true;

    /** 
     * The scanner analyzes the current character --- the last character the
     * "advanced" function passed, not the next (i.e lexer->lookahead) char.
     *
     *     abc
     *     ││└─ lexer->lookahead
     *     │└─ current
     *     └─ previous
     *
     */
    bool scan () {
        // Recover form error
        if (is_all_tokens_valid()) return false;

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

        if (get_column() == 0)
            if (parse_newline()) return true;

        // if (parse_ordered_list()) return true;
        // if (parse_tag_name()) return true;

        if (parsed_chars == 0) {
            skip_spaces();
            if (is_eof()) return false;
#ifdef DEBUG
            clog << "  false" << endl << "}" << endl;
#endif
        }

        //- before advace -------------------------------

        if (parsed_chars == 0) advance();

        //- after advance -------------------------------

        // if (parse_comment()) return true;
        // if (parse_escape_char()) return true;
        //
        // if (parse_checkbox()) return true;
        // if (prase_link()) return true;
        //
        // if (parse_definition()) return true;
        // if (parse_open_markup()) return true;
        // if (parse_close_markup()) return true;
        //
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
        // // CHECKBOX_UNDONE token is a space, and we don't want to skip it.
        // if (valid_tokens[CHECKBOX_UNDONE])
        //     return;

        while (is_space(lexer->lookahead))
            skip();
    }

    /// Skip newline char
    inline void skip_newline() {
        if (lexer->lookahead == 13) skip(); // \r
        if (lexer->lookahead == 10) skip(); // \n
    }

    /// Rules that decide based on the first token on the next line.
    bool parse_newline() {
        // If we're here, then we're in column 0 on a new line.

        skip_spaces();
        if (is_eof()) return false;

        // TAG_PARAMETER token, valid only on the same line as a range tag definition.
        // That's why if we are on the new line, then TAG_PARAMETER stops to be valid.
        tag_parameter_is_valid = false;

        // Check if current line is empty line.
        if (is_newline(lexer->lookahead)) {
            advance();
            return found(BLANK_LINE);
        }

        advance();

        uint8_t n = 0; //< Number of parsed chars
        switch (current) {
        case '*': { // HEADING
            constexpr auto expected = '*';
            if (lexer->lookahead == expected || is_space(lexer->lookahead)) {
                while (lexer->lookahead == expected) {
                    advance();
                    ++n;
                }

                if (!is_space(lexer->lookahead))
                    return false;

                return found(static_cast<TokenType>(
                             HEADING_1 + (n < MAX_HEADING ? n : MAX_HEADING - 1)));
            }
            // // We are on the first non-blank character of the line, and it is '*',
            // // need to check bold markup.
            // else if (parse_open_markup()) return true;
            break;
        }
        case '-': { // LIST, SOFT_BREAK
            constexpr auto expected = '-';
            while (lexer->lookahead == expected) {
                advance();
                ++n;
            }

            if (1 + n == 3 && (is_newline_or_eof(lexer->lookahead)))
                return found(SOFT_BREAK);

            // if (iswdigit(lexer->lookahead)) {
            //     lexer->mark_end(lexer);
            //     while (iswdigit(lexer->lookahead))
            //         advance();
            // }

            if (is_space(lexer->lookahead))
                return found(static_cast<TokenType>(
                             LIST_1 + (n < MAX_LIST ? n : MAX_LIST - 1)));

            break;
        }
        case '=': { // HARD_BREAK
            while (lexer->lookahead == '=') {
                advance();
                ++n;
            }
            if (1 + n == 3 && (is_newline_or_eof(lexer->lookahead)))
                return found(HARD_BREAK);
            break;
        }
        case '#': { // HASHTAG
            if (valid_tokens[HASHTAG]
                && not_space_or_newline(lexer->lookahead)
                && !is_inline_tag_control_character(lexer->lookahead))
            {
                return found(HASHTAG);
            }
            break;
        }
        case '@': { // TAG_TOKEN
            if (valid_tokens[EXTENDED_TAG_TOKEN] && lexer->lookahead == '+') {
                advance();
                return found(EXTENDED_TAG_TOKEN);
            }
            else if (valid_tokens[TAG_TOKEN] || valid_tokens[END_TAG]) {
                // if (token("end") && iswspace(lexer->lookahead))
                if (token("end") && is_space_or_newline_or_eof(lexer->lookahead))
                    return found(END_TAG);
                else if (!iswspace(lexer->lookahead))
                    return found(TAG_TOKEN);
            }
            break;
        }
        }

        return false;
    }

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
        case '(':
        case '[':
        case '{':
            return true;
        default:
            return false;
        }
    }

    inline bool is_space(const int32_t c) { return c && iswblank(c); }

    inline bool is_newline(const int32_t c) {
        switch (c) {
        case 10: // \n
        case 13: // \r
            return true;
        default:
            return false;
        }
    }

    inline bool is_newline_or_eof(const int32_t c) { return !c || is_newline(c); }

    inline bool is_space_or_newline_or_eof(const int32_t c) { return !c || iswspace(c); }

    inline bool not_space_or_newline(const int32_t c) { return c && !iswspace(c); }

    inline bool is_eof() { return lexer->eof(lexer); }

    /**
     * The parser appears to call `scan` with all symbols declared as valid directly
     * after it encountered an error. This function defines such a case.
     */
    inline bool is_all_tokens_valid() {
        for (int i = 0; i <= END_OF_FILE; ++i)
            if (!valid_tokens[i]) return false;
        return true;
    }

    inline void debug_valid_tokens() {
#ifdef DEBUG
        clog << "  Valid: ";

        if (is_all_tokens_valid()) {
            cout << "all" << endl;
            return;
        }

        for (int i = 0; i <= END_OF_FILE; ++i) {
            if (valid_tokens[i])
                clog << tokens_names[i] << ' ';
        }

        clog << endl;
#endif
    }

    inline void debug_markup_stack() {
#ifdef DEBUG
        cout << "  markup stack: ";
        for (auto m : markup_stack)
            cout << m << ", ";
        cout << endl;
#endif
    }
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

        char stack_length = scanner->markup_stack.size();

        if (static_cast<int>(stack_length) >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) return 0;

        int n = 0;

        if (stack_length)
            for (char m : scanner->markup_stack) {
                buffer[n] = m;
                ++n;
            }

        scanner->markup_stack.clear();
        return n;
    }

    /// Load another Scanner state into Scanner object,
    void tree_sitter_blueflower_external_scanner_deserialize(void* payload, const char* buffer,
                                                        unsigned length)
    {
        Scanner* scanner = static_cast<Scanner*>(payload);
        scanner->current = 0;
        scanner->parsed_chars = 0;
        scanner->tag_parameter_is_valid = true;

        if (!length) return;

        int n = 0;
        for (int8_t i = 0; i < length - n; ++i)
            scanner->markup_stack.push_back(buffer[n + i]);
    }
}
