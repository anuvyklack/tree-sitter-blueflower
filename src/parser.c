#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 4
#define TOKEN_COUNT 97
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_BSLASH = 1,
  aux_sym_escaped_sequence_token1 = 2,
  anon_sym_BSLASH2 = 3,
  anon_sym_POUND = 4,
  anon_sym_ = 5,
  anon_sym_AT = 6,
  anon_sym_COLON = 7,
  anon_sym_BANG = 8,
  anon_sym_DQUOTE = 9,
  anon_sym_POUND2 = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_PERCENT = 12,
  anon_sym_AMP = 13,
  anon_sym_SQUOTE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_COMMA = 19,
  anon_sym_DASH = 20,
  anon_sym_DOT = 21,
  anon_sym_SLASH = 22,
  anon_sym_COLON2 = 23,
  anon_sym_SEMI = 24,
  anon_sym_LT = 25,
  anon_sym_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_QMARK = 28,
  anon_sym_AT2 = 29,
  anon_sym_RBRACK = 30,
  anon_sym_BSLASH3 = 31,
  anon_sym_CARET = 32,
  anon_sym__ = 33,
  anon_sym_BQUOTE = 34,
  anon_sym_LBRACE = 35,
  anon_sym_PIPE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_TILDE = 38,
  aux_sym_inline_tag_token1 = 39,
  aux_sym_inline_tag_token2 = 40,
  aux_sym_inline_tag_token3 = 41,
  anon_sym_LBRACK = 42,
  aux_sym__inline_tag_label_token1 = 43,
  aux_sym__inline_tag_content_token1 = 44,
  anon_sym_RPAREN2 = 45,
  aux_sym__inline_tag_patameters_token1 = 46,
  anon_sym_RBRACE2 = 47,
  sym_nl = 48,
  anon_sym_BANG2 = 49,
  anon_sym_DQUOTE2 = 50,
  anon_sym_DOLLAR2 = 51,
  anon_sym_PERCENT2 = 52,
  anon_sym_AMP2 = 53,
  anon_sym_SQUOTE2 = 54,
  anon_sym_LPAREN2 = 55,
  anon_sym_RPAREN3 = 56,
  anon_sym_STAR2 = 57,
  anon_sym_PLUS2 = 58,
  anon_sym_COMMA2 = 59,
  anon_sym_DASH2 = 60,
  anon_sym_DOT2 = 61,
  anon_sym_SLASH2 = 62,
  anon_sym_COLON3 = 63,
  anon_sym_SEMI2 = 64,
  anon_sym_LT2 = 65,
  anon_sym_EQ2 = 66,
  anon_sym_GT2 = 67,
  anon_sym_QMARK2 = 68,
  anon_sym_LBRACK2 = 69,
  anon_sym_RBRACK2 = 70,
  anon_sym_BSLASH4 = 71,
  anon_sym_CARET2 = 72,
  anon_sym__2 = 73,
  anon_sym_BQUOTE2 = 74,
  anon_sym_LBRACE2 = 75,
  anon_sym_PIPE2 = 76,
  anon_sym_RBRACE3 = 77,
  anon_sym_TILDE2 = 78,
  aux_sym_word_token1 = 79,
  aux_sym_word_token2 = 80,
  aux_sym_word_token3 = 81,
  sym_raw_word = 82,
  sym_heading_1_token = 83,
  sym_heading_2_token = 84,
  sym_heading_3_token = 85,
  sym_heading_4_token = 86,
  sym_heading_5_token = 87,
  sym_heading_6_token = 88,
  sym_hashtag_token = 89,
  sym_tag_token = 90,
  sym_tag_parameter = 91,
  sym_end_tag = 92,
  sym_tag_label_open = 93,
  sym_soft_break = 94,
  sym_hard_break = 95,
  sym__eof = 96,
  sym_document = 97,
  sym_paragraph = 98,
  sym_escaped_sequence = 99,
  sym_comment = 100,
  sym_inline_tag = 101,
  sym__inline_tag_label = 102,
  sym__inline_tag_content = 103,
  sym__inline_tag_patameters = 104,
  sym_verbatim_tag = 105,
  sym_hashtag = 106,
  aux_sym_document_repeat1 = 107,
  aux_sym_paragraph_repeat1 = 108,
  aux_sym_comment_repeat1 = 109,
  aux_sym__inline_tag_label_repeat1 = 110,
  aux_sym__inline_tag_content_repeat1 = 111,
  aux_sym__inline_tag_patameters_repeat1 = 112,
  aux_sym_verbatim_tag_repeat1 = 113,
  aux_sym_verbatim_tag_repeat2 = 114,
  aux_sym_verbatim_tag_repeat3 = 115,
  alias_sym_content = 116,
  alias_sym_label = 117,
  alias_sym_parameters = 118,
  anon_alias_sym_word = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASH] = "token",
  [aux_sym_escaped_sequence_token1] = "raw_word",
  [anon_sym_BSLASH2] = "token",
  [anon_sym_POUND] = "#",
  [anon_sym_] = " ",
  [anon_sym_AT] = "token",
  [anon_sym_COLON] = "token",
  [anon_sym_BANG] = "ascii_symbol",
  [anon_sym_DQUOTE] = "ascii_symbol",
  [anon_sym_POUND2] = "ascii_symbol",
  [anon_sym_DOLLAR] = "ascii_symbol",
  [anon_sym_PERCENT] = "ascii_symbol",
  [anon_sym_AMP] = "ascii_symbol",
  [anon_sym_SQUOTE] = "ascii_symbol",
  [anon_sym_LPAREN] = "ascii_symbol",
  [anon_sym_RPAREN] = "ascii_symbol",
  [anon_sym_STAR] = "ascii_symbol",
  [anon_sym_PLUS] = "ascii_symbol",
  [anon_sym_COMMA] = "ascii_symbol",
  [anon_sym_DASH] = "ascii_symbol",
  [anon_sym_DOT] = "ascii_symbol",
  [anon_sym_SLASH] = "ascii_symbol",
  [anon_sym_COLON2] = "ascii_symbol",
  [anon_sym_SEMI] = "ascii_symbol",
  [anon_sym_LT] = "ascii_symbol",
  [anon_sym_EQ] = "ascii_symbol",
  [anon_sym_GT] = "ascii_symbol",
  [anon_sym_QMARK] = "ascii_symbol",
  [anon_sym_AT2] = "ascii_symbol",
  [anon_sym_RBRACK] = "ascii_symbol",
  [anon_sym_BSLASH3] = "ascii_symbol",
  [anon_sym_CARET] = "ascii_symbol",
  [anon_sym__] = "ascii_symbol",
  [anon_sym_BQUOTE] = "ascii_symbol",
  [anon_sym_LBRACE] = "ascii_symbol",
  [anon_sym_PIPE] = "ascii_symbol",
  [anon_sym_RBRACE] = "ascii_symbol",
  [anon_sym_TILDE] = "ascii_symbol",
  [aux_sym_inline_tag_token1] = "string",
  [aux_sym_inline_tag_token2] = "number",
  [aux_sym_inline_tag_token3] = "symbol",
  [anon_sym_LBRACK] = "ascii_symbol",
  [aux_sym__inline_tag_label_token1] = "word",
  [aux_sym__inline_tag_content_token1] = "raw_word",
  [anon_sym_RPAREN2] = "token",
  [aux_sym__inline_tag_patameters_token1] = "raw_word",
  [anon_sym_RBRACE2] = "token",
  [sym_nl] = "nl",
  [anon_sym_BANG2] = "ascii_symbol",
  [anon_sym_DQUOTE2] = "ascii_symbol",
  [anon_sym_DOLLAR2] = "ascii_symbol",
  [anon_sym_PERCENT2] = "ascii_symbol",
  [anon_sym_AMP2] = "ascii_symbol",
  [anon_sym_SQUOTE2] = "ascii_symbol",
  [anon_sym_LPAREN2] = "ascii_symbol",
  [anon_sym_RPAREN3] = "ascii_symbol",
  [anon_sym_STAR2] = "ascii_symbol",
  [anon_sym_PLUS2] = "ascii_symbol",
  [anon_sym_COMMA2] = "ascii_symbol",
  [anon_sym_DASH2] = "ascii_symbol",
  [anon_sym_DOT2] = "ascii_symbol",
  [anon_sym_SLASH2] = "ascii_symbol",
  [anon_sym_COLON3] = "ascii_symbol",
  [anon_sym_SEMI2] = "ascii_symbol",
  [anon_sym_LT2] = "ascii_symbol",
  [anon_sym_EQ2] = "ascii_symbol",
  [anon_sym_GT2] = "ascii_symbol",
  [anon_sym_QMARK2] = "ascii_symbol",
  [anon_sym_LBRACK2] = "ascii_symbol",
  [anon_sym_RBRACK2] = "ascii_symbol",
  [anon_sym_BSLASH4] = "ascii_symbol",
  [anon_sym_CARET2] = "ascii_symbol",
  [anon_sym__2] = "ascii_symbol",
  [anon_sym_BQUOTE2] = "ascii_symbol",
  [anon_sym_LBRACE2] = "ascii_symbol",
  [anon_sym_PIPE2] = "ascii_symbol",
  [anon_sym_RBRACE3] = "ascii_symbol",
  [anon_sym_TILDE2] = "ascii_symbol",
  [aux_sym_word_token1] = "string",
  [aux_sym_word_token2] = "number",
  [aux_sym_word_token3] = "symbol",
  [sym_raw_word] = "raw_word",
  [sym_heading_1_token] = "heading_1_token",
  [sym_heading_2_token] = "heading_2_token",
  [sym_heading_3_token] = "heading_3_token",
  [sym_heading_4_token] = "heading_4_token",
  [sym_heading_5_token] = "heading_5_token",
  [sym_heading_6_token] = "heading_6_token",
  [sym_hashtag_token] = "token",
  [sym_tag_token] = "token",
  [sym_tag_parameter] = "tag_parameter",
  [sym_end_tag] = "end_tag",
  [sym_tag_label_open] = "tag_label_open",
  [sym_soft_break] = "soft_break",
  [sym_hard_break] = "hard_break",
  [sym__eof] = "_eof",
  [sym_document] = "document",
  [sym_paragraph] = "paragraph",
  [sym_escaped_sequence] = "escaped_sequence",
  [sym_comment] = "comment",
  [sym_inline_tag] = "inline_tag",
  [sym__inline_tag_label] = "_inline_tag_label",
  [sym__inline_tag_content] = "_inline_tag_content",
  [sym__inline_tag_patameters] = "_inline_tag_patameters",
  [sym_verbatim_tag] = "verbatim_tag",
  [sym_hashtag] = "hashtag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__inline_tag_label_repeat1] = "_inline_tag_label_repeat1",
  [aux_sym__inline_tag_content_repeat1] = "_inline_tag_content_repeat1",
  [aux_sym__inline_tag_patameters_repeat1] = "_inline_tag_patameters_repeat1",
  [aux_sym_verbatim_tag_repeat1] = "verbatim_tag_repeat1",
  [aux_sym_verbatim_tag_repeat2] = "verbatim_tag_repeat2",
  [aux_sym_verbatim_tag_repeat3] = "verbatim_tag_repeat3",
  [alias_sym_content] = "content",
  [alias_sym_label] = "label",
  [alias_sym_parameters] = "parameters",
  [anon_alias_sym_word] = "word",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASH] = sym_hashtag_token,
  [aux_sym_escaped_sequence_token1] = sym_raw_word,
  [anon_sym_BSLASH2] = sym_hashtag_token,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = sym_hashtag_token,
  [anon_sym_COLON] = sym_hashtag_token,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_BANG,
  [anon_sym_POUND2] = anon_sym_BANG,
  [anon_sym_DOLLAR] = anon_sym_BANG,
  [anon_sym_PERCENT] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_BANG,
  [anon_sym_SQUOTE] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_BANG,
  [anon_sym_RPAREN] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_BANG,
  [anon_sym_COMMA] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_BANG,
  [anon_sym_COLON2] = anon_sym_BANG,
  [anon_sym_SEMI] = anon_sym_BANG,
  [anon_sym_LT] = anon_sym_BANG,
  [anon_sym_EQ] = anon_sym_BANG,
  [anon_sym_GT] = anon_sym_BANG,
  [anon_sym_QMARK] = anon_sym_BANG,
  [anon_sym_AT2] = anon_sym_BANG,
  [anon_sym_RBRACK] = anon_sym_BANG,
  [anon_sym_BSLASH3] = anon_sym_BANG,
  [anon_sym_CARET] = anon_sym_BANG,
  [anon_sym__] = anon_sym_BANG,
  [anon_sym_BQUOTE] = anon_sym_BANG,
  [anon_sym_LBRACE] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_BANG,
  [anon_sym_RBRACE] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_BANG,
  [aux_sym_inline_tag_token1] = aux_sym_inline_tag_token1,
  [aux_sym_inline_tag_token2] = aux_sym_inline_tag_token2,
  [aux_sym_inline_tag_token3] = aux_sym_inline_tag_token3,
  [anon_sym_LBRACK] = anon_sym_BANG,
  [aux_sym__inline_tag_label_token1] = aux_sym__inline_tag_label_token1,
  [aux_sym__inline_tag_content_token1] = sym_raw_word,
  [anon_sym_RPAREN2] = sym_hashtag_token,
  [aux_sym__inline_tag_patameters_token1] = sym_raw_word,
  [anon_sym_RBRACE2] = sym_hashtag_token,
  [sym_nl] = sym_nl,
  [anon_sym_BANG2] = anon_sym_BANG,
  [anon_sym_DQUOTE2] = anon_sym_BANG,
  [anon_sym_DOLLAR2] = anon_sym_BANG,
  [anon_sym_PERCENT2] = anon_sym_BANG,
  [anon_sym_AMP2] = anon_sym_BANG,
  [anon_sym_SQUOTE2] = anon_sym_BANG,
  [anon_sym_LPAREN2] = anon_sym_BANG,
  [anon_sym_RPAREN3] = anon_sym_BANG,
  [anon_sym_STAR2] = anon_sym_BANG,
  [anon_sym_PLUS2] = anon_sym_BANG,
  [anon_sym_COMMA2] = anon_sym_BANG,
  [anon_sym_DASH2] = anon_sym_BANG,
  [anon_sym_DOT2] = anon_sym_BANG,
  [anon_sym_SLASH2] = anon_sym_BANG,
  [anon_sym_COLON3] = anon_sym_BANG,
  [anon_sym_SEMI2] = anon_sym_BANG,
  [anon_sym_LT2] = anon_sym_BANG,
  [anon_sym_EQ2] = anon_sym_BANG,
  [anon_sym_GT2] = anon_sym_BANG,
  [anon_sym_QMARK2] = anon_sym_BANG,
  [anon_sym_LBRACK2] = anon_sym_BANG,
  [anon_sym_RBRACK2] = anon_sym_BANG,
  [anon_sym_BSLASH4] = anon_sym_BANG,
  [anon_sym_CARET2] = anon_sym_BANG,
  [anon_sym__2] = anon_sym_BANG,
  [anon_sym_BQUOTE2] = anon_sym_BANG,
  [anon_sym_LBRACE2] = anon_sym_BANG,
  [anon_sym_PIPE2] = anon_sym_BANG,
  [anon_sym_RBRACE3] = anon_sym_BANG,
  [anon_sym_TILDE2] = anon_sym_BANG,
  [aux_sym_word_token1] = aux_sym_inline_tag_token1,
  [aux_sym_word_token2] = aux_sym_inline_tag_token2,
  [aux_sym_word_token3] = aux_sym_inline_tag_token3,
  [sym_raw_word] = sym_raw_word,
  [sym_heading_1_token] = sym_heading_1_token,
  [sym_heading_2_token] = sym_heading_2_token,
  [sym_heading_3_token] = sym_heading_3_token,
  [sym_heading_4_token] = sym_heading_4_token,
  [sym_heading_5_token] = sym_heading_5_token,
  [sym_heading_6_token] = sym_heading_6_token,
  [sym_hashtag_token] = sym_hashtag_token,
  [sym_tag_token] = sym_hashtag_token,
  [sym_tag_parameter] = sym_tag_parameter,
  [sym_end_tag] = sym_end_tag,
  [sym_tag_label_open] = sym_tag_label_open,
  [sym_soft_break] = sym_soft_break,
  [sym_hard_break] = sym_hard_break,
  [sym__eof] = sym__eof,
  [sym_document] = sym_document,
  [sym_paragraph] = sym_paragraph,
  [sym_escaped_sequence] = sym_escaped_sequence,
  [sym_comment] = sym_comment,
  [sym_inline_tag] = sym_inline_tag,
  [sym__inline_tag_label] = sym__inline_tag_label,
  [sym__inline_tag_content] = sym__inline_tag_content,
  [sym__inline_tag_patameters] = sym__inline_tag_patameters,
  [sym_verbatim_tag] = sym_verbatim_tag,
  [sym_hashtag] = sym_hashtag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__inline_tag_label_repeat1] = aux_sym__inline_tag_label_repeat1,
  [aux_sym__inline_tag_content_repeat1] = aux_sym__inline_tag_content_repeat1,
  [aux_sym__inline_tag_patameters_repeat1] = aux_sym__inline_tag_patameters_repeat1,
  [aux_sym_verbatim_tag_repeat1] = aux_sym_verbatim_tag_repeat1,
  [aux_sym_verbatim_tag_repeat2] = aux_sym_verbatim_tag_repeat2,
  [aux_sym_verbatim_tag_repeat3] = aux_sym_verbatim_tag_repeat3,
  [alias_sym_content] = alias_sym_content,
  [alias_sym_label] = alias_sym_label,
  [alias_sym_parameters] = alias_sym_parameters,
  [anon_alias_sym_word] = anon_alias_sym_word,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_escaped_sequence_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_tag_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_tag_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_tag_token3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inline_tag_label_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inline_tag_content_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inline_tag_patameters_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = true,
  },
  [sym_nl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE3] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_word_token3] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_word] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_1_token] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_2_token] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_3_token] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_4_token] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_5_token] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_6_token] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtag_token] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_token] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_label_open] = {
    .visible = true,
    .named = true,
  },
  [sym_soft_break] = {
    .visible = true,
    .named = true,
  },
  [sym_hard_break] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_tag_label] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_tag_content] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_tag_patameters] = {
    .visible = false,
    .named = true,
  },
  [sym_verbatim_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_tag_label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_tag_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_tag_patameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_tag_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_tag_repeat3] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_label] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [anon_alias_sym_word] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_close_content = 1,
  field_close_label = 2,
  field_close_parameters = 3,
  field_name = 4,
  field_open_content = 5,
  field_open_label = 6,
  field_open_parameters = 7,
  field_parameter = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close_content] = "close_content",
  [field_close_label] = "close_label",
  [field_close_parameters] = "close_parameters",
  [field_name] = "name",
  [field_open_content] = "open_content",
  [field_open_label] = "open_label",
  [field_open_parameters] = "open_parameters",
  [field_parameter] = "parameter",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 3},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 2},
  [12] = {.index = 20, .length = 2},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 5},
  [15] = {.index = 29, .length = 5},
  [16] = {.index = 34, .length = 5},
  [17] = {.index = 0, .length = 1},
  [18] = {.index = 39, .length = 7},
  [19] = {.index = 0, .length = 1},
  [20] = {.index = 46, .length = 2},
  [21] = {.index = 46, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_parameter, 2},
  [3] =
    {field_close_content, 1},
    {field_open_content, 0},
  [5] =
    {field_close_parameters, 1},
    {field_open_parameters, 0},
  [7] =
    {field_close_label, 1},
    {field_open_label, 0},
  [9] =
    {field_close_label, 2, .inherited = true},
    {field_name, 1},
    {field_open_label, 2, .inherited = true},
  [12] =
    {field_close_content, 2, .inherited = true},
    {field_name, 1},
    {field_open_content, 2, .inherited = true},
  [15] =
    {field_close_parameters, 2, .inherited = true},
    {field_name, 1},
    {field_open_parameters, 2, .inherited = true},
  [18] =
    {field_close_content, 2},
    {field_open_content, 0},
  [20] =
    {field_close_parameters, 2},
    {field_open_parameters, 0},
  [22] =
    {field_close_label, 2},
    {field_open_label, 0},
  [24] =
    {field_close_content, 3, .inherited = true},
    {field_close_label, 2, .inherited = true},
    {field_name, 1},
    {field_open_content, 3, .inherited = true},
    {field_open_label, 2, .inherited = true},
  [29] =
    {field_close_label, 2, .inherited = true},
    {field_close_parameters, 3, .inherited = true},
    {field_name, 1},
    {field_open_label, 2, .inherited = true},
    {field_open_parameters, 3, .inherited = true},
  [34] =
    {field_close_content, 2, .inherited = true},
    {field_close_parameters, 3, .inherited = true},
    {field_name, 1},
    {field_open_content, 2, .inherited = true},
    {field_open_parameters, 3, .inherited = true},
  [39] =
    {field_close_content, 3, .inherited = true},
    {field_close_label, 2, .inherited = true},
    {field_close_parameters, 4, .inherited = true},
    {field_name, 1},
    {field_open_content, 3, .inherited = true},
    {field_open_label, 2, .inherited = true},
    {field_open_parameters, 4, .inherited = true},
  [46] =
    {field_name, 1},
    {field_parameter, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_tag_parameter,
  },
  [3] = {
    [0] = anon_alias_sym_word,
  },
  [5] = {
    [0] = sym_hashtag_token,
  },
  [6] = {
    [0] = sym_hashtag_token,
  },
  [7] = {
    [0] = sym_hashtag_token,
    [1] = sym_hashtag_token,
  },
  [11] = {
    [0] = sym_hashtag_token,
    [1] = alias_sym_content,
  },
  [12] = {
    [0] = sym_hashtag_token,
    [1] = alias_sym_parameters,
  },
  [13] = {
    [0] = sym_hashtag_token,
    [1] = alias_sym_label,
    [2] = sym_hashtag_token,
  },
  [17] = {
    [3] = alias_sym_content,
  },
  [19] = {
    [4] = alias_sym_content,
  },
  [21] = {
    [5] = alias_sym_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__inline_tag_label_repeat1, 2,
    aux_sym__inline_tag_label_repeat1,
    alias_sym_label,
  aux_sym__inline_tag_content_repeat1, 2,
    aux_sym__inline_tag_content_repeat1,
    alias_sym_content,
  aux_sym__inline_tag_patameters_repeat1, 2,
    aux_sym__inline_tag_patameters_repeat1,
    alias_sym_parameters,
  aux_sym_verbatim_tag_repeat3, 2,
    aux_sym_verbatim_tag_repeat3,
    alias_sym_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 39,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 56,
  [77] = 75,
  [78] = 78,
  [79] = 79,
  [80] = 57,
  [81] = 60,
  [82] = 72,
  [83] = 83,
  [84] = 74,
  [85] = 73,
  [86] = 52,
  [87] = 50,
  [88] = 15,
  [89] = 79,
  [90] = 83,
  [91] = 48,
  [92] = 21,
  [93] = 22,
  [94] = 94,
  [95] = 23,
  [96] = 36,
  [97] = 12,
  [98] = 55,
  [99] = 40,
  [100] = 26,
  [101] = 41,
  [102] = 42,
  [103] = 43,
  [104] = 78,
  [105] = 44,
  [106] = 45,
  [107] = 107,
  [108] = 46,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 113,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 119,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 15,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 15,
  [131] = 16,
  [132] = 132,
  [133] = 31,
  [134] = 128,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 137,
  [141] = 139,
  [142] = 142,
  [143] = 135,
  [144] = 13,
  [145] = 59,
  [146] = 146,
  [147] = 146,
  [148] = 142,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 136,
  [155] = 25,
  [156] = 24,
  [157] = 157,
  [158] = 9,
  [159] = 126,
  [160] = 38,
  [161] = 11,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 171,
  [178] = 165,
  [179] = 167,
  [180] = 176,
  [181] = 181,
  [182] = 149,
  [183] = 166,
  [184] = 184,
  [185] = 169,
  [186] = 163,
  [187] = 181,
  [188] = 188,
  [189] = 188,
  [190] = 190,
  [191] = 190,
  [192] = 190,
  [193] = 190,
  [194] = 194,
};

static inline bool aux_sym_inline_tag_token1_character_set_1(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2384
        ? (c < 1519
          ? (c < 890
            ? (c < 248
              ? (c < 186
                ? (c < 170
                  ? (c >= 'A' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))
              : (c <= 705 || (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))))
            : (c <= 893 || (c < 1015
              ? (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))
              : (c <= 1153 || (c < 1369
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2036
            ? (c < 1791
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : c <= 1788)))
              : (c <= 1791 || (c < 1869
                ? (c < 1810
                  ? c == 1808
                  : c <= 1839)
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2208
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4159
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8064
          ? (c < 7406
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7141 || (c < 7312
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8450
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8305
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43816
          ? (c < 43646
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43588
                ? (c < 43520
                  ? (c >= 43494 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64287
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64256
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : c <= 64217)
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66928
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_inline_tag_token1_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2984
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1994
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2144
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))
              : (c <= 2154 || (c < 2208
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2869
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2835
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4159
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5919
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8064
          ? (c < 7406
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7141 || (c < 7312
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8450
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8305
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43816
          ? (c < 43646
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43588
                ? (c < 43520
                  ? (c >= 43494 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64287
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64256
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : c <= 64217)
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66928
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66504
              ? (c < 66384
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_inline_tag_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2185
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6103
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5984
                ? (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43261
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11559
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : c <= 11623)))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12294 || (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)))
              : (c <= 12438 || (c < 12540
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12735 || (c < 42786
            ? (c < 42240
              ? (c < 19968
                ? (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 13312 || c == 19903))
                : (c <= 19968 || (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : c <= 42237)))
              : (c <= 42508 || (c < 42623
                ? (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : (c <= 42539 || (c >= 42560 && c <= 42606)))
                : (c <= 42653 || (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : c <= 42783)))))
            : (c <= 42888 || (c < 43015
              ? (c < 42965
                ? (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)))
              : (c <= 43018 || (c < 43138
                ? (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : c <= 43259)))))))))))
      : (c <= 43262 || (c < 65345
        ? (c < 43816
          ? (c < 43646
            ? (c < 43494
              ? (c < 43396
                ? (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))
                : (c <= 43442 || (c < 43488
                  ? c == 43471
                  : c <= 43492)))
              : (c <= 43503 || (c < 43588
                ? (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : (c <= 43560 || (c >= 43584 && c <= 43586)))
                : (c <= 43595 || (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : c <= 43642)))))
            : (c <= 43695 || (c < 43744
              ? (c < 43712
                ? (c < 43701
                  ? c == 43697
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))
                : (c <= 43712 || (c < 43739
                  ? c == 43714
                  : c <= 43741)))
              : (c <= 43754 || (c < 43785
                ? (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44032
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44032 || (c < 55216
                  ? c == 55203
                  : c <= 55238)))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
              : (c <= 64911 || (c < 65136
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)
                : (c <= 65140 || (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66928
          ? (c < 66208
            ? (c < 65549
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : c <= 65547)))
              : (c <= 65574 || (c < 65616
                ? (c < 65596
                  ? (c >= 65576 && c <= 65594)
                  : (c <= 65597 || (c >= 65599 && c <= 65613)))
                : (c <= 65629 || (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : c <= 66204)))))
            : (c <= 66256 || (c < 66504
              ? (c < 66384
                ? (c < 66349
                  ? (c >= 66304 && c <= 66335)
                  : (c <= 66368 || (c >= 66370 && c <= 66377)))
                : (c <= 66421 || (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : c <= 66499)))
              : (c <= 66511 || (c < 66776
                ? (c < 66736
                  ? (c >= 66560 && c <= 66717)
                  : c <= 66771)
                : (c <= 66811 || (c < 66864
                  ? (c >= 66816 && c <= 66855)
                  : c <= 66915)))))))
          : (c <= 66938 || (c < 67506
            ? (c < 67003
              ? (c < 66967
                ? (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : c <= 67001)))
              : (c <= 67004 || (c < 67424
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : c <= 67413)
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool aux_sym_inline_tag_token2_character_set_1(int32_t c) {
  return (c < 8308
    ? (c < 3558
      ? (c < 2662
        ? (c < 1776
          ? (c < 185
            ? (c < 178
              ? (c >= '0' && c <= '9')
              : c <= 179)
            : (c <= 185 || (c < 1632
              ? (c >= 188 && c <= 190)
              : c <= 1641)))
          : (c <= 1785 || (c < 2534
            ? (c < 2406
              ? (c >= 1984 && c <= 1993)
              : c <= 2415)
            : (c <= 2543 || (c >= 2548 && c <= 2553)))))
        : (c <= 2671 || (c < 3174
          ? (c < 2930
            ? (c < 2918
              ? (c >= 2790 && c <= 2799)
              : c <= 2927)
            : (c <= 2935 || (c >= 3046 && c <= 3058)))
          : (c <= 3183 || (c < 3416
            ? (c < 3302
              ? (c >= 3192 && c <= 3198)
              : c <= 3311)
            : (c <= 3422 || (c >= 3430 && c <= 3448)))))))
      : (c <= 3567 || (c < 6160
        ? (c < 4240
          ? (c < 3872
            ? (c < 3792
              ? (c >= 3664 && c <= 3673)
              : c <= 3801)
            : (c <= 3891 || (c >= 4160 && c <= 4169)))
          : (c <= 4249 || (c < 6112
            ? (c < 5870
              ? (c >= 4969 && c <= 4988)
              : c <= 5872)
            : (c <= 6121 || (c >= 6128 && c <= 6137)))))
        : (c <= 6169 || (c < 6992
          ? (c < 6784
            ? (c < 6608
              ? (c >= 6470 && c <= 6479)
              : c <= 6618)
            : (c <= 6793 || (c >= 6800 && c <= 6809)))
          : (c <= 7001 || (c < 7248
            ? (c < 7232
              ? (c >= 7088 && c <= 7097)
              : c <= 7241)
            : (c <= 7257 || c == 8304))))))))
    : (c <= 8313 || (c < 43264
      ? (c < 12690
        ? (c < 10102
          ? (c < 8581
            ? (c < 8528
              ? (c >= 8320 && c <= 8329)
              : c <= 8578)
            : (c <= 8585 || (c < 9450
              ? (c >= 9312 && c <= 9371)
              : c <= 9471)))
          : (c <= 10131 || (c < 12321
            ? (c < 12295
              ? c == 11517
              : c <= 12295)
            : (c <= 12329 || (c >= 12344 && c <= 12346)))))
        : (c <= 12693 || (c < 12977
          ? (c < 12881
            ? (c < 12872
              ? (c >= 12832 && c <= 12841)
              : c <= 12879)
            : (c <= 12895 || (c >= 12928 && c <= 12937)))
          : (c <= 12991 || (c < 43056
            ? (c < 42726
              ? (c >= 42528 && c <= 42537)
              : c <= 42735)
            : (c <= 43061 || (c >= 43216 && c <= 43225)))))))
      : (c <= 43273 || (c < 66336
        ? (c < 65296
          ? (c < 43600
            ? (c < 43504
              ? (c >= 43472 && c <= 43481)
              : c <= 43513)
            : (c <= 43609 || (c >= 44016 && c <= 44025)))
          : (c <= 65305 || (c < 65930
            ? (c < 65856
              ? (c >= 65799 && c <= 65843)
              : c <= 65912)
            : (c <= 65931 || (c >= 66273 && c <= 66299)))))
        : (c <= 66339 || (c < 67672
          ? (c < 66513
            ? (c < 66378
              ? c == 66369
              : c <= 66378)
            : (c <= 66517 || (c >= 66720 && c <= 66729)))
          : (c <= 67679 || (c < 67835
            ? (c < 67751
              ? (c >= 67705 && c <= 67711)
              : c <= 67759)
            : (c <= 67839 || (c >= 67862 && c <= 67867)))))))))));
}

static inline bool aux_sym_inline_tag_token3_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < 160
        ? c == ' '
        : c <= 160)))
    : (c <= 5760 || (c < 8239
      ? (c < 8232
        ? (c >= 8192 && c <= 8202)
        : c <= 8233)
      : (c <= 8239 || (c < 12288
        ? c == 8287
        : c <= 12288)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(57);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(54);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(100);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(100);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(25);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '$') ADVANCE(27);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '`') ADVANCE(50);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '~') ADVANCE(54);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(56);
      if (aux_sym_inline_tag_token1_character_set_2(lookahead)) ADVANCE(55);
      if (!aux_sym_inline_tag_token3_character_set_1(lookahead)) ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(100);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(101);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '(') ADVANCE(77);
      if (lookahead == ')') ADVANCE(78);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '?') ADVANCE(89);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '^') ADVANCE(92);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '`') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '~') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(100);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(101);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_escaped_sequence_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BSLASH2);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(59);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(59);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AT2);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH3);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_inline_tag_token1);
      if (aux_sym_inline_tag_token1_character_set_3(lookahead)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_inline_tag_token2);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_inline_tag_token3);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__inline_tag_label_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__inline_tag_content_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__inline_tag_patameters_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_nl);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN3);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym__2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE3);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_TILDE2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (aux_sym_inline_tag_token1_character_set_3(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_word_token3);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_raw_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 13, .external_lex_state = 2},
  [2] = {.lex_state = 13, .external_lex_state = 2},
  [3] = {.lex_state = 13, .external_lex_state = 2},
  [4] = {.lex_state = 13, .external_lex_state = 2},
  [5] = {.lex_state = 13, .external_lex_state = 2},
  [6] = {.lex_state = 13, .external_lex_state = 2},
  [7] = {.lex_state = 13, .external_lex_state = 2},
  [8] = {.lex_state = 13, .external_lex_state = 2},
  [9] = {.lex_state = 13, .external_lex_state = 2},
  [10] = {.lex_state = 13, .external_lex_state = 2},
  [11] = {.lex_state = 13, .external_lex_state = 2},
  [12] = {.lex_state = 13, .external_lex_state = 2},
  [13] = {.lex_state = 13, .external_lex_state = 2},
  [14] = {.lex_state = 13, .external_lex_state = 2},
  [15] = {.lex_state = 13, .external_lex_state = 2},
  [16] = {.lex_state = 13, .external_lex_state = 2},
  [17] = {.lex_state = 13, .external_lex_state = 2},
  [18] = {.lex_state = 13, .external_lex_state = 2},
  [19] = {.lex_state = 13, .external_lex_state = 2},
  [20] = {.lex_state = 13, .external_lex_state = 2},
  [21] = {.lex_state = 13, .external_lex_state = 2},
  [22] = {.lex_state = 13, .external_lex_state = 2},
  [23] = {.lex_state = 13, .external_lex_state = 2},
  [24] = {.lex_state = 13, .external_lex_state = 2},
  [25] = {.lex_state = 13, .external_lex_state = 2},
  [26] = {.lex_state = 13, .external_lex_state = 2},
  [27] = {.lex_state = 13, .external_lex_state = 2},
  [28] = {.lex_state = 13, .external_lex_state = 2},
  [29] = {.lex_state = 13, .external_lex_state = 2},
  [30] = {.lex_state = 13, .external_lex_state = 2},
  [31] = {.lex_state = 13, .external_lex_state = 2},
  [32] = {.lex_state = 13, .external_lex_state = 2},
  [33] = {.lex_state = 13, .external_lex_state = 2},
  [34] = {.lex_state = 13, .external_lex_state = 2},
  [35] = {.lex_state = 13, .external_lex_state = 2},
  [36] = {.lex_state = 13, .external_lex_state = 2},
  [37] = {.lex_state = 13, .external_lex_state = 2},
  [38] = {.lex_state = 13, .external_lex_state = 2},
  [39] = {.lex_state = 13, .external_lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 2},
  [41] = {.lex_state = 13, .external_lex_state = 2},
  [42] = {.lex_state = 13, .external_lex_state = 2},
  [43] = {.lex_state = 13, .external_lex_state = 2},
  [44] = {.lex_state = 13, .external_lex_state = 2},
  [45] = {.lex_state = 13, .external_lex_state = 2},
  [46] = {.lex_state = 13, .external_lex_state = 2},
  [47] = {.lex_state = 13, .external_lex_state = 2},
  [48] = {.lex_state = 13, .external_lex_state = 2},
  [49] = {.lex_state = 13, .external_lex_state = 2},
  [50] = {.lex_state = 13, .external_lex_state = 2},
  [51] = {.lex_state = 13, .external_lex_state = 2},
  [52] = {.lex_state = 13, .external_lex_state = 2},
  [53] = {.lex_state = 13, .external_lex_state = 2},
  [54] = {.lex_state = 13, .external_lex_state = 2},
  [55] = {.lex_state = 13, .external_lex_state = 2},
  [56] = {.lex_state = 13, .external_lex_state = 2},
  [57] = {.lex_state = 13, .external_lex_state = 2},
  [58] = {.lex_state = 13, .external_lex_state = 2},
  [59] = {.lex_state = 13, .external_lex_state = 2},
  [60] = {.lex_state = 13, .external_lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 4, .external_lex_state = 3},
  [67] = {.lex_state = 4, .external_lex_state = 3},
  [68] = {.lex_state = 4, .external_lex_state = 3},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 4, .external_lex_state = 3},
  [71] = {.lex_state = 4, .external_lex_state = 3},
  [72] = {.lex_state = 6, .external_lex_state = 4},
  [73] = {.lex_state = 6, .external_lex_state = 4},
  [74] = {.lex_state = 6, .external_lex_state = 4},
  [75] = {.lex_state = 6, .external_lex_state = 4},
  [76] = {.lex_state = 4, .external_lex_state = 3},
  [77] = {.lex_state = 6, .external_lex_state = 4},
  [78] = {.lex_state = 6, .external_lex_state = 4},
  [79] = {.lex_state = 6, .external_lex_state = 4},
  [80] = {.lex_state = 4, .external_lex_state = 3},
  [81] = {.lex_state = 4, .external_lex_state = 3},
  [82] = {.lex_state = 6, .external_lex_state = 4},
  [83] = {.lex_state = 2, .external_lex_state = 5},
  [84] = {.lex_state = 6, .external_lex_state = 4},
  [85] = {.lex_state = 6, .external_lex_state = 4},
  [86] = {.lex_state = 4, .external_lex_state = 3},
  [87] = {.lex_state = 4, .external_lex_state = 3},
  [88] = {.lex_state = 4, .external_lex_state = 3},
  [89] = {.lex_state = 6, .external_lex_state = 4},
  [90] = {.lex_state = 2, .external_lex_state = 5},
  [91] = {.lex_state = 4, .external_lex_state = 3},
  [92] = {.lex_state = 4, .external_lex_state = 3},
  [93] = {.lex_state = 4, .external_lex_state = 3},
  [94] = {.lex_state = 6, .external_lex_state = 4},
  [95] = {.lex_state = 4, .external_lex_state = 3},
  [96] = {.lex_state = 4, .external_lex_state = 3},
  [97] = {.lex_state = 4, .external_lex_state = 3},
  [98] = {.lex_state = 4, .external_lex_state = 3},
  [99] = {.lex_state = 4, .external_lex_state = 3},
  [100] = {.lex_state = 4, .external_lex_state = 3},
  [101] = {.lex_state = 4, .external_lex_state = 3},
  [102] = {.lex_state = 4, .external_lex_state = 3},
  [103] = {.lex_state = 4, .external_lex_state = 3},
  [104] = {.lex_state = 6, .external_lex_state = 4},
  [105] = {.lex_state = 4, .external_lex_state = 3},
  [106] = {.lex_state = 4, .external_lex_state = 3},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 4, .external_lex_state = 3},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 2, .external_lex_state = 5},
  [120] = {.lex_state = 2, .external_lex_state = 5},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 2, .external_lex_state = 5},
  [123] = {.lex_state = 2, .external_lex_state = 5},
  [124] = {.lex_state = 2, .external_lex_state = 5},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 13, .external_lex_state = 5},
  [127] = {.lex_state = 6, .external_lex_state = 5},
  [128] = {.lex_state = 13, .external_lex_state = 5},
  [129] = {.lex_state = 6, .external_lex_state = 4},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 6, .external_lex_state = 4},
  [132] = {.lex_state = 6, .external_lex_state = 5},
  [133] = {.lex_state = 6, .external_lex_state = 4},
  [134] = {.lex_state = 13, .external_lex_state = 5},
  [135] = {.lex_state = 13, .external_lex_state = 5},
  [136] = {.lex_state = 6, .external_lex_state = 5},
  [137] = {.lex_state = 13, .external_lex_state = 5},
  [138] = {.lex_state = 6, .external_lex_state = 5},
  [139] = {.lex_state = 13, .external_lex_state = 5},
  [140] = {.lex_state = 13, .external_lex_state = 5},
  [141] = {.lex_state = 13, .external_lex_state = 5},
  [142] = {.lex_state = 13, .external_lex_state = 5},
  [143] = {.lex_state = 13, .external_lex_state = 5},
  [144] = {.lex_state = 6, .external_lex_state = 4},
  [145] = {.lex_state = 6, .external_lex_state = 4},
  [146] = {.lex_state = 6, .external_lex_state = 5},
  [147] = {.lex_state = 6, .external_lex_state = 5},
  [148] = {.lex_state = 13, .external_lex_state = 5},
  [149] = {.lex_state = 6, .external_lex_state = 5},
  [150] = {.lex_state = 2, .external_lex_state = 5},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 2, .external_lex_state = 5},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 6, .external_lex_state = 5},
  [155] = {.lex_state = 6, .external_lex_state = 4},
  [156] = {.lex_state = 6, .external_lex_state = 4},
  [157] = {.lex_state = 6, .external_lex_state = 4},
  [158] = {.lex_state = 6, .external_lex_state = 4},
  [159] = {.lex_state = 13, .external_lex_state = 5},
  [160] = {.lex_state = 6, .external_lex_state = 4},
  [161] = {.lex_state = 6, .external_lex_state = 4},
  [162] = {.lex_state = 2, .external_lex_state = 5},
  [163] = {.lex_state = 2, .external_lex_state = 5},
  [164] = {.lex_state = 2, .external_lex_state = 5},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 2, .external_lex_state = 5},
  [167] = {.lex_state = 2, .external_lex_state = 5},
  [168] = {.lex_state = 2, .external_lex_state = 5},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 2, .external_lex_state = 5},
  [171] = {.lex_state = 2, .external_lex_state = 5},
  [172] = {.lex_state = 2, .external_lex_state = 5},
  [173] = {.lex_state = 6, .external_lex_state = 5},
  [174] = {.lex_state = 2, .external_lex_state = 5},
  [175] = {.lex_state = 6},
  [176] = {.lex_state = 2, .external_lex_state = 5},
  [177] = {.lex_state = 2, .external_lex_state = 5},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 2, .external_lex_state = 5},
  [180] = {.lex_state = 2, .external_lex_state = 5},
  [181] = {.lex_state = 6, .external_lex_state = 5},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 2, .external_lex_state = 5},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 2, .external_lex_state = 5},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 11},
  [191] = {.lex_state = 11},
  [192] = {.lex_state = 11},
  [193] = {.lex_state = 11},
  [194] = {.lex_state = 0},
};

enum {
  ts_external_token_heading_1_token = 0,
  ts_external_token_heading_2_token = 1,
  ts_external_token_heading_3_token = 2,
  ts_external_token_heading_4_token = 3,
  ts_external_token_heading_5_token = 4,
  ts_external_token_heading_6_token = 5,
  ts_external_token_hashtag_token = 6,
  ts_external_token_tag_token = 7,
  ts_external_token_tag_parameter = 8,
  ts_external_token_end_tag = 9,
  ts_external_token_tag_label_open = 10,
  ts_external_token_soft_break = 11,
  ts_external_token_hard_break = 12,
  ts_external_token__eof = 13,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_heading_1_token] = sym_heading_1_token,
  [ts_external_token_heading_2_token] = sym_heading_2_token,
  [ts_external_token_heading_3_token] = sym_heading_3_token,
  [ts_external_token_heading_4_token] = sym_heading_4_token,
  [ts_external_token_heading_5_token] = sym_heading_5_token,
  [ts_external_token_heading_6_token] = sym_heading_6_token,
  [ts_external_token_hashtag_token] = sym_hashtag_token,
  [ts_external_token_tag_token] = sym_tag_token,
  [ts_external_token_tag_parameter] = sym_tag_parameter,
  [ts_external_token_end_tag] = sym_end_tag,
  [ts_external_token_tag_label_open] = sym_tag_label_open,
  [ts_external_token_soft_break] = sym_soft_break,
  [ts_external_token_hard_break] = sym_hard_break,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_heading_1_token] = true,
    [ts_external_token_heading_2_token] = true,
    [ts_external_token_heading_3_token] = true,
    [ts_external_token_heading_4_token] = true,
    [ts_external_token_heading_5_token] = true,
    [ts_external_token_heading_6_token] = true,
    [ts_external_token_hashtag_token] = true,
    [ts_external_token_tag_token] = true,
    [ts_external_token_tag_parameter] = true,
    [ts_external_token_end_tag] = true,
    [ts_external_token_tag_label_open] = true,
    [ts_external_token_soft_break] = true,
    [ts_external_token_hard_break] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token_hashtag_token] = true,
    [ts_external_token_tag_token] = true,
    [ts_external_token_hard_break] = true,
    [ts_external_token__eof] = true,
  },
  [3] = {
    [ts_external_token_tag_token] = true,
  },
  [4] = {
    [ts_external_token_tag_token] = true,
    [ts_external_token_end_tag] = true,
  },
  [5] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AT2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BSLASH3] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_inline_tag_token1] = ACTIONS(1),
    [aux_sym_inline_tag_token2] = ACTIONS(1),
    [aux_sym_inline_tag_token3] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RPAREN2] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [sym_nl] = ACTIONS(1),
    [anon_sym_BANG2] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_PERCENT2] = ACTIONS(1),
    [anon_sym_AMP2] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_RPAREN3] = ACTIONS(1),
    [anon_sym_STAR2] = ACTIONS(1),
    [anon_sym_PLUS2] = ACTIONS(1),
    [anon_sym_COMMA2] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_COLON3] = ACTIONS(1),
    [anon_sym_SEMI2] = ACTIONS(1),
    [anon_sym_LT2] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_GT2] = ACTIONS(1),
    [anon_sym_QMARK2] = ACTIONS(1),
    [anon_sym_LBRACK2] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_BSLASH4] = ACTIONS(1),
    [anon_sym_CARET2] = ACTIONS(1),
    [anon_sym__2] = ACTIONS(1),
    [anon_sym_BQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_PIPE2] = ACTIONS(1),
    [anon_sym_RBRACE3] = ACTIONS(1),
    [anon_sym_TILDE2] = ACTIONS(1),
    [aux_sym_word_token1] = ACTIONS(1),
    [aux_sym_word_token2] = ACTIONS(1),
    [aux_sym_word_token3] = ACTIONS(1),
    [sym_heading_1_token] = ACTIONS(1),
    [sym_heading_2_token] = ACTIONS(1),
    [sym_heading_3_token] = ACTIONS(1),
    [sym_heading_4_token] = ACTIONS(1),
    [sym_heading_5_token] = ACTIONS(1),
    [sym_heading_6_token] = ACTIONS(1),
    [sym_hashtag_token] = ACTIONS(1),
    [sym_tag_token] = ACTIONS(1),
    [sym_tag_parameter] = ACTIONS(1),
    [sym_end_tag] = ACTIONS(1),
    [sym_tag_label_open] = ACTIONS(1),
    [sym_soft_break] = ACTIONS(1),
    [sym_hard_break] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(194),
    [sym_paragraph] = STATE(3),
    [sym_escaped_sequence] = STATE(5),
    [sym_comment] = STATE(3),
    [sym_inline_tag] = STATE(5),
    [sym_verbatim_tag] = STATE(3),
    [sym_hashtag] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(5),
    [anon_sym_BSLASH] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(7),
    [sym_nl] = ACTIONS(9),
    [anon_sym_BANG2] = ACTIONS(11),
    [anon_sym_DQUOTE2] = ACTIONS(11),
    [anon_sym_DOLLAR2] = ACTIONS(11),
    [anon_sym_PERCENT2] = ACTIONS(11),
    [anon_sym_AMP2] = ACTIONS(11),
    [anon_sym_SQUOTE2] = ACTIONS(11),
    [anon_sym_LPAREN2] = ACTIONS(11),
    [anon_sym_RPAREN3] = ACTIONS(11),
    [anon_sym_STAR2] = ACTIONS(11),
    [anon_sym_PLUS2] = ACTIONS(11),
    [anon_sym_COMMA2] = ACTIONS(11),
    [anon_sym_DASH2] = ACTIONS(11),
    [anon_sym_DOT2] = ACTIONS(11),
    [anon_sym_SLASH2] = ACTIONS(11),
    [anon_sym_COLON3] = ACTIONS(11),
    [anon_sym_SEMI2] = ACTIONS(11),
    [anon_sym_LT2] = ACTIONS(11),
    [anon_sym_EQ2] = ACTIONS(11),
    [anon_sym_GT2] = ACTIONS(11),
    [anon_sym_QMARK2] = ACTIONS(11),
    [anon_sym_LBRACK2] = ACTIONS(11),
    [anon_sym_RBRACK2] = ACTIONS(11),
    [anon_sym_BSLASH4] = ACTIONS(11),
    [anon_sym_CARET2] = ACTIONS(11),
    [anon_sym__2] = ACTIONS(11),
    [anon_sym_BQUOTE2] = ACTIONS(11),
    [anon_sym_LBRACE2] = ACTIONS(11),
    [anon_sym_PIPE2] = ACTIONS(11),
    [anon_sym_RBRACE3] = ACTIONS(11),
    [anon_sym_TILDE2] = ACTIONS(11),
    [aux_sym_word_token1] = ACTIONS(11),
    [aux_sym_word_token2] = ACTIONS(11),
    [aux_sym_word_token3] = ACTIONS(11),
    [sym_hashtag_token] = ACTIONS(13),
    [sym_tag_token] = ACTIONS(15),
    [sym_hard_break] = ACTIONS(17),
    [sym__eof] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_BSLASH,
    ACTIONS(24), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_hashtag_token,
    ACTIONS(39), 1,
      sym_tag_token,
    ACTIONS(42), 1,
      sym_hard_break,
    ACTIONS(27), 2,
      anon_sym_AT,
      anon_sym_COLON,
    ACTIONS(30), 2,
      sym__eof,
      sym_nl,
    STATE(5), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      aux_sym_paragraph_repeat1,
    STATE(2), 5,
      sym_paragraph,
      sym_comment,
      sym_verbatim_tag,
      sym_hashtag,
      aux_sym_document_repeat1,
    ACTIONS(33), 33,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [74] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_hashtag_token,
    ACTIONS(15), 1,
      sym_tag_token,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_hard_break,
    ACTIONS(7), 2,
      anon_sym_AT,
      anon_sym_COLON,
    ACTIONS(9), 2,
      sym__eof,
      sym_nl,
    STATE(5), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      aux_sym_paragraph_repeat1,
    STATE(2), 5,
      sym_paragraph,
      sym_comment,
      sym_verbatim_tag,
      sym_hashtag,
      aux_sym_document_repeat1,
    ACTIONS(11), 33,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [148] = 8,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      sym_tag_token,
    ACTIONS(56), 2,
      anon_sym_AT,
      anon_sym_COLON,
    ACTIONS(59), 2,
      sym__eof,
      sym_nl,
    ACTIONS(49), 3,
      sym_hashtag_token,
      sym_hard_break,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      aux_sym_paragraph_repeat1,
    ACTIONS(62), 33,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [211] = 8,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      anon_sym_POUND,
    ACTIONS(84), 1,
      sym_tag_token,
    ACTIONS(75), 2,
      anon_sym_AT,
      anon_sym_COLON,
    ACTIONS(78), 2,
      sym__eof,
      sym_nl,
    ACTIONS(68), 3,
      sym_hashtag_token,
      sym_hard_break,
      ts_builtin_sym_end,
    STATE(4), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      aux_sym_paragraph_repeat1,
    ACTIONS(81), 33,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [274] = 2,
    ACTIONS(87), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(89), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [322] = 2,
    ACTIONS(91), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(93), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [370] = 2,
    ACTIONS(95), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(97), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [418] = 2,
    ACTIONS(99), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(101), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [466] = 2,
    ACTIONS(103), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(105), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [514] = 2,
    ACTIONS(107), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(109), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [562] = 2,
    ACTIONS(111), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(113), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [610] = 2,
    ACTIONS(115), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(117), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [658] = 2,
    ACTIONS(119), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(121), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [706] = 2,
    ACTIONS(123), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(125), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [754] = 2,
    ACTIONS(127), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(129), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [802] = 2,
    ACTIONS(119), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(121), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [850] = 2,
    ACTIONS(119), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(121), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [898] = 2,
    ACTIONS(131), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(134), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [946] = 2,
    ACTIONS(137), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(139), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [994] = 2,
    ACTIONS(119), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(121), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1042] = 2,
    ACTIONS(119), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(121), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1090] = 2,
    ACTIONS(119), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(121), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1138] = 2,
    ACTIONS(141), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(143), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1186] = 2,
    ACTIONS(145), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(147), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1234] = 2,
    ACTIONS(103), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(105), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1282] = 2,
    ACTIONS(111), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(113), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1330] = 2,
    ACTIONS(111), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(113), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1378] = 2,
    ACTIONS(111), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(113), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1426] = 2,
    ACTIONS(91), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(93), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1474] = 2,
    ACTIONS(149), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(151), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1522] = 2,
    ACTIONS(153), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(155), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1570] = 2,
    ACTIONS(91), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(93), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1618] = 2,
    ACTIONS(95), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(97), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1666] = 2,
    ACTIONS(87), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(89), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1714] = 2,
    ACTIONS(103), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(105), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1762] = 2,
    ACTIONS(87), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(89), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1810] = 2,
    ACTIONS(157), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(159), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1858] = 2,
    ACTIONS(111), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(113), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1906] = 2,
    ACTIONS(111), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(113), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [1954] = 2,
    ACTIONS(91), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(93), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2002] = 2,
    ACTIONS(91), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(93), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2050] = 2,
    ACTIONS(91), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(93), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2098] = 2,
    ACTIONS(87), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(89), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2146] = 2,
    ACTIONS(87), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(89), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2194] = 2,
    ACTIONS(87), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(89), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2242] = 2,
    ACTIONS(95), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(97), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2290] = 2,
    ACTIONS(103), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(105), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2338] = 2,
    ACTIONS(103), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(105), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2386] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(163), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2434] = 2,
    ACTIONS(103), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(105), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2482] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(163), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2530] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(163), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2578] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(163), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2626] = 2,
    ACTIONS(95), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(97), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2674] = 2,
    ACTIONS(95), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(97), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2722] = 2,
    ACTIONS(95), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(97), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2770] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(163), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2818] = 2,
    ACTIONS(165), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(167), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2866] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      sym_nl,
    ACTIONS(163), 37,
      anon_sym_BSLASH,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_COLON,
      anon_sym_BANG2,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR2,
      anon_sym_PERCENT2,
      anon_sym_AMP2,
      anon_sym_SQUOTE2,
      anon_sym_LPAREN2,
      anon_sym_RPAREN3,
      anon_sym_STAR2,
      anon_sym_PLUS2,
      anon_sym_COMMA2,
      anon_sym_DASH2,
      anon_sym_DOT2,
      anon_sym_SLASH2,
      anon_sym_COLON3,
      anon_sym_SEMI2,
      anon_sym_LT2,
      anon_sym_EQ2,
      anon_sym_GT2,
      anon_sym_QMARK2,
      anon_sym_LBRACK2,
      anon_sym_RBRACK2,
      anon_sym_BSLASH4,
      anon_sym_CARET2,
      anon_sym__2,
      anon_sym_BQUOTE2,
      anon_sym_LBRACE2,
      anon_sym_PIPE2,
      anon_sym_RBRACE3,
      anon_sym_TILDE2,
      aux_sym_word_token1,
      aux_sym_word_token2,
      aux_sym_word_token3,
  [2914] = 2,
    ACTIONS(171), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(169), 34,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON2,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT2,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
      anon_sym_LBRACK,
  [2954] = 2,
    ACTIONS(175), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(173), 34,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON2,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT2,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
      anon_sym_LBRACK,
  [2994] = 3,
    ACTIONS(179), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 33,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON2,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT2,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
  [3036] = 2,
    ACTIONS(185), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(183), 33,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON2,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT2,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
  [3075] = 2,
    ACTIONS(189), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(187), 33,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND2,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_SQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON2,
      anon_sym_SEMI,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_QMARK,
      anon_sym_AT2,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
  [3114] = 8,
    ACTIONS(191), 1,
      anon_sym_BSLASH,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      aux_sym__inline_tag_label_token1,
    ACTIONS(202), 1,
      sym_nl,
    ACTIONS(205), 1,
      sym_tag_token,
    STATE(66), 1,
      aux_sym__inline_tag_label_repeat1,
    ACTIONS(194), 2,
      anon_sym_AT,
      anon_sym_COLON,
    STATE(70), 2,
      sym_escaped_sequence,
      sym_inline_tag,
  [3141] = 8,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    ACTIONS(214), 1,
      aux_sym__inline_tag_label_token1,
    ACTIONS(216), 1,
      sym_nl,
    ACTIONS(218), 1,
      sym_tag_token,
    STATE(66), 1,
      aux_sym__inline_tag_label_repeat1,
    ACTIONS(210), 2,
      anon_sym_AT,
      anon_sym_COLON,
    STATE(70), 2,
      sym_escaped_sequence,
      sym_inline_tag,
  [3168] = 8,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(214), 1,
      aux_sym__inline_tag_label_token1,
    ACTIONS(216), 1,
      sym_nl,
    ACTIONS(218), 1,
      sym_tag_token,
    ACTIONS(220), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym__inline_tag_label_repeat1,
    ACTIONS(210), 2,
      anon_sym_AT,
      anon_sym_COLON,
    STATE(70), 2,
      sym_escaped_sequence,
      sym_inline_tag,
  [3195] = 8,
    ACTIONS(222), 1,
      anon_sym_,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      sym_nl,
    STATE(90), 1,
      sym__inline_tag_label,
    STATE(119), 1,
      sym__inline_tag_content,
    STATE(177), 1,
      sym__inline_tag_patameters,
  [3220] = 2,
    ACTIONS(234), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(232), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3232] = 2,
    ACTIONS(111), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(113), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3244] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(242), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3266] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(244), 1,
      sym_end_tag,
    STATE(72), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3288] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(246), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3310] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(248), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3332] = 2,
    ACTIONS(95), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(97), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3344] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(250), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3366] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(252), 1,
      sym_end_tag,
    STATE(74), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3388] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(254), 1,
      sym_end_tag,
    STATE(77), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3410] = 2,
    ACTIONS(95), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(97), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3422] = 2,
    ACTIONS(161), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(163), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3434] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(256), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3456] = 7,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_,
    ACTIONS(260), 1,
      sym_nl,
    ACTIONS(262), 1,
      sym__eof,
    STATE(122), 1,
      sym__inline_tag_content,
    STATE(163), 1,
      sym__inline_tag_patameters,
  [3478] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(264), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3500] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(266), 1,
      sym_end_tag,
    STATE(82), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3522] = 2,
    ACTIONS(161), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(163), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3534] = 2,
    ACTIONS(161), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(163), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3546] = 2,
    ACTIONS(123), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(125), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3558] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(268), 1,
      sym_end_tag,
    STATE(75), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3580] = 7,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_,
    ACTIONS(272), 1,
      sym_nl,
    ACTIONS(274), 1,
      sym__eof,
    STATE(124), 1,
      sym__inline_tag_content,
    STATE(186), 1,
      sym__inline_tag_patameters,
  [3602] = 2,
    ACTIONS(103), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(105), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3614] = 2,
    ACTIONS(119), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(121), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3626] = 2,
    ACTIONS(119), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(121), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3638] = 7,
    ACTIONS(276), 1,
      sym_nl,
    ACTIONS(279), 1,
      sym_raw_word,
    ACTIONS(282), 1,
      sym_tag_token,
    ACTIONS(285), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3660] = 2,
    ACTIONS(119), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(121), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3672] = 2,
    ACTIONS(103), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(105), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3684] = 2,
    ACTIONS(111), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(113), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3696] = 2,
    ACTIONS(95), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(97), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3708] = 2,
    ACTIONS(111), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(113), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3720] = 2,
    ACTIONS(103), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(105), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3732] = 2,
    ACTIONS(91), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(93), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3744] = 2,
    ACTIONS(91), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(93), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3756] = 2,
    ACTIONS(91), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(93), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3768] = 7,
    ACTIONS(236), 1,
      sym_nl,
    ACTIONS(238), 1,
      sym_raw_word,
    ACTIONS(240), 1,
      sym_tag_token,
    ACTIONS(287), 1,
      sym_end_tag,
    STATE(84), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(129), 1,
      sym_verbatim_tag,
    STATE(175), 1,
      aux_sym_verbatim_tag_repeat2,
  [3790] = 2,
    ACTIONS(87), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(89), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3802] = 2,
    ACTIONS(87), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(89), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3814] = 7,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(289), 1,
      anon_sym_,
    ACTIONS(291), 1,
      sym_nl,
    ACTIONS(293), 1,
      sym__eof,
    STATE(123), 1,
      sym__inline_tag_content,
    STATE(162), 1,
      sym__inline_tag_patameters,
  [3836] = 2,
    ACTIONS(87), 3,
      sym_tag_token,
      anon_sym_RBRACK,
      sym_nl,
    ACTIONS(89), 4,
      anon_sym_BSLASH,
      anon_sym_AT,
      anon_sym_COLON,
      aux_sym__inline_tag_label_token1,
  [3848] = 6,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      aux_sym__inline_tag_content_token1,
    ACTIONS(299), 1,
      anon_sym_RPAREN2,
    ACTIONS(301), 1,
      sym_nl,
    STATE(112), 1,
      aux_sym__inline_tag_content_repeat1,
    STATE(151), 1,
      sym_escaped_sequence,
  [3867] = 6,
    ACTIONS(303), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      aux_sym__inline_tag_patameters_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACE2,
    ACTIONS(309), 1,
      sym_nl,
    STATE(111), 1,
      aux_sym__inline_tag_patameters_repeat1,
    STATE(153), 1,
      sym_escaped_sequence,
  [3886] = 6,
    ACTIONS(311), 1,
      anon_sym_BSLASH,
    ACTIONS(314), 1,
      aux_sym__inline_tag_patameters_token1,
    ACTIONS(317), 1,
      anon_sym_RBRACE2,
    ACTIONS(319), 1,
      sym_nl,
    STATE(111), 1,
      aux_sym__inline_tag_patameters_repeat1,
    STATE(153), 1,
      sym_escaped_sequence,
  [3905] = 6,
    ACTIONS(322), 1,
      anon_sym_BSLASH,
    ACTIONS(325), 1,
      aux_sym__inline_tag_content_token1,
    ACTIONS(328), 1,
      anon_sym_RPAREN2,
    ACTIONS(330), 1,
      sym_nl,
    STATE(112), 1,
      aux_sym__inline_tag_content_repeat1,
    STATE(151), 1,
      sym_escaped_sequence,
  [3924] = 6,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym__inline_tag_label,
    STATE(121), 1,
      sym__inline_tag_content,
    STATE(171), 1,
      sym__inline_tag_patameters,
  [3943] = 6,
    ACTIONS(303), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      aux_sym__inline_tag_patameters_token1,
    ACTIONS(309), 1,
      sym_nl,
    ACTIONS(333), 1,
      anon_sym_RBRACE2,
    STATE(110), 1,
      aux_sym__inline_tag_patameters_repeat1,
    STATE(153), 1,
      sym_escaped_sequence,
  [3962] = 6,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      aux_sym__inline_tag_content_token1,
    ACTIONS(301), 1,
      sym_nl,
    ACTIONS(335), 1,
      anon_sym_RPAREN2,
    STATE(109), 1,
      aux_sym__inline_tag_content_repeat1,
    STATE(151), 1,
      sym_escaped_sequence,
  [3981] = 6,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__inline_tag_label,
    STATE(117), 1,
      sym__inline_tag_content,
    STATE(170), 1,
      sym__inline_tag_patameters,
  [4000] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(339), 1,
      sym_nl,
    ACTIONS(341), 1,
      sym__eof,
    STATE(174), 1,
      sym__inline_tag_patameters,
  [4016] = 2,
    ACTIONS(343), 2,
      anon_sym_,
      sym_nl,
    ACTIONS(345), 3,
      sym__eof,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4026] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(349), 1,
      sym_nl,
    ACTIONS(351), 1,
      sym__eof,
    STATE(180), 1,
      sym__inline_tag_patameters,
  [4042] = 2,
    ACTIONS(353), 2,
      anon_sym_,
      sym_nl,
    ACTIONS(355), 3,
      sym__eof,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4052] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_,
    ACTIONS(359), 1,
      sym_nl,
    ACTIONS(361), 1,
      sym__eof,
    STATE(176), 1,
      sym__inline_tag_patameters,
  [4068] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(363), 1,
      anon_sym_,
    ACTIONS(365), 1,
      sym_nl,
    ACTIONS(367), 1,
      sym__eof,
    STATE(179), 1,
      sym__inline_tag_patameters,
  [4084] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(371), 1,
      sym_nl,
    ACTIONS(373), 1,
      sym__eof,
    STATE(172), 1,
      sym__inline_tag_patameters,
  [4100] = 5,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(375), 1,
      anon_sym_,
    ACTIONS(377), 1,
      sym_nl,
    ACTIONS(379), 1,
      sym__eof,
    STATE(167), 1,
      sym__inline_tag_patameters,
  [4116] = 2,
    ACTIONS(123), 1,
      sym_nl,
    ACTIONS(125), 3,
      anon_sym_BSLASH,
      aux_sym__inline_tag_patameters_token1,
      anon_sym_RBRACE2,
  [4125] = 3,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(383), 2,
      sym__eof,
      sym_nl,
  [4136] = 3,
    ACTIONS(387), 1,
      sym_raw_word,
    STATE(138), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(385), 2,
      sym__eof,
      sym_nl,
  [4147] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(389), 2,
      sym__eof,
      sym_nl,
  [4158] = 2,
    ACTIONS(393), 1,
      sym_raw_word,
    ACTIONS(391), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4167] = 2,
    ACTIONS(123), 1,
      sym_nl,
    ACTIONS(125), 3,
      anon_sym_BSLASH,
      aux_sym__inline_tag_content_token1,
      anon_sym_RPAREN2,
  [4176] = 2,
    ACTIONS(129), 1,
      sym_raw_word,
    ACTIONS(127), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4185] = 3,
    ACTIONS(397), 1,
      sym_raw_word,
    STATE(132), 1,
      aux_sym_comment_repeat1,
    ACTIONS(395), 2,
      sym__eof,
      sym_nl,
  [4196] = 2,
    ACTIONS(151), 1,
      sym_raw_word,
    ACTIONS(149), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4205] = 3,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(400), 2,
      sym__eof,
      sym_nl,
  [4216] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(402), 2,
      sym__eof,
      sym_nl,
  [4227] = 3,
    ACTIONS(406), 1,
      sym_raw_word,
    STATE(146), 1,
      aux_sym_comment_repeat1,
    ACTIONS(404), 2,
      sym__eof,
      sym_nl,
  [4238] = 3,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym__eof,
      sym_nl,
  [4249] = 3,
    ACTIONS(387), 1,
      sym_raw_word,
    STATE(149), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(410), 2,
      sym__eof,
      sym_nl,
  [4260] = 3,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym__eof,
      sym_nl,
  [4271] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym__eof,
      sym_nl,
  [4282] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(416), 2,
      sym__eof,
      sym_nl,
  [4293] = 3,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(418), 2,
      sym__eof,
      sym_nl,
  [4304] = 3,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(145), 1,
      sym_comment,
    ACTIONS(420), 2,
      sym__eof,
      sym_nl,
  [4315] = 2,
    ACTIONS(117), 1,
      sym_raw_word,
    ACTIONS(115), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4324] = 2,
    ACTIONS(167), 1,
      sym_raw_word,
    ACTIONS(165), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4333] = 3,
    ACTIONS(406), 1,
      sym_raw_word,
    STATE(132), 1,
      aux_sym_comment_repeat1,
    ACTIONS(422), 2,
      sym__eof,
      sym_nl,
  [4344] = 3,
    ACTIONS(406), 1,
      sym_raw_word,
    STATE(132), 1,
      aux_sym_comment_repeat1,
    ACTIONS(424), 2,
      sym__eof,
      sym_nl,
  [4355] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(426), 2,
      sym__eof,
      sym_nl,
  [4366] = 3,
    ACTIONS(430), 1,
      sym_raw_word,
    STATE(149), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(428), 2,
      sym__eof,
      sym_nl,
  [4377] = 2,
    ACTIONS(433), 2,
      anon_sym_,
      sym_nl,
    ACTIONS(435), 2,
      sym__eof,
      anon_sym_LBRACE,
  [4386] = 2,
    ACTIONS(439), 1,
      sym_nl,
    ACTIONS(437), 3,
      anon_sym_BSLASH,
      aux_sym__inline_tag_content_token1,
      anon_sym_RPAREN2,
  [4395] = 2,
    ACTIONS(441), 2,
      anon_sym_,
      sym_nl,
    ACTIONS(443), 2,
      sym__eof,
      anon_sym_LBRACE,
  [4404] = 2,
    ACTIONS(447), 1,
      sym_nl,
    ACTIONS(445), 3,
      anon_sym_BSLASH,
      aux_sym__inline_tag_patameters_token1,
      anon_sym_RBRACE2,
  [4413] = 3,
    ACTIONS(406), 1,
      sym_raw_word,
    STATE(147), 1,
      aux_sym_comment_repeat1,
    ACTIONS(449), 2,
      sym__eof,
      sym_nl,
  [4424] = 2,
    ACTIONS(147), 1,
      sym_raw_word,
    ACTIONS(145), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4433] = 2,
    ACTIONS(143), 1,
      sym_raw_word,
    ACTIONS(141), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4442] = 2,
    ACTIONS(451), 1,
      sym_raw_word,
    ACTIONS(285), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4451] = 2,
    ACTIONS(101), 1,
      sym_raw_word,
    ACTIONS(99), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4460] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(453), 2,
      sym__eof,
      sym_nl,
  [4471] = 2,
    ACTIONS(159), 1,
      sym_raw_word,
    ACTIONS(157), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4480] = 2,
    ACTIONS(109), 1,
      sym_raw_word,
    ACTIONS(107), 3,
      sym_tag_token,
      sym_end_tag,
      sym_nl,
  [4489] = 3,
    ACTIONS(455), 1,
      anon_sym_,
    ACTIONS(457), 1,
      sym_nl,
    ACTIONS(459), 1,
      sym__eof,
  [4499] = 3,
    ACTIONS(461), 1,
      anon_sym_,
    ACTIONS(463), 1,
      sym_nl,
    ACTIONS(465), 1,
      sym__eof,
  [4509] = 2,
    ACTIONS(469), 1,
      sym__eof,
    ACTIONS(467), 2,
      anon_sym_,
      sym_nl,
  [4517] = 3,
    ACTIONS(471), 1,
      sym_nl,
    ACTIONS(473), 1,
      sym_raw_word,
    STATE(182), 1,
      aux_sym_verbatim_tag_repeat1,
  [4527] = 3,
    ACTIONS(475), 1,
      anon_sym_,
    ACTIONS(477), 1,
      sym_nl,
    ACTIONS(479), 1,
      sym__eof,
  [4537] = 3,
    ACTIONS(481), 1,
      anon_sym_,
    ACTIONS(483), 1,
      sym_nl,
    ACTIONS(485), 1,
      sym__eof,
  [4547] = 2,
    ACTIONS(489), 1,
      sym__eof,
    ACTIONS(487), 2,
      anon_sym_,
      sym_nl,
  [4555] = 3,
    ACTIONS(473), 1,
      sym_raw_word,
    ACTIONS(491), 1,
      sym_nl,
    STATE(165), 1,
      aux_sym_verbatim_tag_repeat1,
  [4565] = 3,
    ACTIONS(493), 1,
      anon_sym_,
    ACTIONS(495), 1,
      sym_nl,
    ACTIONS(497), 1,
      sym__eof,
  [4575] = 3,
    ACTIONS(499), 1,
      anon_sym_,
    ACTIONS(501), 1,
      sym_nl,
    ACTIONS(503), 1,
      sym__eof,
  [4585] = 3,
    ACTIONS(505), 1,
      anon_sym_,
    ACTIONS(507), 1,
      sym_nl,
    ACTIONS(509), 1,
      sym__eof,
  [4595] = 2,
    ACTIONS(513), 1,
      sym_raw_word,
    ACTIONS(511), 2,
      sym__eof,
      sym_nl,
  [4603] = 3,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym_nl,
    ACTIONS(519), 1,
      sym__eof,
  [4613] = 3,
    ACTIONS(521), 1,
      sym_nl,
    ACTIONS(523), 1,
      sym_raw_word,
    STATE(184), 1,
      aux_sym_verbatim_tag_repeat2,
  [4623] = 3,
    ACTIONS(525), 1,
      anon_sym_,
    ACTIONS(527), 1,
      sym_nl,
    ACTIONS(529), 1,
      sym__eof,
  [4633] = 3,
    ACTIONS(531), 1,
      anon_sym_,
    ACTIONS(533), 1,
      sym_nl,
    ACTIONS(535), 1,
      sym__eof,
  [4643] = 3,
    ACTIONS(473), 1,
      sym_raw_word,
    ACTIONS(537), 1,
      sym_nl,
    STATE(182), 1,
      aux_sym_verbatim_tag_repeat1,
  [4653] = 3,
    ACTIONS(539), 1,
      anon_sym_,
    ACTIONS(541), 1,
      sym_nl,
    ACTIONS(543), 1,
      sym__eof,
  [4663] = 3,
    ACTIONS(545), 1,
      anon_sym_,
    ACTIONS(547), 1,
      sym_nl,
    ACTIONS(549), 1,
      sym__eof,
  [4673] = 2,
    ACTIONS(553), 1,
      sym_raw_word,
    ACTIONS(551), 2,
      sym__eof,
      sym_nl,
  [4681] = 3,
    ACTIONS(428), 1,
      sym_nl,
    ACTIONS(555), 1,
      sym_raw_word,
    STATE(182), 1,
      aux_sym_verbatim_tag_repeat1,
  [4691] = 3,
    ACTIONS(558), 1,
      anon_sym_,
    ACTIONS(560), 1,
      sym_nl,
    ACTIONS(562), 1,
      sym__eof,
  [4701] = 3,
    ACTIONS(564), 1,
      sym_nl,
    ACTIONS(566), 1,
      sym_raw_word,
    STATE(184), 1,
      aux_sym_verbatim_tag_repeat2,
  [4711] = 3,
    ACTIONS(473), 1,
      sym_raw_word,
    ACTIONS(569), 1,
      sym_nl,
    STATE(178), 1,
      aux_sym_verbatim_tag_repeat1,
  [4721] = 3,
    ACTIONS(571), 1,
      anon_sym_,
    ACTIONS(573), 1,
      sym_nl,
    ACTIONS(575), 1,
      sym__eof,
  [4731] = 2,
    ACTIONS(551), 1,
      sym_nl,
    ACTIONS(553), 1,
      sym_raw_word,
  [4738] = 2,
    ACTIONS(577), 1,
      anon_sym_,
    ACTIONS(579), 1,
      sym_nl,
  [4745] = 2,
    ACTIONS(222), 1,
      anon_sym_,
    ACTIONS(230), 1,
      sym_nl,
  [4752] = 1,
    ACTIONS(581), 1,
      aux_sym_escaped_sequence_token1,
  [4756] = 1,
    ACTIONS(583), 1,
      aux_sym_escaped_sequence_token1,
  [4760] = 1,
    ACTIONS(585), 1,
      aux_sym_escaped_sequence_token1,
  [4764] = 1,
    ACTIONS(587), 1,
      aux_sym_escaped_sequence_token1,
  [4768] = 1,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 211,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 370,
  [SMALL_STATE(9)] = 418,
  [SMALL_STATE(10)] = 466,
  [SMALL_STATE(11)] = 514,
  [SMALL_STATE(12)] = 562,
  [SMALL_STATE(13)] = 610,
  [SMALL_STATE(14)] = 658,
  [SMALL_STATE(15)] = 706,
  [SMALL_STATE(16)] = 754,
  [SMALL_STATE(17)] = 802,
  [SMALL_STATE(18)] = 850,
  [SMALL_STATE(19)] = 898,
  [SMALL_STATE(20)] = 946,
  [SMALL_STATE(21)] = 994,
  [SMALL_STATE(22)] = 1042,
  [SMALL_STATE(23)] = 1090,
  [SMALL_STATE(24)] = 1138,
  [SMALL_STATE(25)] = 1186,
  [SMALL_STATE(26)] = 1234,
  [SMALL_STATE(27)] = 1282,
  [SMALL_STATE(28)] = 1330,
  [SMALL_STATE(29)] = 1378,
  [SMALL_STATE(30)] = 1426,
  [SMALL_STATE(31)] = 1474,
  [SMALL_STATE(32)] = 1522,
  [SMALL_STATE(33)] = 1570,
  [SMALL_STATE(34)] = 1618,
  [SMALL_STATE(35)] = 1666,
  [SMALL_STATE(36)] = 1714,
  [SMALL_STATE(37)] = 1762,
  [SMALL_STATE(38)] = 1810,
  [SMALL_STATE(39)] = 1858,
  [SMALL_STATE(40)] = 1906,
  [SMALL_STATE(41)] = 1954,
  [SMALL_STATE(42)] = 2002,
  [SMALL_STATE(43)] = 2050,
  [SMALL_STATE(44)] = 2098,
  [SMALL_STATE(45)] = 2146,
  [SMALL_STATE(46)] = 2194,
  [SMALL_STATE(47)] = 2242,
  [SMALL_STATE(48)] = 2290,
  [SMALL_STATE(49)] = 2338,
  [SMALL_STATE(50)] = 2386,
  [SMALL_STATE(51)] = 2434,
  [SMALL_STATE(52)] = 2482,
  [SMALL_STATE(53)] = 2530,
  [SMALL_STATE(54)] = 2578,
  [SMALL_STATE(55)] = 2626,
  [SMALL_STATE(56)] = 2674,
  [SMALL_STATE(57)] = 2722,
  [SMALL_STATE(58)] = 2770,
  [SMALL_STATE(59)] = 2818,
  [SMALL_STATE(60)] = 2866,
  [SMALL_STATE(61)] = 2914,
  [SMALL_STATE(62)] = 2954,
  [SMALL_STATE(63)] = 2994,
  [SMALL_STATE(64)] = 3036,
  [SMALL_STATE(65)] = 3075,
  [SMALL_STATE(66)] = 3114,
  [SMALL_STATE(67)] = 3141,
  [SMALL_STATE(68)] = 3168,
  [SMALL_STATE(69)] = 3195,
  [SMALL_STATE(70)] = 3220,
  [SMALL_STATE(71)] = 3232,
  [SMALL_STATE(72)] = 3244,
  [SMALL_STATE(73)] = 3266,
  [SMALL_STATE(74)] = 3288,
  [SMALL_STATE(75)] = 3310,
  [SMALL_STATE(76)] = 3332,
  [SMALL_STATE(77)] = 3344,
  [SMALL_STATE(78)] = 3366,
  [SMALL_STATE(79)] = 3388,
  [SMALL_STATE(80)] = 3410,
  [SMALL_STATE(81)] = 3422,
  [SMALL_STATE(82)] = 3434,
  [SMALL_STATE(83)] = 3456,
  [SMALL_STATE(84)] = 3478,
  [SMALL_STATE(85)] = 3500,
  [SMALL_STATE(86)] = 3522,
  [SMALL_STATE(87)] = 3534,
  [SMALL_STATE(88)] = 3546,
  [SMALL_STATE(89)] = 3558,
  [SMALL_STATE(90)] = 3580,
  [SMALL_STATE(91)] = 3602,
  [SMALL_STATE(92)] = 3614,
  [SMALL_STATE(93)] = 3626,
  [SMALL_STATE(94)] = 3638,
  [SMALL_STATE(95)] = 3660,
  [SMALL_STATE(96)] = 3672,
  [SMALL_STATE(97)] = 3684,
  [SMALL_STATE(98)] = 3696,
  [SMALL_STATE(99)] = 3708,
  [SMALL_STATE(100)] = 3720,
  [SMALL_STATE(101)] = 3732,
  [SMALL_STATE(102)] = 3744,
  [SMALL_STATE(103)] = 3756,
  [SMALL_STATE(104)] = 3768,
  [SMALL_STATE(105)] = 3790,
  [SMALL_STATE(106)] = 3802,
  [SMALL_STATE(107)] = 3814,
  [SMALL_STATE(108)] = 3836,
  [SMALL_STATE(109)] = 3848,
  [SMALL_STATE(110)] = 3867,
  [SMALL_STATE(111)] = 3886,
  [SMALL_STATE(112)] = 3905,
  [SMALL_STATE(113)] = 3924,
  [SMALL_STATE(114)] = 3943,
  [SMALL_STATE(115)] = 3962,
  [SMALL_STATE(116)] = 3981,
  [SMALL_STATE(117)] = 4000,
  [SMALL_STATE(118)] = 4016,
  [SMALL_STATE(119)] = 4026,
  [SMALL_STATE(120)] = 4042,
  [SMALL_STATE(121)] = 4052,
  [SMALL_STATE(122)] = 4068,
  [SMALL_STATE(123)] = 4084,
  [SMALL_STATE(124)] = 4100,
  [SMALL_STATE(125)] = 4116,
  [SMALL_STATE(126)] = 4125,
  [SMALL_STATE(127)] = 4136,
  [SMALL_STATE(128)] = 4147,
  [SMALL_STATE(129)] = 4158,
  [SMALL_STATE(130)] = 4167,
  [SMALL_STATE(131)] = 4176,
  [SMALL_STATE(132)] = 4185,
  [SMALL_STATE(133)] = 4196,
  [SMALL_STATE(134)] = 4205,
  [SMALL_STATE(135)] = 4216,
  [SMALL_STATE(136)] = 4227,
  [SMALL_STATE(137)] = 4238,
  [SMALL_STATE(138)] = 4249,
  [SMALL_STATE(139)] = 4260,
  [SMALL_STATE(140)] = 4271,
  [SMALL_STATE(141)] = 4282,
  [SMALL_STATE(142)] = 4293,
  [SMALL_STATE(143)] = 4304,
  [SMALL_STATE(144)] = 4315,
  [SMALL_STATE(145)] = 4324,
  [SMALL_STATE(146)] = 4333,
  [SMALL_STATE(147)] = 4344,
  [SMALL_STATE(148)] = 4355,
  [SMALL_STATE(149)] = 4366,
  [SMALL_STATE(150)] = 4377,
  [SMALL_STATE(151)] = 4386,
  [SMALL_STATE(152)] = 4395,
  [SMALL_STATE(153)] = 4404,
  [SMALL_STATE(154)] = 4413,
  [SMALL_STATE(155)] = 4424,
  [SMALL_STATE(156)] = 4433,
  [SMALL_STATE(157)] = 4442,
  [SMALL_STATE(158)] = 4451,
  [SMALL_STATE(159)] = 4460,
  [SMALL_STATE(160)] = 4471,
  [SMALL_STATE(161)] = 4480,
  [SMALL_STATE(162)] = 4489,
  [SMALL_STATE(163)] = 4499,
  [SMALL_STATE(164)] = 4509,
  [SMALL_STATE(165)] = 4517,
  [SMALL_STATE(166)] = 4527,
  [SMALL_STATE(167)] = 4537,
  [SMALL_STATE(168)] = 4547,
  [SMALL_STATE(169)] = 4555,
  [SMALL_STATE(170)] = 4565,
  [SMALL_STATE(171)] = 4575,
  [SMALL_STATE(172)] = 4585,
  [SMALL_STATE(173)] = 4595,
  [SMALL_STATE(174)] = 4603,
  [SMALL_STATE(175)] = 4613,
  [SMALL_STATE(176)] = 4623,
  [SMALL_STATE(177)] = 4633,
  [SMALL_STATE(178)] = 4643,
  [SMALL_STATE(179)] = 4653,
  [SMALL_STATE(180)] = 4663,
  [SMALL_STATE(181)] = 4673,
  [SMALL_STATE(182)] = 4681,
  [SMALL_STATE(183)] = 4691,
  [SMALL_STATE(184)] = 4701,
  [SMALL_STATE(185)] = 4711,
  [SMALL_STATE(186)] = 4721,
  [SMALL_STATE(187)] = 4731,
  [SMALL_STATE(188)] = 4738,
  [SMALL_STATE(189)] = 4745,
  [SMALL_STATE(190)] = 4752,
  [SMALL_STATE(191)] = 4756,
  [SMALL_STATE(192)] = 4760,
  [SMALL_STATE(193)] = 4764,
  [SMALL_STATE(194)] = 4768,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(191),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(191),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(64),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(64),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(191),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(64),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paragraph, 1), SHIFT(19),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paragraph, 1), SHIFT(64),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 14),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 14),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 15),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 8, .production_id = 21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 8, .production_id = 21),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4, .production_id = 10),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4, .production_id = 10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 7, .production_id = 20),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 7, .production_id = 20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 16),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 16),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 18),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 18),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_sequence, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_sequence, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1), REDUCE(sym_paragraph, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1), REDUCE(sym_paragraph, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtag, 3, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtag, 3, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 6, .production_id = 17),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 6, .production_id = 17),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 6, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 6, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtag, 4, .production_id = 4),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtag, 4, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 7, .production_id = 19),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 7, .production_id = 19),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 4, .production_id = 9),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 4, .production_id = 9),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 5, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 5, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_label_repeat1, 2), SHIFT_REPEAT(192),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_label_repeat1, 2), SHIFT_REPEAT(65),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_tag_label_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_label_repeat1, 2), SHIFT_REPEAT(70),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_tag_label_repeat1, 2), SHIFT_REPEAT(70),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_tag_label_repeat1, 2), SHIFT_REPEAT(65),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_tag_label_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_tag_label_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2), SHIFT_REPEAT(129),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2), SHIFT_REPEAT(175),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2), SHIFT_REPEAT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_patameters_repeat1, 2), SHIFT_REPEAT(190),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_patameters_repeat1, 2), SHIFT_REPEAT(153),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_tag_patameters_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_tag_patameters_repeat1, 2), SHIFT_REPEAT(153),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_content_repeat1, 2), SHIFT_REPEAT(193),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_tag_content_repeat1, 2), SHIFT_REPEAT(151),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_tag_content_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__inline_tag_content_repeat1, 2), SHIFT_REPEAT(151),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_label, 2, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_label, 2, .production_id = 7),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_label, 3, .production_id = 13),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_label, 3, .production_id = 13),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 1),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat3, 1),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(173),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat1, 2), SHIFT_REPEAT(181),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_content, 3, .production_id = 11),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_content, 3, .production_id = 11),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_tag_content_repeat1, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_tag_content_repeat1, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_content, 2, .production_id = 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_content, 2, .production_id = 5),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_tag_patameters_repeat1, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_tag_patameters_repeat1, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_patameters, 2, .production_id = 6),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_patameters, 2, .production_id = 6),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_tag_patameters, 3, .production_id = 12),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_tag_patameters, 3, .production_id = 12),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1, .production_id = 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1, .production_id = 3),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat1, 1, .production_id = 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat1, 1, .production_id = 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat1, 2), SHIFT_REPEAT(187),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat2, 2),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat2, 2), SHIFT_REPEAT(184),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [589] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_blueflower_external_scanner_create(void);
void tree_sitter_blueflower_external_scanner_destroy(void *);
bool tree_sitter_blueflower_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_blueflower_external_scanner_serialize(void *, char *);
void tree_sitter_blueflower_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blueflower(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_blueflower_external_scanner_create,
      tree_sitter_blueflower_external_scanner_destroy,
      tree_sitter_blueflower_external_scanner_scan,
      tree_sitter_blueflower_external_scanner_serialize,
      tree_sitter_blueflower_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
