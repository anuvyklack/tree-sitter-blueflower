#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 440
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 4
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 14
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 63

enum {
  anon_sym_BSLASH = 1,
  aux_sym_escaped_sequence_token1 = 2,
  anon_sym_BSLASH2 = 3,
  anon_sym_POUND = 4,
  anon_sym_ = 5,
  anon_sym_COLON = 6,
  anon_sym_BANG = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_POUND2 = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_PERCENT = 11,
  anon_sym_AMP = 12,
  anon_sym_SQUOTE = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_STAR = 16,
  anon_sym_PLUS = 17,
  anon_sym_COMMA = 18,
  anon_sym_DASH = 19,
  anon_sym_DOT = 20,
  anon_sym_SLASH = 21,
  anon_sym_COLON2 = 22,
  anon_sym_SEMI = 23,
  anon_sym_LT = 24,
  anon_sym_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_QMARK = 27,
  anon_sym_AT = 28,
  anon_sym_RBRACK = 29,
  anon_sym_BSLASH3 = 30,
  anon_sym_CARET = 31,
  anon_sym__ = 32,
  anon_sym_BQUOTE = 33,
  anon_sym_LBRACE = 34,
  anon_sym_PIPE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_TILDE = 37,
  aux_sym_inline_tag_token1 = 38,
  aux_sym_inline_tag_token2 = 39,
  aux_sym_inline_tag_token3 = 40,
  anon_sym_LBRACK = 41,
  aux_sym_inline_tag_token4 = 42,
  aux_sym_inline_tag_token5 = 43,
  anon_sym_RPAREN2 = 44,
  aux_sym_inline_tag_token6 = 45,
  anon_sym_RBRACE2 = 46,
  aux_sym_nl_token1 = 47,
  anon_sym_BANG2 = 48,
  anon_sym_DQUOTE2 = 49,
  anon_sym_DOLLAR2 = 50,
  anon_sym_PERCENT2 = 51,
  anon_sym_AMP2 = 52,
  anon_sym_SQUOTE2 = 53,
  anon_sym_LPAREN2 = 54,
  anon_sym_RPAREN3 = 55,
  anon_sym_STAR2 = 56,
  anon_sym_PLUS2 = 57,
  anon_sym_COMMA2 = 58,
  anon_sym_DASH2 = 59,
  anon_sym_DOT2 = 60,
  anon_sym_SLASH2 = 61,
  anon_sym_COLON3 = 62,
  anon_sym_SEMI2 = 63,
  anon_sym_LT2 = 64,
  anon_sym_EQ2 = 65,
  anon_sym_GT2 = 66,
  anon_sym_QMARK2 = 67,
  anon_sym_LBRACK2 = 68,
  anon_sym_RBRACK2 = 69,
  anon_sym_BSLASH4 = 70,
  anon_sym_CARET2 = 71,
  anon_sym__2 = 72,
  anon_sym_BQUOTE2 = 73,
  anon_sym_LBRACE2 = 74,
  anon_sym_PIPE2 = 75,
  anon_sym_RBRACE3 = 76,
  anon_sym_TILDE2 = 77,
  aux_sym_word_token1 = 78,
  aux_sym_word_token2 = 79,
  aux_sym_word_token3 = 80,
  sym_raw_word = 81,
  sym_heading_1_token = 82,
  sym_heading_2_token = 83,
  sym_heading_3_token = 84,
  sym_heading_4_token = 85,
  sym_heading_5_token = 86,
  sym_heading_6_token = 87,
  sym_hashtag_token = 88,
  sym_tag_token = 89,
  sym_tag_parameter = 90,
  sym_end_tag = 91,
  sym_tag_label_open = 92,
  sym_soft_break = 93,
  sym_hard_break = 94,
  sym__eof = 95,
  sym_document = 96,
  sym_paragraph = 97,
  sym_escaped_sequence = 98,
  sym_comment = 99,
  sym_inline_tag = 100,
  sym_verbatim_tag = 101,
  sym_hashtag = 102,
  sym_nl = 103,
  sym_eol = 104,
  aux_sym_document_repeat1 = 105,
  aux_sym_paragraph_repeat1 = 106,
  aux_sym_comment_repeat1 = 107,
  aux_sym_inline_tag_repeat1 = 108,
  aux_sym_inline_tag_repeat2 = 109,
  aux_sym_inline_tag_repeat3 = 110,
  aux_sym_verbatim_tag_repeat1 = 111,
  aux_sym_verbatim_tag_repeat2 = 112,
  aux_sym_verbatim_tag_repeat3 = 113,
  alias_sym_content = 114,
  alias_sym_label = 115,
  alias_sym_parameters = 116,
  anon_alias_sym_word = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASH] = "token",
  [aux_sym_escaped_sequence_token1] = "raw_word",
  [anon_sym_BSLASH2] = "token",
  [anon_sym_POUND] = "#",
  [anon_sym_] = " ",
  [anon_sym_COLON] = "token",
  [anon_sym_BANG] = "ascii_symbol",
  [anon_sym_DQUOTE] = "ascii_symbol",
  [anon_sym_POUND2] = "ascii_symbol",
  [anon_sym_DOLLAR] = "ascii_symbol",
  [anon_sym_PERCENT] = "ascii_symbol",
  [anon_sym_AMP] = "ascii_symbol",
  [anon_sym_SQUOTE] = "ascii_symbol",
  [anon_sym_LPAREN] = "token",
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
  [anon_sym_AT] = "ascii_symbol",
  [anon_sym_RBRACK] = "token",
  [anon_sym_BSLASH3] = "ascii_symbol",
  [anon_sym_CARET] = "ascii_symbol",
  [anon_sym__] = "ascii_symbol",
  [anon_sym_BQUOTE] = "ascii_symbol",
  [anon_sym_LBRACE] = "token",
  [anon_sym_PIPE] = "ascii_symbol",
  [anon_sym_RBRACE] = "ascii_symbol",
  [anon_sym_TILDE] = "ascii_symbol",
  [aux_sym_inline_tag_token1] = "string",
  [aux_sym_inline_tag_token2] = "number",
  [aux_sym_inline_tag_token3] = "symbol",
  [anon_sym_LBRACK] = "token",
  [aux_sym_inline_tag_token4] = "word",
  [aux_sym_inline_tag_token5] = "raw_word",
  [anon_sym_RPAREN2] = "token",
  [aux_sym_inline_tag_token6] = "raw_word",
  [anon_sym_RBRACE2] = "token",
  [aux_sym_nl_token1] = "nl_token1",
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
  [sym_verbatim_tag] = "verbatim_tag",
  [sym_hashtag] = "hashtag",
  [sym_nl] = "nl",
  [sym_eol] = "eol",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_inline_tag_repeat1] = "inline_tag_repeat1",
  [aux_sym_inline_tag_repeat2] = "inline_tag_repeat2",
  [aux_sym_inline_tag_repeat3] = "inline_tag_repeat3",
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
  [anon_sym_COLON] = sym_hashtag_token,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_BANG,
  [anon_sym_POUND2] = anon_sym_BANG,
  [anon_sym_DOLLAR] = anon_sym_BANG,
  [anon_sym_PERCENT] = anon_sym_BANG,
  [anon_sym_AMP] = anon_sym_BANG,
  [anon_sym_SQUOTE] = anon_sym_BANG,
  [anon_sym_LPAREN] = sym_hashtag_token,
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
  [anon_sym_AT] = anon_sym_BANG,
  [anon_sym_RBRACK] = sym_hashtag_token,
  [anon_sym_BSLASH3] = anon_sym_BANG,
  [anon_sym_CARET] = anon_sym_BANG,
  [anon_sym__] = anon_sym_BANG,
  [anon_sym_BQUOTE] = anon_sym_BANG,
  [anon_sym_LBRACE] = sym_hashtag_token,
  [anon_sym_PIPE] = anon_sym_BANG,
  [anon_sym_RBRACE] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_BANG,
  [aux_sym_inline_tag_token1] = aux_sym_inline_tag_token1,
  [aux_sym_inline_tag_token2] = aux_sym_inline_tag_token2,
  [aux_sym_inline_tag_token3] = aux_sym_inline_tag_token3,
  [anon_sym_LBRACK] = sym_hashtag_token,
  [aux_sym_inline_tag_token4] = aux_sym_inline_tag_token4,
  [aux_sym_inline_tag_token5] = sym_raw_word,
  [anon_sym_RPAREN2] = sym_hashtag_token,
  [aux_sym_inline_tag_token6] = sym_raw_word,
  [anon_sym_RBRACE2] = sym_hashtag_token,
  [aux_sym_nl_token1] = aux_sym_nl_token1,
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
  [sym_verbatim_tag] = sym_verbatim_tag,
  [sym_hashtag] = sym_hashtag,
  [sym_nl] = sym_nl,
  [sym_eol] = sym_eol,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_inline_tag_repeat1] = aux_sym_inline_tag_repeat1,
  [aux_sym_inline_tag_repeat2] = aux_sym_inline_tag_repeat2,
  [aux_sym_inline_tag_repeat3] = aux_sym_inline_tag_repeat3,
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
  [anon_sym_AT] = {
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
  [aux_sym_inline_tag_token4] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_tag_token5] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_inline_tag_token6] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_nl_token1] = {
    .visible = false,
    .named = false,
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
  [sym_verbatim_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_hashtag] = {
    .visible = true,
    .named = true,
  },
  [sym_nl] = {
    .visible = true,
    .named = true,
  },
  [sym_eol] = {
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
  [aux_sym_inline_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_tag_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_tag_repeat3] = {
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
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 2},
  [6] = {.index = 1, .length = 2},
  [7] = {.index = 3, .length = 3},
  [8] = {.index = 6, .length = 3},
  [9] = {.index = 9, .length = 3},
  [10] = {.index = 3, .length = 3},
  [11] = {.index = 6, .length = 3},
  [12] = {.index = 9, .length = 3},
  [13] = {.index = 0, .length = 1},
  [14] = {.index = 0, .length = 1},
  [15] = {.index = 12, .length = 3},
  [16] = {.index = 15, .length = 3},
  [17] = {.index = 18, .length = 3},
  [18] = {.index = 12, .length = 3},
  [19] = {.index = 15, .length = 3},
  [20] = {.index = 18, .length = 3},
  [21] = {.index = 1, .length = 2},
  [22] = {.index = 1, .length = 2},
  [23] = {.index = 21, .length = 5},
  [24] = {.index = 26, .length = 5},
  [25] = {.index = 31, .length = 5},
  [26] = {.index = 21, .length = 5},
  [27] = {.index = 26, .length = 5},
  [28] = {.index = 31, .length = 5},
  [29] = {.index = 36, .length = 5},
  [30] = {.index = 41, .length = 5},
  [31] = {.index = 46, .length = 5},
  [32] = {.index = 51, .length = 5},
  [33] = {.index = 56, .length = 5},
  [34] = {.index = 61, .length = 5},
  [35] = {.index = 36, .length = 5},
  [36] = {.index = 41, .length = 5},
  [37] = {.index = 46, .length = 5},
  [38] = {.index = 51, .length = 5},
  [39] = {.index = 56, .length = 5},
  [40] = {.index = 61, .length = 5},
  [41] = {.index = 66, .length = 5},
  [42] = {.index = 71, .length = 7},
  [43] = {.index = 78, .length = 5},
  [44] = {.index = 83, .length = 5},
  [45] = {.index = 66, .length = 5},
  [46] = {.index = 71, .length = 7},
  [47] = {.index = 78, .length = 5},
  [48] = {.index = 83, .length = 5},
  [49] = {.index = 88, .length = 7},
  [50] = {.index = 95, .length = 7},
  [51] = {.index = 102, .length = 7},
  [52] = {.index = 88, .length = 7},
  [53] = {.index = 95, .length = 7},
  [54] = {.index = 102, .length = 7},
  [55] = {.index = 109, .length = 7},
  [56] = {.index = 116, .length = 7},
  [57] = {.index = 123, .length = 7},
  [58] = {.index = 109, .length = 7},
  [59] = {.index = 116, .length = 7},
  [60] = {.index = 123, .length = 7},
  [61] = {.index = 130, .length = 7},
  [62] = {.index = 130, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_parameter, 2},
  [3] =
    {field_close_content, 3},
    {field_name, 1},
    {field_open_content, 2},
  [6] =
    {field_close_parameters, 3},
    {field_name, 1},
    {field_open_parameters, 2},
  [9] =
    {field_close_label, 3},
    {field_name, 1},
    {field_open_label, 2},
  [12] =
    {field_close_content, 4},
    {field_name, 1},
    {field_open_content, 2},
  [15] =
    {field_close_parameters, 4},
    {field_name, 1},
    {field_open_parameters, 2},
  [18] =
    {field_close_label, 4},
    {field_name, 1},
    {field_open_label, 2},
  [21] =
    {field_close_content, 3},
    {field_close_parameters, 5},
    {field_name, 1},
    {field_open_content, 2},
    {field_open_parameters, 4},
  [26] =
    {field_close_content, 5},
    {field_close_label, 3},
    {field_name, 1},
    {field_open_content, 4},
    {field_open_label, 2},
  [31] =
    {field_close_label, 3},
    {field_close_parameters, 5},
    {field_name, 1},
    {field_open_label, 2},
    {field_open_parameters, 4},
  [36] =
    {field_close_content, 3},
    {field_close_parameters, 6},
    {field_name, 1},
    {field_open_content, 2},
    {field_open_parameters, 4},
  [41] =
    {field_close_content, 4},
    {field_close_parameters, 6},
    {field_name, 1},
    {field_open_content, 2},
    {field_open_parameters, 5},
  [46] =
    {field_close_content, 6},
    {field_close_label, 3},
    {field_name, 1},
    {field_open_content, 4},
    {field_open_label, 2},
  [51] =
    {field_close_label, 3},
    {field_close_parameters, 6},
    {field_name, 1},
    {field_open_label, 2},
    {field_open_parameters, 4},
  [56] =
    {field_close_content, 6},
    {field_close_label, 4},
    {field_name, 1},
    {field_open_content, 5},
    {field_open_label, 2},
  [61] =
    {field_close_label, 4},
    {field_close_parameters, 6},
    {field_name, 1},
    {field_open_label, 2},
    {field_open_parameters, 5},
  [66] =
    {field_close_content, 4},
    {field_close_parameters, 7},
    {field_name, 1},
    {field_open_content, 2},
    {field_open_parameters, 5},
  [71] =
    {field_close_content, 5},
    {field_close_label, 3},
    {field_close_parameters, 7},
    {field_name, 1},
    {field_open_content, 4},
    {field_open_label, 2},
    {field_open_parameters, 6},
  [78] =
    {field_close_content, 7},
    {field_close_label, 4},
    {field_name, 1},
    {field_open_content, 5},
    {field_open_label, 2},
  [83] =
    {field_close_label, 4},
    {field_close_parameters, 7},
    {field_name, 1},
    {field_open_label, 2},
    {field_open_parameters, 5},
  [88] =
    {field_close_content, 5},
    {field_close_label, 3},
    {field_close_parameters, 8},
    {field_name, 1},
    {field_open_content, 4},
    {field_open_label, 2},
    {field_open_parameters, 6},
  [95] =
    {field_close_content, 6},
    {field_close_label, 3},
    {field_close_parameters, 8},
    {field_name, 1},
    {field_open_content, 4},
    {field_open_label, 2},
    {field_open_parameters, 7},
  [102] =
    {field_close_content, 6},
    {field_close_label, 4},
    {field_close_parameters, 8},
    {field_name, 1},
    {field_open_content, 5},
    {field_open_label, 2},
    {field_open_parameters, 7},
  [109] =
    {field_close_content, 6},
    {field_close_label, 3},
    {field_close_parameters, 9},
    {field_name, 1},
    {field_open_content, 4},
    {field_open_label, 2},
    {field_open_parameters, 7},
  [116] =
    {field_close_content, 6},
    {field_close_label, 4},
    {field_close_parameters, 9},
    {field_name, 1},
    {field_open_content, 5},
    {field_open_label, 2},
    {field_open_parameters, 7},
  [123] =
    {field_close_content, 7},
    {field_close_label, 4},
    {field_close_parameters, 9},
    {field_name, 1},
    {field_open_content, 5},
    {field_open_label, 2},
    {field_open_parameters, 8},
  [130] =
    {field_close_content, 7},
    {field_close_label, 4},
    {field_close_parameters, 10},
    {field_name, 1},
    {field_open_content, 5},
    {field_open_label, 2},
    {field_open_parameters, 8},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_tag_parameter,
  },
  [2] = {
    [1] = anon_sym_BANG,
  },
  [4] = {
    [0] = anon_alias_sym_word,
  },
  [5] = {
    [1] = anon_sym_BANG,
  },
  [7] = {
    [1] = anon_sym_BANG,
  },
  [8] = {
    [1] = anon_sym_BANG,
  },
  [9] = {
    [1] = anon_sym_BANG,
  },
  [13] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_content,
  },
  [14] = {
    [3] = alias_sym_content,
  },
  [15] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_content,
  },
  [16] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_parameters,
  },
  [17] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
  },
  [18] = {
    [3] = alias_sym_content,
  },
  [19] = {
    [3] = alias_sym_parameters,
  },
  [20] = {
    [3] = alias_sym_label,
  },
  [21] = {
    [1] = anon_sym_BANG,
    [4] = alias_sym_content,
  },
  [22] = {
    [4] = alias_sym_content,
  },
  [23] = {
    [1] = anon_sym_BANG,
  },
  [24] = {
    [1] = anon_sym_BANG,
  },
  [25] = {
    [1] = anon_sym_BANG,
  },
  [29] = {
    [1] = anon_sym_BANG,
    [5] = alias_sym_parameters,
  },
  [30] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_content,
  },
  [31] = {
    [1] = anon_sym_BANG,
    [5] = alias_sym_content,
  },
  [32] = {
    [1] = anon_sym_BANG,
    [5] = alias_sym_parameters,
  },
  [33] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
  },
  [34] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
  },
  [35] = {
    [5] = alias_sym_parameters,
  },
  [36] = {
    [3] = alias_sym_content,
  },
  [37] = {
    [5] = alias_sym_content,
  },
  [38] = {
    [5] = alias_sym_parameters,
  },
  [39] = {
    [3] = alias_sym_label,
  },
  [40] = {
    [3] = alias_sym_label,
  },
  [41] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_content,
    [6] = alias_sym_parameters,
  },
  [42] = {
    [1] = anon_sym_BANG,
  },
  [43] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
    [6] = alias_sym_content,
  },
  [44] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
    [6] = alias_sym_parameters,
  },
  [45] = {
    [3] = alias_sym_content,
    [6] = alias_sym_parameters,
  },
  [47] = {
    [3] = alias_sym_label,
    [6] = alias_sym_content,
  },
  [48] = {
    [3] = alias_sym_label,
    [6] = alias_sym_parameters,
  },
  [49] = {
    [1] = anon_sym_BANG,
    [7] = alias_sym_parameters,
  },
  [50] = {
    [1] = anon_sym_BANG,
    [5] = alias_sym_content,
  },
  [51] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
  },
  [52] = {
    [7] = alias_sym_parameters,
  },
  [53] = {
    [5] = alias_sym_content,
  },
  [54] = {
    [3] = alias_sym_label,
  },
  [55] = {
    [1] = anon_sym_BANG,
    [5] = alias_sym_content,
    [8] = alias_sym_parameters,
  },
  [56] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
    [8] = alias_sym_parameters,
  },
  [57] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
    [6] = alias_sym_content,
  },
  [58] = {
    [5] = alias_sym_content,
    [8] = alias_sym_parameters,
  },
  [59] = {
    [3] = alias_sym_label,
    [8] = alias_sym_parameters,
  },
  [60] = {
    [3] = alias_sym_label,
    [6] = alias_sym_content,
  },
  [61] = {
    [1] = anon_sym_BANG,
    [3] = alias_sym_label,
    [6] = alias_sym_content,
    [9] = alias_sym_parameters,
  },
  [62] = {
    [3] = alias_sym_label,
    [6] = alias_sym_content,
    [9] = alias_sym_parameters,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_inline_tag_repeat1, 2,
    aux_sym_inline_tag_repeat1,
    alias_sym_label,
  aux_sym_inline_tag_repeat2, 2,
    aux_sym_inline_tag_repeat2,
    alias_sym_content,
  aux_sym_inline_tag_repeat3, 2,
    aux_sym_inline_tag_repeat3,
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
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
  [86] = 84,
  [87] = 87,
  [88] = 82,
  [89] = 89,
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 94,
  [100] = 97,
  [101] = 98,
  [102] = 91,
  [103] = 92,
  [104] = 96,
  [105] = 95,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 108,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 127,
  [140] = 140,
  [141] = 134,
  [142] = 109,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 112,
  [163] = 160,
  [164] = 158,
  [165] = 159,
  [166] = 166,
  [167] = 156,
  [168] = 113,
  [169] = 169,
  [170] = 155,
  [171] = 114,
  [172] = 118,
  [173] = 153,
  [174] = 166,
  [175] = 151,
  [176] = 147,
  [177] = 145,
  [178] = 150,
  [179] = 140,
  [180] = 149,
  [181] = 148,
  [182] = 169,
  [183] = 146,
  [184] = 135,
  [185] = 138,
  [186] = 132,
  [187] = 157,
  [188] = 120,
  [189] = 131,
  [190] = 130,
  [191] = 143,
  [192] = 128,
  [193] = 137,
  [194] = 110,
  [195] = 136,
  [196] = 111,
  [197] = 154,
  [198] = 126,
  [199] = 125,
  [200] = 123,
  [201] = 133,
  [202] = 122,
  [203] = 129,
  [204] = 121,
  [205] = 124,
  [206] = 144,
  [207] = 116,
  [208] = 119,
  [209] = 117,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 210,
  [214] = 214,
  [215] = 211,
  [216] = 212,
  [217] = 214,
  [218] = 27,
  [219] = 58,
  [220] = 34,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 8,
  [233] = 233,
  [234] = 234,
  [235] = 233,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 228,
  [242] = 35,
  [243] = 39,
  [244] = 244,
  [245] = 221,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 62,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 56,
  [255] = 255,
  [256] = 223,
  [257] = 29,
  [258] = 225,
  [259] = 226,
  [260] = 6,
  [261] = 227,
  [262] = 50,
  [263] = 31,
  [264] = 42,
  [265] = 246,
  [266] = 248,
  [267] = 236,
  [268] = 22,
  [269] = 32,
  [270] = 68,
  [271] = 255,
  [272] = 272,
  [273] = 36,
  [274] = 244,
  [275] = 37,
  [276] = 40,
  [277] = 239,
  [278] = 41,
  [279] = 16,
  [280] = 11,
  [281] = 238,
  [282] = 46,
  [283] = 251,
  [284] = 47,
  [285] = 18,
  [286] = 21,
  [287] = 237,
  [288] = 48,
  [289] = 15,
  [290] = 51,
  [291] = 55,
  [292] = 28,
  [293] = 17,
  [294] = 61,
  [295] = 30,
  [296] = 234,
  [297] = 38,
  [298] = 12,
  [299] = 231,
  [300] = 59,
  [301] = 44,
  [302] = 60,
  [303] = 7,
  [304] = 49,
  [305] = 230,
  [306] = 52,
  [307] = 229,
  [308] = 53,
  [309] = 57,
  [310] = 64,
  [311] = 70,
  [312] = 76,
  [313] = 224,
  [314] = 74,
  [315] = 73,
  [316] = 72,
  [317] = 69,
  [318] = 20,
  [319] = 67,
  [320] = 253,
  [321] = 66,
  [322] = 65,
  [323] = 63,
  [324] = 14,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 325,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 26,
  [348] = 348,
  [349] = 349,
  [350] = 24,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 9,
  [359] = 359,
  [360] = 10,
  [361] = 13,
  [362] = 362,
  [363] = 363,
  [364] = 362,
  [365] = 365,
  [366] = 8,
  [367] = 56,
  [368] = 252,
  [369] = 75,
  [370] = 71,
  [371] = 371,
  [372] = 372,
  [373] = 252,
  [374] = 374,
  [375] = 375,
  [376] = 54,
  [377] = 357,
  [378] = 33,
  [379] = 252,
  [380] = 380,
  [381] = 381,
  [382] = 19,
  [383] = 56,
  [384] = 380,
  [385] = 336,
  [386] = 371,
  [387] = 381,
  [388] = 356,
  [389] = 363,
  [390] = 359,
  [391] = 391,
  [392] = 353,
  [393] = 355,
  [394] = 354,
  [395] = 395,
  [396] = 352,
  [397] = 397,
  [398] = 349,
  [399] = 348,
  [400] = 400,
  [401] = 346,
  [402] = 402,
  [403] = 403,
  [404] = 341,
  [405] = 340,
  [406] = 339,
  [407] = 375,
  [408] = 334,
  [409] = 409,
  [410] = 332,
  [411] = 329,
  [412] = 372,
  [413] = 413,
  [414] = 331,
  [415] = 330,
  [416] = 351,
  [417] = 326,
  [418] = 335,
  [419] = 328,
  [420] = 327,
  [421] = 409,
  [422] = 365,
  [423] = 337,
  [424] = 338,
  [425] = 342,
  [426] = 343,
  [427] = 344,
  [428] = 345,
  [429] = 374,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 391,
  [434] = 432,
  [435] = 435,
  [436] = 436,
  [437] = 436,
  [438] = 436,
  [439] = 436,
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
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(17);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '^') ADVANCE(46);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(54);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '^') ADVANCE(46);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(52);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(54);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(98);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '~') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(98);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(99);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '&') ADVANCE(27);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(29);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(42);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '^') ADVANCE(46);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '|') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(52);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(54);
      if (aux_sym_inline_tag_token1_character_set_2(lookahead)) ADVANCE(53);
      if (!aux_sym_inline_tag_token3_character_set_1(lookahead)) ADVANCE(55);
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
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '~') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(98);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(99);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '%') ADVANCE(72);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(76);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '?') ADVANCE(87);
      if (lookahead == '[') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(90);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '~') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(13)
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(98);
      if (aux_sym_inline_tag_token1_character_set_1(lookahead)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8232 &&
          lookahead != 8233 &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(99);
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
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(57);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_inline_tag_token1);
      if (aux_sym_inline_tag_token1_character_set_3(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_inline_tag_token2);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_inline_tag_token3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_inline_tag_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_inline_tag_token5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_inline_tag_token6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_nl_token1);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(9);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PERCENT2);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN3);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_QMARK2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_CARET2);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym__2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE3);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_TILDE2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (aux_sym_inline_tag_token1_character_set_3(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_word_token2);
      if (aux_sym_inline_tag_token2_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_word_token3);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_raw_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(100);
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
  [61] = {.lex_state = 13, .external_lex_state = 2},
  [62] = {.lex_state = 13, .external_lex_state = 2},
  [63] = {.lex_state = 13, .external_lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 2},
  [65] = {.lex_state = 13, .external_lex_state = 2},
  [66] = {.lex_state = 13, .external_lex_state = 2},
  [67] = {.lex_state = 13, .external_lex_state = 2},
  [68] = {.lex_state = 13, .external_lex_state = 2},
  [69] = {.lex_state = 13, .external_lex_state = 2},
  [70] = {.lex_state = 13, .external_lex_state = 2},
  [71] = {.lex_state = 13, .external_lex_state = 2},
  [72] = {.lex_state = 13, .external_lex_state = 2},
  [73] = {.lex_state = 13, .external_lex_state = 2},
  [74] = {.lex_state = 13, .external_lex_state = 2},
  [75] = {.lex_state = 13, .external_lex_state = 2},
  [76] = {.lex_state = 13, .external_lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 6, .external_lex_state = 3},
  [92] = {.lex_state = 6, .external_lex_state = 3},
  [93] = {.lex_state = 6, .external_lex_state = 3},
  [94] = {.lex_state = 6, .external_lex_state = 3},
  [95] = {.lex_state = 6, .external_lex_state = 3},
  [96] = {.lex_state = 6, .external_lex_state = 3},
  [97] = {.lex_state = 6, .external_lex_state = 3},
  [98] = {.lex_state = 6, .external_lex_state = 3},
  [99] = {.lex_state = 6, .external_lex_state = 3},
  [100] = {.lex_state = 6, .external_lex_state = 3},
  [101] = {.lex_state = 6, .external_lex_state = 3},
  [102] = {.lex_state = 6, .external_lex_state = 3},
  [103] = {.lex_state = 6, .external_lex_state = 3},
  [104] = {.lex_state = 6, .external_lex_state = 3},
  [105] = {.lex_state = 6, .external_lex_state = 3},
  [106] = {.lex_state = 6, .external_lex_state = 3},
  [107] = {.lex_state = 6, .external_lex_state = 3},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 2, .external_lex_state = 4},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 2, .external_lex_state = 4},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 2, .external_lex_state = 4},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 2, .external_lex_state = 4},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 2, .external_lex_state = 4},
  [211] = {.lex_state = 2, .external_lex_state = 4},
  [212] = {.lex_state = 2, .external_lex_state = 4},
  [213] = {.lex_state = 2, .external_lex_state = 4},
  [214] = {.lex_state = 2, .external_lex_state = 4},
  [215] = {.lex_state = 2, .external_lex_state = 4},
  [216] = {.lex_state = 2, .external_lex_state = 4},
  [217] = {.lex_state = 2, .external_lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 13, .external_lex_state = 4},
  [222] = {.lex_state = 6, .external_lex_state = 4},
  [223] = {.lex_state = 13, .external_lex_state = 4},
  [224] = {.lex_state = 2, .external_lex_state = 4},
  [225] = {.lex_state = 13, .external_lex_state = 4},
  [226] = {.lex_state = 13, .external_lex_state = 4},
  [227] = {.lex_state = 2, .external_lex_state = 4},
  [228] = {.lex_state = 6, .external_lex_state = 4},
  [229] = {.lex_state = 2, .external_lex_state = 4},
  [230] = {.lex_state = 2, .external_lex_state = 4},
  [231] = {.lex_state = 2, .external_lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 6, .external_lex_state = 4},
  [234] = {.lex_state = 2, .external_lex_state = 4},
  [235] = {.lex_state = 6, .external_lex_state = 4},
  [236] = {.lex_state = 2, .external_lex_state = 4},
  [237] = {.lex_state = 2, .external_lex_state = 4},
  [238] = {.lex_state = 2, .external_lex_state = 4},
  [239] = {.lex_state = 13, .external_lex_state = 4},
  [240] = {.lex_state = 6, .external_lex_state = 4},
  [241] = {.lex_state = 6, .external_lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 13, .external_lex_state = 4},
  [245] = {.lex_state = 13, .external_lex_state = 4},
  [246] = {.lex_state = 13, .external_lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 2, .external_lex_state = 4},
  [249] = {.lex_state = 6, .external_lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 2, .external_lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 2, .external_lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 13, .external_lex_state = 4},
  [256] = {.lex_state = 13, .external_lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 13, .external_lex_state = 4},
  [259] = {.lex_state = 13, .external_lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 2, .external_lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 13, .external_lex_state = 4},
  [266] = {.lex_state = 2, .external_lex_state = 4},
  [267] = {.lex_state = 2, .external_lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 13, .external_lex_state = 4},
  [272] = {.lex_state = 6, .external_lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 13, .external_lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 13, .external_lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 2, .external_lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 2, .external_lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 2, .external_lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 2, .external_lex_state = 4},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 2, .external_lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 2, .external_lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 2, .external_lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 2, .external_lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 2, .external_lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 6, .external_lex_state = 3},
  [325] = {.lex_state = 2, .external_lex_state = 4},
  [326] = {.lex_state = 2, .external_lex_state = 4},
  [327] = {.lex_state = 2, .external_lex_state = 4},
  [328] = {.lex_state = 2, .external_lex_state = 4},
  [329] = {.lex_state = 2, .external_lex_state = 4},
  [330] = {.lex_state = 2, .external_lex_state = 4},
  [331] = {.lex_state = 2, .external_lex_state = 4},
  [332] = {.lex_state = 2, .external_lex_state = 4},
  [333] = {.lex_state = 2, .external_lex_state = 4},
  [334] = {.lex_state = 2, .external_lex_state = 4},
  [335] = {.lex_state = 2, .external_lex_state = 4},
  [336] = {.lex_state = 2, .external_lex_state = 4},
  [337] = {.lex_state = 2, .external_lex_state = 4},
  [338] = {.lex_state = 2, .external_lex_state = 4},
  [339] = {.lex_state = 2, .external_lex_state = 4},
  [340] = {.lex_state = 2, .external_lex_state = 4},
  [341] = {.lex_state = 2, .external_lex_state = 4},
  [342] = {.lex_state = 2, .external_lex_state = 4},
  [343] = {.lex_state = 2, .external_lex_state = 4},
  [344] = {.lex_state = 2, .external_lex_state = 4},
  [345] = {.lex_state = 2, .external_lex_state = 4},
  [346] = {.lex_state = 2, .external_lex_state = 4},
  [347] = {.lex_state = 6, .external_lex_state = 3},
  [348] = {.lex_state = 2, .external_lex_state = 4},
  [349] = {.lex_state = 2, .external_lex_state = 4},
  [350] = {.lex_state = 6, .external_lex_state = 3},
  [351] = {.lex_state = 2, .external_lex_state = 4},
  [352] = {.lex_state = 2, .external_lex_state = 4},
  [353] = {.lex_state = 2, .external_lex_state = 4},
  [354] = {.lex_state = 2, .external_lex_state = 4},
  [355] = {.lex_state = 2, .external_lex_state = 4},
  [356] = {.lex_state = 2, .external_lex_state = 4},
  [357] = {.lex_state = 2, .external_lex_state = 4},
  [358] = {.lex_state = 6, .external_lex_state = 3},
  [359] = {.lex_state = 2, .external_lex_state = 4},
  [360] = {.lex_state = 6, .external_lex_state = 3},
  [361] = {.lex_state = 6, .external_lex_state = 3},
  [362] = {.lex_state = 2, .external_lex_state = 4},
  [363] = {.lex_state = 2, .external_lex_state = 4},
  [364] = {.lex_state = 2, .external_lex_state = 4},
  [365] = {.lex_state = 2, .external_lex_state = 4},
  [366] = {.lex_state = 6, .external_lex_state = 3},
  [367] = {.lex_state = 7},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 6, .external_lex_state = 3},
  [370] = {.lex_state = 6, .external_lex_state = 3},
  [371] = {.lex_state = 6},
  [372] = {.lex_state = 6},
  [373] = {.lex_state = 6, .external_lex_state = 3},
  [374] = {.lex_state = 2, .external_lex_state = 4},
  [375] = {.lex_state = 2, .external_lex_state = 4},
  [376] = {.lex_state = 6, .external_lex_state = 3},
  [377] = {.lex_state = 2, .external_lex_state = 4},
  [378] = {.lex_state = 6, .external_lex_state = 3},
  [379] = {.lex_state = 8},
  [380] = {.lex_state = 6},
  [381] = {.lex_state = 6},
  [382] = {.lex_state = 6, .external_lex_state = 3},
  [383] = {.lex_state = 8},
  [384] = {.lex_state = 6},
  [385] = {.lex_state = 2, .external_lex_state = 4},
  [386] = {.lex_state = 6},
  [387] = {.lex_state = 6},
  [388] = {.lex_state = 2, .external_lex_state = 4},
  [389] = {.lex_state = 2, .external_lex_state = 4},
  [390] = {.lex_state = 2, .external_lex_state = 4},
  [391] = {.lex_state = 6, .external_lex_state = 4},
  [392] = {.lex_state = 2, .external_lex_state = 4},
  [393] = {.lex_state = 2, .external_lex_state = 4},
  [394] = {.lex_state = 2, .external_lex_state = 4},
  [395] = {.lex_state = 6, .external_lex_state = 3},
  [396] = {.lex_state = 2, .external_lex_state = 4},
  [397] = {.lex_state = 6},
  [398] = {.lex_state = 2, .external_lex_state = 4},
  [399] = {.lex_state = 2, .external_lex_state = 4},
  [400] = {.lex_state = 6, .external_lex_state = 4},
  [401] = {.lex_state = 2, .external_lex_state = 4},
  [402] = {.lex_state = 8},
  [403] = {.lex_state = 7},
  [404] = {.lex_state = 2, .external_lex_state = 4},
  [405] = {.lex_state = 2, .external_lex_state = 4},
  [406] = {.lex_state = 2, .external_lex_state = 4},
  [407] = {.lex_state = 2, .external_lex_state = 4},
  [408] = {.lex_state = 2, .external_lex_state = 4},
  [409] = {.lex_state = 2, .external_lex_state = 4},
  [410] = {.lex_state = 2, .external_lex_state = 4},
  [411] = {.lex_state = 2, .external_lex_state = 4},
  [412] = {.lex_state = 6},
  [413] = {.lex_state = 6, .external_lex_state = 3},
  [414] = {.lex_state = 2, .external_lex_state = 4},
  [415] = {.lex_state = 2, .external_lex_state = 4},
  [416] = {.lex_state = 2, .external_lex_state = 4},
  [417] = {.lex_state = 2, .external_lex_state = 4},
  [418] = {.lex_state = 2, .external_lex_state = 4},
  [419] = {.lex_state = 2, .external_lex_state = 4},
  [420] = {.lex_state = 2, .external_lex_state = 4},
  [421] = {.lex_state = 2, .external_lex_state = 4},
  [422] = {.lex_state = 2, .external_lex_state = 4},
  [423] = {.lex_state = 2, .external_lex_state = 4},
  [424] = {.lex_state = 2, .external_lex_state = 4},
  [425] = {.lex_state = 2, .external_lex_state = 4},
  [426] = {.lex_state = 2, .external_lex_state = 4},
  [427] = {.lex_state = 2, .external_lex_state = 4},
  [428] = {.lex_state = 2, .external_lex_state = 4},
  [429] = {.lex_state = 2, .external_lex_state = 4},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 6, .external_lex_state = 4},
  [432] = {.lex_state = 6, .external_lex_state = 4},
  [433] = {.lex_state = 6},
  [434] = {.lex_state = 6},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 11},
  [437] = {.lex_state = 11},
  [438] = {.lex_state = 11},
  [439] = {.lex_state = 11},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token_end_tag] = true,
  },
  [4] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH2] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
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
    [aux_sym_nl_token1] = ACTIONS(1),
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
    [sym_document] = STATE(435),
    [sym_paragraph] = STATE(3),
    [sym_escaped_sequence] = STATE(4),
    [sym_comment] = STATE(3),
    [sym_inline_tag] = STATE(4),
    [sym_verbatim_tag] = STATE(3),
    [sym_hashtag] = STATE(3),
    [sym_eol] = STATE(4),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_paragraph_repeat1] = STATE(4),
    [anon_sym_BSLASH] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [aux_sym_nl_token1] = ACTIONS(9),
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
    ACTIONS(27), 1,
      anon_sym_COLON,
    ACTIONS(36), 1,
      sym_hashtag_token,
    ACTIONS(39), 1,
      sym_tag_token,
    ACTIONS(42), 1,
      sym_hard_break,
    ACTIONS(30), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(4), 4,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_eol,
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
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      sym_hashtag_token,
    ACTIONS(15), 1,
      sym_tag_token,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_hard_break,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(4), 4,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_eol,
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
  [148] = 7,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    ACTIONS(54), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(59), 2,
      sym__eof,
      aux_sym_nl_token1,
    ACTIONS(49), 4,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_eol,
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
  [209] = 7,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    ACTIONS(70), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_COLON,
    ACTIONS(75), 2,
      sym__eof,
      aux_sym_nl_token1,
    ACTIONS(65), 4,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      ts_builtin_sym_end,
    STATE(5), 4,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_eol,
      aux_sym_paragraph_repeat1,
    ACTIONS(78), 33,
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
  [270] = 2,
    ACTIONS(81), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(83), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [317] = 2,
    ACTIONS(85), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(87), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [364] = 2,
    ACTIONS(89), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(91), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [411] = 2,
    ACTIONS(93), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(95), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [458] = 2,
    ACTIONS(97), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(99), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [505] = 2,
    ACTIONS(101), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(103), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [552] = 2,
    ACTIONS(105), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(107), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [599] = 2,
    ACTIONS(109), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(111), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [646] = 2,
    ACTIONS(113), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(115), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [693] = 2,
    ACTIONS(117), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(119), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [740] = 2,
    ACTIONS(121), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(123), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [787] = 2,
    ACTIONS(125), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(127), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [834] = 2,
    ACTIONS(129), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(131), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [881] = 2,
    ACTIONS(133), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(135), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [928] = 2,
    ACTIONS(137), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(139), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [975] = 2,
    ACTIONS(141), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(143), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1022] = 2,
    ACTIONS(145), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(147), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1069] = 2,
    ACTIONS(149), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(151), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1116] = 2,
    ACTIONS(153), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(155), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1163] = 2,
    ACTIONS(157), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(159), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1210] = 2,
    ACTIONS(161), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(163), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1257] = 2,
    ACTIONS(165), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(167), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1304] = 2,
    ACTIONS(169), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(171), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1351] = 2,
    ACTIONS(173), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(175), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1398] = 2,
    ACTIONS(177), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(179), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1445] = 2,
    ACTIONS(181), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(183), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1492] = 2,
    ACTIONS(185), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(187), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1539] = 2,
    ACTIONS(189), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(191), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1586] = 2,
    ACTIONS(193), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(195), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1633] = 2,
    ACTIONS(197), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(199), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1680] = 2,
    ACTIONS(201), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(203), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1727] = 2,
    ACTIONS(205), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(207), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1774] = 2,
    ACTIONS(209), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(211), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1821] = 2,
    ACTIONS(213), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(215), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1868] = 2,
    ACTIONS(217), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(219), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1915] = 2,
    ACTIONS(221), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(223), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [1962] = 2,
    ACTIONS(225), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(227), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2009] = 2,
    ACTIONS(229), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(231), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2056] = 2,
    ACTIONS(233), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(235), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2103] = 2,
    ACTIONS(237), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(239), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2150] = 2,
    ACTIONS(241), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(243), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2197] = 2,
    ACTIONS(245), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(247), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2244] = 2,
    ACTIONS(249), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(251), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2291] = 2,
    ACTIONS(253), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(255), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
    ACTIONS(257), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(259), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2385] = 2,
    ACTIONS(261), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(263), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2432] = 2,
    ACTIONS(265), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(267), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2479] = 2,
    ACTIONS(269), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(271), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2526] = 2,
    ACTIONS(273), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(275), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2573] = 2,
    ACTIONS(277), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(279), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2620] = 2,
    ACTIONS(281), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(283), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2667] = 2,
    ACTIONS(285), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(287), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2714] = 2,
    ACTIONS(289), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(291), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2761] = 2,
    ACTIONS(293), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(295), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2808] = 2,
    ACTIONS(297), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(299), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2855] = 2,
    ACTIONS(301), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(303), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2902] = 2,
    ACTIONS(305), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(307), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2949] = 2,
    ACTIONS(309), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(311), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [2996] = 2,
    ACTIONS(313), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(315), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3043] = 2,
    ACTIONS(317), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(319), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3090] = 2,
    ACTIONS(321), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(323), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3137] = 2,
    ACTIONS(325), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(327), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3184] = 2,
    ACTIONS(329), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(331), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3231] = 2,
    ACTIONS(333), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(335), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3278] = 2,
    ACTIONS(337), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(339), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3325] = 2,
    ACTIONS(341), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(343), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3372] = 2,
    ACTIONS(345), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(347), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3419] = 2,
    ACTIONS(349), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(351), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3466] = 2,
    ACTIONS(353), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(355), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3513] = 2,
    ACTIONS(357), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(359), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3560] = 2,
    ACTIONS(361), 6,
      sym_hashtag_token,
      sym_tag_token,
      sym_hard_break,
      sym__eof,
      ts_builtin_sym_end,
      aux_sym_nl_token1,
    ACTIONS(363), 36,
      anon_sym_BSLASH,
      anon_sym_POUND,
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
  [3607] = 3,
    ACTIONS(369), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(367), 2,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
    ACTIONS(365), 32,
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
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
  [3649] = 3,
    ACTIONS(375), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(373), 2,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
    ACTIONS(371), 32,
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
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
  [3691] = 3,
    ACTIONS(381), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(379), 2,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
    ACTIONS(377), 32,
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
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
  [3733] = 3,
    ACTIONS(387), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(385), 2,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
    ACTIONS(383), 31,
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
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [3774] = 3,
    ACTIONS(393), 1,
      aux_sym_inline_tag_token3,
    ACTIONS(391), 2,
      aux_sym_inline_tag_token1,
      aux_sym_inline_tag_token2,
    ACTIONS(389), 31,
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
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_BSLASH3,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_BQUOTE,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_RBRACE,
      anon_sym_TILDE,
  [3815] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    STATE(84), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3839] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3863] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3887] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3911] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3935] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3959] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [3983] = 7,
    ACTIONS(417), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    ACTIONS(425), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(428), 1,
      aux_sym_nl_token1,
    STATE(89), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [4007] = 7,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(397), 1,
      anon_sym_COLON,
    ACTIONS(401), 1,
      aux_sym_inline_tag_token4,
    ACTIONS(403), 1,
      aux_sym_nl_token1,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_inline_tag_repeat1,
    STATE(247), 3,
      sym_escaped_sequence,
      sym_inline_tag,
      sym_nl,
  [4031] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(439), 1,
      sym_end_tag,
    STATE(107), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4054] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(441), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4077] = 7,
    ACTIONS(443), 1,
      aux_sym_nl_token1,
    ACTIONS(446), 1,
      sym_raw_word,
    ACTIONS(449), 1,
      sym_tag_token,
    ACTIONS(452), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4100] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(454), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4123] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(456), 1,
      sym_end_tag,
    STATE(99), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4146] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(458), 1,
      sym_end_tag,
    STATE(101), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4169] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(460), 1,
      sym_end_tag,
    STATE(103), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4192] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(462), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4215] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(464), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4238] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(466), 1,
      sym_end_tag,
    STATE(92), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4261] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(468), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4284] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(470), 1,
      sym_end_tag,
    STATE(106), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4307] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(472), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4330] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(474), 1,
      sym_end_tag,
    STATE(98), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4353] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(476), 1,
      sym_end_tag,
    STATE(94), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4376] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(478), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4399] = 7,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(435), 1,
      sym_raw_word,
    ACTIONS(437), 1,
      sym_tag_token,
    ACTIONS(480), 1,
      sym_end_tag,
    STATE(93), 1,
      aux_sym_verbatim_tag_repeat3,
    STATE(397), 1,
      aux_sym_verbatim_tag_repeat2,
    STATE(395), 2,
      sym_verbatim_tag,
      sym_nl,
  [4422] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(486), 1,
      anon_sym_RBRACE2,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4442] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(490), 1,
      anon_sym_RBRACE2,
    STATE(204), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4462] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(496), 1,
      anon_sym_RPAREN2,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    STATE(128), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4482] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(500), 1,
      anon_sym_RBRACE2,
    STATE(130), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4502] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(502), 1,
      anon_sym_RPAREN2,
    STATE(144), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4522] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(504), 1,
      anon_sym_RBRACE2,
    STATE(154), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4542] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(506), 1,
      anon_sym_RPAREN2,
    STATE(157), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4562] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(508), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4582] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(510), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4602] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(512), 1,
      anon_sym_RBRACE2,
    STATE(138), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4622] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(514), 1,
      anon_sym_RBRACE2,
    STATE(169), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4642] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(516), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4662] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(518), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4682] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(520), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4702] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(522), 1,
      anon_sym_RPAREN2,
    STATE(145), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4722] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(524), 1,
      anon_sym_RBRACE2,
    STATE(147), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4742] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(526), 1,
      anon_sym_RBRACE2,
    STATE(115), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4762] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(528), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4782] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(530), 1,
      anon_sym_RBRACE2,
    STATE(151), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4802] = 7,
    ACTIONS(532), 1,
      anon_sym_,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    STATE(243), 1,
      sym_eol,
  [4824] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(544), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4844] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(546), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4864] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(548), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4884] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(550), 1,
      anon_sym_RPAREN2,
    STATE(158), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [4904] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(552), 1,
      anon_sym_RBRACE2,
    STATE(160), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4924] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(554), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4944] = 7,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(556), 1,
      anon_sym_,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 1,
      anon_sym_LBRACK,
    STATE(242), 1,
      sym_eol,
  [4966] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(564), 1,
      anon_sym_RBRACE2,
    STATE(125), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [4986] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(566), 1,
      anon_sym_RBRACE2,
    STATE(120), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5006] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(568), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5026] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(570), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5046] = 7,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(572), 1,
      anon_sym_,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      anon_sym_LBRACK,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    STATE(39), 1,
      sym_eol,
  [5068] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(582), 1,
      anon_sym_RBRACE2,
    STATE(165), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5088] = 7,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(584), 1,
      anon_sym_,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_eol,
  [5110] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(592), 1,
      anon_sym_RBRACE2,
    STATE(121), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5130] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(594), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5150] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(596), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5170] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(598), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5190] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(600), 1,
      anon_sym_RBRACE2,
    STATE(129), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5210] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(602), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5230] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(604), 1,
      anon_sym_RPAREN2,
    STATE(119), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5250] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(606), 1,
      anon_sym_RBRACE2,
    STATE(133), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5270] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(608), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5290] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(610), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5310] = 6,
    ACTIONS(612), 1,
      anon_sym_BSLASH,
    ACTIONS(615), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(618), 1,
      anon_sym_RBRACE2,
    ACTIONS(620), 1,
      aux_sym_nl_token1,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5330] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(623), 1,
      anon_sym_RBRACE2,
    STATE(178), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5350] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(625), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5370] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(627), 1,
      anon_sym_RBRACE2,
    STATE(137), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5390] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(629), 1,
      anon_sym_RBRACE2,
    STATE(143), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5410] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(631), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5430] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(633), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5450] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(635), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5470] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(637), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5490] = 6,
    ACTIONS(639), 1,
      anon_sym_BSLASH,
    ACTIONS(642), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(645), 1,
      anon_sym_RPAREN2,
    ACTIONS(647), 1,
      aux_sym_nl_token1,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5510] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(650), 1,
      anon_sym_RPAREN2,
    STATE(206), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5530] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(652), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5550] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(654), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5570] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(656), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5590] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(658), 1,
      anon_sym_RBRACE2,
    STATE(116), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5610] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(660), 1,
      anon_sym_RBRACE2,
    STATE(191), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5630] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(662), 1,
      anon_sym_RBRACE2,
    STATE(197), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5650] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(664), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5670] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(666), 1,
      anon_sym_RBRACE2,
    STATE(193), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5690] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(668), 1,
      anon_sym_RPAREN2,
    STATE(187), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5710] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(670), 1,
      anon_sym_RBRACE2,
    STATE(182), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5730] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(672), 1,
      anon_sym_RBRACE2,
    STATE(150), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5750] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(674), 1,
      anon_sym_RBRACE2,
    STATE(207), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5770] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(676), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5790] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(678), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5810] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(680), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5830] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(682), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5850] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(684), 1,
      anon_sym_RBRACE2,
    STATE(159), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5870] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(686), 1,
      anon_sym_RBRACE2,
    STATE(201), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5890] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(688), 1,
      anon_sym_RPAREN2,
    STATE(208), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [5910] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(690), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5930] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(692), 1,
      anon_sym_RBRACE2,
    STATE(203), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5950] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(694), 1,
      anon_sym_RBRACE2,
    STATE(199), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5970] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(696), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [5990] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(698), 1,
      anon_sym_RBRACE2,
    STATE(163), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6010] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(700), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6030] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(702), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6050] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(704), 1,
      anon_sym_RPAREN2,
    STATE(164), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6070] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(706), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6090] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(708), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6110] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(710), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6130] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(712), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6150] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(714), 1,
      anon_sym_RPAREN2,
    STATE(192), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6170] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(716), 1,
      anon_sym_RBRACE2,
    STATE(188), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6190] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(718), 1,
      anon_sym_RBRACE2,
    STATE(190), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6210] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(720), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6230] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(722), 1,
      anon_sym_RBRACE2,
    STATE(175), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6250] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(724), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6270] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(726), 1,
      anon_sym_RBRACE2,
    STATE(176), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6290] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(728), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6310] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(730), 1,
      anon_sym_RPAREN2,
    STATE(177), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6330] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(732), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6350] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(734), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6370] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(736), 1,
      anon_sym_RBRACE2,
    STATE(108), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6390] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(738), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6410] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(740), 1,
      anon_sym_RBRACE2,
    STATE(152), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6430] = 6,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      aux_sym_inline_tag_token5,
    ACTIONS(498), 1,
      aux_sym_nl_token1,
    ACTIONS(742), 1,
      anon_sym_RPAREN2,
    STATE(161), 1,
      aux_sym_inline_tag_repeat2,
    STATE(402), 2,
      sym_escaped_sequence,
      sym_nl,
  [6450] = 6,
    ACTIONS(482), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      aux_sym_inline_tag_token6,
    ACTIONS(488), 1,
      aux_sym_nl_token1,
    ACTIONS(744), 1,
      anon_sym_RBRACE2,
    STATE(185), 1,
      aux_sym_inline_tag_repeat3,
    STATE(403), 2,
      sym_escaped_sequence,
      sym_nl,
  [6470] = 6,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(746), 1,
      anon_sym_,
    ACTIONS(748), 1,
      anon_sym_LPAREN,
    ACTIONS(750), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_eol,
  [6489] = 6,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(752), 1,
      anon_sym_,
    ACTIONS(754), 1,
      anon_sym_LPAREN,
    ACTIONS(756), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_eol,
  [6508] = 6,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(758), 1,
      anon_sym_,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
    STATE(289), 1,
      sym_eol,
  [6527] = 6,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(764), 1,
      anon_sym_,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    STATE(219), 1,
      sym_eol,
  [6546] = 6,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(770), 1,
      anon_sym_,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
    STATE(318), 1,
      sym_eol,
  [6565] = 6,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(776), 1,
      anon_sym_,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    ACTIONS(780), 1,
      anon_sym_LBRACE,
    STATE(264), 1,
      sym_eol,
  [6584] = 6,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(782), 1,
      anon_sym_,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_eol,
  [6603] = 6,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(788), 1,
      anon_sym_,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_eol,
  [6622] = 2,
    ACTIONS(165), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(167), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [6632] = 2,
    ACTIONS(289), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(291), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [6642] = 2,
    ACTIONS(193), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(195), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [6652] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(71), 2,
      sym_comment,
      sym_eol,
  [6664] = 4,
    ACTIONS(794), 1,
      sym_raw_word,
    STATE(25), 1,
      sym_eol,
    STATE(249), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
  [6678] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(13), 2,
      sym_comment,
      sym_eol,
  [6690] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(796), 1,
      anon_sym_,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_eol,
  [6706] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(10), 2,
      sym_comment,
      sym_eol,
  [6718] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(9), 2,
      sym_comment,
      sym_eol,
  [6730] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(800), 1,
      anon_sym_,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_eol,
  [6746] = 4,
    ACTIONS(804), 1,
      sym_raw_word,
    STATE(54), 1,
      sym_eol,
    STATE(400), 1,
      aux_sym_comment_repeat1,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
  [6760] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(806), 1,
      anon_sym_,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_eol,
  [6776] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(810), 1,
      anon_sym_,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_eol,
  [6792] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(814), 1,
      anon_sym_,
    ACTIONS(816), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_eol,
  [6808] = 2,
    ACTIONS(89), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(91), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [6818] = 4,
    ACTIONS(804), 1,
      sym_raw_word,
    STATE(33), 1,
      sym_eol,
    STATE(228), 1,
      aux_sym_comment_repeat1,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
  [6832] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(818), 1,
      anon_sym_,
    ACTIONS(820), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_eol,
  [6848] = 4,
    ACTIONS(804), 1,
      sym_raw_word,
    STATE(241), 1,
      aux_sym_comment_repeat1,
    STATE(378), 1,
      sym_eol,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
  [6862] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(824), 1,
      anon_sym_,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_eol,
  [6878] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(828), 1,
      anon_sym_,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_eol,
  [6894] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(832), 1,
      anon_sym_,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_eol,
  [6910] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(26), 2,
      sym_comment,
      sym_eol,
  [6922] = 4,
    ACTIONS(794), 1,
      sym_raw_word,
    STATE(43), 1,
      sym_eol,
    STATE(391), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
  [6936] = 4,
    ACTIONS(804), 1,
      sym_raw_word,
    STATE(376), 1,
      sym_eol,
    STATE(400), 1,
      aux_sym_comment_repeat1,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
  [6950] = 2,
    ACTIONS(197), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(199), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [6960] = 2,
    ACTIONS(213), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(215), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [6970] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(24), 2,
      sym_comment,
      sym_eol,
  [6982] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(370), 2,
      sym_comment,
      sym_eol,
  [6994] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(369), 2,
      sym_comment,
      sym_eol,
  [7006] = 2,
    ACTIONS(840), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(838), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7016] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(842), 1,
      anon_sym_,
    ACTIONS(844), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      sym_eol,
  [7032] = 4,
    ACTIONS(794), 1,
      sym_raw_word,
    STATE(45), 1,
      sym_eol,
    STATE(391), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
  [7046] = 2,
    ACTIONS(305), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(307), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7056] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(846), 1,
      anon_sym_,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym_eol,
  [7072] = 2,
    ACTIONS(852), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(850), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7082] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(854), 1,
      anon_sym_,
    ACTIONS(856), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_eol,
  [7098] = 2,
    ACTIONS(281), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(283), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7108] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(324), 2,
      sym_comment,
      sym_eol,
  [7120] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(361), 2,
      sym_comment,
      sym_eol,
  [7132] = 2,
    ACTIONS(173), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(175), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7142] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(360), 2,
      sym_comment,
      sym_eol,
  [7154] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(358), 2,
      sym_comment,
      sym_eol,
  [7166] = 2,
    ACTIONS(81), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(83), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7176] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(858), 1,
      anon_sym_,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(279), 1,
      sym_eol,
  [7192] = 2,
    ACTIONS(257), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(259), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7202] = 2,
    ACTIONS(181), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(183), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7212] = 2,
    ACTIONS(225), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(227), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7222] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(75), 2,
      sym_comment,
      sym_eol,
  [7234] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(862), 1,
      anon_sym_,
    ACTIONS(864), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_eol,
  [7250] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(866), 1,
      anon_sym_,
    ACTIONS(868), 1,
      anon_sym_LBRACE,
    STATE(285), 1,
      sym_eol,
  [7266] = 2,
    ACTIONS(145), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(147), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7276] = 2,
    ACTIONS(185), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(187), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7286] = 2,
    ACTIONS(329), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(331), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7296] = 3,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(14), 2,
      sym_comment,
      sym_eol,
  [7308] = 4,
    ACTIONS(794), 1,
      sym_raw_word,
    STATE(23), 1,
      sym_eol,
    STATE(240), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(9), 2,
      sym__eof,
      aux_sym_nl_token1,
  [7322] = 2,
    ACTIONS(201), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(203), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7332] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(350), 2,
      sym_comment,
      sym_eol,
  [7344] = 2,
    ACTIONS(205), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(207), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7354] = 2,
    ACTIONS(217), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(219), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7364] = 3,
    ACTIONS(836), 1,
      anon_sym_POUND,
    ACTIONS(822), 2,
      sym__eof,
      aux_sym_nl_token1,
    STATE(347), 2,
      sym_comment,
      sym_eol,
  [7376] = 2,
    ACTIONS(221), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(223), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7386] = 2,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(123), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7396] = 2,
    ACTIONS(101), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(103), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7406] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(870), 1,
      anon_sym_,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    STATE(295), 1,
      sym_eol,
  [7422] = 2,
    ACTIONS(241), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(243), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7432] = 5,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(874), 1,
      anon_sym_,
    ACTIONS(876), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_eol,
  [7448] = 2,
    ACTIONS(245), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(247), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7458] = 2,
    ACTIONS(129), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(131), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7468] = 2,
    ACTIONS(141), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(143), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7478] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(878), 1,
      anon_sym_,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(304), 1,
      sym_eol,
  [7494] = 2,
    ACTIONS(249), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(251), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7504] = 2,
    ACTIONS(117), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(119), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7514] = 2,
    ACTIONS(261), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(263), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7524] = 2,
    ACTIONS(277), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(279), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7534] = 2,
    ACTIONS(169), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(171), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7544] = 2,
    ACTIONS(125), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(127), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7554] = 2,
    ACTIONS(301), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(303), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7564] = 2,
    ACTIONS(177), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(179), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7574] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(882), 1,
      anon_sym_,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym_eol,
  [7590] = 2,
    ACTIONS(209), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(211), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7600] = 2,
    ACTIONS(105), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(107), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7610] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(886), 1,
      anon_sym_,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym_eol,
  [7626] = 2,
    ACTIONS(293), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(295), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7636] = 2,
    ACTIONS(233), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(235), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7646] = 2,
    ACTIONS(297), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(299), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7656] = 2,
    ACTIONS(85), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(87), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7666] = 2,
    ACTIONS(253), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(255), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7676] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(890), 1,
      anon_sym_,
    ACTIONS(892), 1,
      anon_sym_LBRACE,
    STATE(317), 1,
      sym_eol,
  [7692] = 2,
    ACTIONS(265), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(267), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7702] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(894), 1,
      anon_sym_,
    ACTIONS(896), 1,
      anon_sym_LBRACE,
    STATE(319), 1,
      sym_eol,
  [7718] = 2,
    ACTIONS(269), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(271), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7728] = 2,
    ACTIONS(285), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(287), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7738] = 2,
    ACTIONS(313), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(315), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7748] = 2,
    ACTIONS(337), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(339), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7758] = 2,
    ACTIONS(361), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(363), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7768] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(898), 1,
      anon_sym_,
    ACTIONS(900), 1,
      anon_sym_LBRACE,
    STATE(250), 1,
      sym_eol,
  [7784] = 2,
    ACTIONS(353), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(355), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7794] = 2,
    ACTIONS(349), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(351), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7804] = 2,
    ACTIONS(345), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(347), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7814] = 2,
    ACTIONS(333), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(335), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7824] = 2,
    ACTIONS(137), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(139), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7834] = 2,
    ACTIONS(325), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(327), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7844] = 5,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(902), 1,
      anon_sym_,
    ACTIONS(904), 1,
      anon_sym_LBRACE,
    STATE(298), 1,
      sym_eol,
  [7860] = 2,
    ACTIONS(321), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(323), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7870] = 2,
    ACTIONS(317), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(319), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7880] = 2,
    ACTIONS(309), 2,
      anon_sym_RBRACK,
      aux_sym_nl_token1,
    ACTIONS(311), 3,
      anon_sym_BSLASH,
      anon_sym_COLON,
      aux_sym_inline_tag_token4,
  [7890] = 2,
    ACTIONS(115), 1,
      sym_raw_word,
    ACTIONS(113), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [7899] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(906), 1,
      anon_sym_,
    STATE(55), 1,
      sym_eol,
  [7912] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(908), 1,
      anon_sym_,
    STATE(303), 1,
      sym_eol,
  [7925] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(910), 1,
      anon_sym_,
    STATE(321), 1,
      sym_eol,
  [7938] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(912), 1,
      anon_sym_,
    STATE(322), 1,
      sym_eol,
  [7951] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(914), 1,
      anon_sym_,
    STATE(294), 1,
      sym_eol,
  [7964] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(916), 1,
      anon_sym_,
    STATE(302), 1,
      sym_eol,
  [7977] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(918), 1,
      anon_sym_,
    STATE(300), 1,
      sym_eol,
  [7990] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(920), 1,
      anon_sym_,
    STATE(293), 1,
      sym_eol,
  [8003] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(922), 1,
      anon_sym_,
    STATE(291), 1,
      sym_eol,
  [8016] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(924), 1,
      anon_sym_,
    STATE(290), 1,
      sym_eol,
  [8029] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(926), 1,
      anon_sym_,
    STATE(323), 1,
      sym_eol,
  [8042] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(928), 1,
      anon_sym_,
    STATE(19), 1,
      sym_eol,
  [8055] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(930), 1,
      anon_sym_,
    STATE(316), 1,
      sym_eol,
  [8068] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(932), 1,
      anon_sym_,
    STATE(315), 1,
      sym_eol,
  [8081] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(934), 1,
      anon_sym_,
    STATE(288), 1,
      sym_eol,
  [8094] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(936), 1,
      anon_sym_,
    STATE(284), 1,
      sym_eol,
  [8107] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(938), 1,
      anon_sym_,
    STATE(282), 1,
      sym_eol,
  [8120] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(940), 1,
      anon_sym_,
    STATE(314), 1,
      sym_eol,
  [8133] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(942), 1,
      anon_sym_,
    STATE(311), 1,
      sym_eol,
  [8146] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(944), 1,
      anon_sym_,
    STATE(309), 1,
      sym_eol,
  [8159] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(946), 1,
      anon_sym_,
    STATE(308), 1,
      sym_eol,
  [8172] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(948), 1,
      anon_sym_,
    STATE(278), 1,
      sym_eol,
  [8185] = 2,
    ACTIONS(163), 1,
      sym_raw_word,
    ACTIONS(161), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8194] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(950), 1,
      anon_sym_,
    STATE(276), 1,
      sym_eol,
  [8207] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(952), 1,
      anon_sym_,
    STATE(275), 1,
      sym_eol,
  [8220] = 2,
    ACTIONS(155), 1,
      sym_raw_word,
    ACTIONS(153), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8229] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(954), 1,
      anon_sym_,
    STATE(306), 1,
      sym_eol,
  [8242] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(956), 1,
      anon_sym_,
    STATE(273), 1,
      sym_eol,
  [8255] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(958), 1,
      anon_sym_,
    STATE(301), 1,
      sym_eol,
  [8268] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(960), 1,
      anon_sym_,
    STATE(220), 1,
      sym_eol,
  [8281] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(962), 1,
      anon_sym_,
    STATE(269), 1,
      sym_eol,
  [8294] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(964), 1,
      anon_sym_,
    STATE(297), 1,
      sym_eol,
  [8307] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(966), 1,
      anon_sym_,
    STATE(292), 1,
      sym_eol,
  [8320] = 2,
    ACTIONS(95), 1,
      sym_raw_word,
    ACTIONS(93), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8329] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(968), 1,
      anon_sym_,
    STATE(263), 1,
      sym_eol,
  [8342] = 2,
    ACTIONS(99), 1,
      sym_raw_word,
    ACTIONS(97), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8351] = 2,
    ACTIONS(111), 1,
      sym_raw_word,
    ACTIONS(109), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8360] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(970), 1,
      anon_sym_,
    STATE(21), 1,
      sym_eol,
  [8373] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(972), 1,
      anon_sym_,
    STATE(257), 1,
      sym_eol,
  [8386] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(974), 1,
      anon_sym_,
    STATE(286), 1,
      sym_eol,
  [8399] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(976), 1,
      anon_sym_,
    STATE(280), 1,
      sym_eol,
  [8412] = 2,
    ACTIONS(91), 1,
      sym_raw_word,
    ACTIONS(89), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8421] = 2,
    ACTIONS(281), 1,
      aux_sym_nl_token1,
    ACTIONS(283), 3,
      anon_sym_BSLASH,
      aux_sym_inline_tag_token6,
      anon_sym_RBRACE2,
  [8430] = 2,
    ACTIONS(852), 1,
      aux_sym_nl_token1,
    ACTIONS(850), 3,
      anon_sym_BSLASH,
      aux_sym_inline_tag_token6,
      anon_sym_RBRACE2,
  [8439] = 2,
    ACTIONS(359), 1,
      sym_raw_word,
    ACTIONS(357), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8448] = 2,
    ACTIONS(343), 1,
      sym_raw_word,
    ACTIONS(341), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8457] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(102), 1,
      sym_nl,
    STATE(433), 1,
      aux_sym_verbatim_tag_repeat1,
  [8470] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(100), 1,
      sym_nl,
    STATE(433), 1,
      aux_sym_verbatim_tag_repeat1,
  [8483] = 2,
    ACTIONS(850), 1,
      sym_raw_word,
    ACTIONS(852), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8492] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(980), 1,
      anon_sym_,
    STATE(268), 1,
      sym_eol,
  [8505] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(982), 1,
      anon_sym_,
    STATE(262), 1,
      sym_eol,
  [8518] = 2,
    ACTIONS(275), 1,
      sym_raw_word,
    ACTIONS(273), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8527] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(984), 1,
      anon_sym_,
    STATE(28), 1,
      sym_eol,
  [8540] = 2,
    ACTIONS(191), 1,
      sym_raw_word,
    ACTIONS(189), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8549] = 2,
    ACTIONS(852), 1,
      aux_sym_nl_token1,
    ACTIONS(850), 3,
      anon_sym_BSLASH,
      aux_sym_inline_tag_token5,
      anon_sym_RPAREN2,
  [8558] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(96), 1,
      sym_nl,
    STATE(371), 1,
      aux_sym_verbatim_tag_repeat1,
  [8571] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(95), 1,
      sym_nl,
    STATE(372), 1,
      aux_sym_verbatim_tag_repeat1,
  [8584] = 2,
    ACTIONS(135), 1,
      sym_raw_word,
    ACTIONS(133), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8593] = 2,
    ACTIONS(281), 1,
      aux_sym_nl_token1,
    ACTIONS(283), 3,
      anon_sym_BSLASH,
      aux_sym_inline_tag_token5,
      anon_sym_RPAREN2,
  [8602] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(104), 1,
      sym_nl,
    STATE(386), 1,
      aux_sym_verbatim_tag_repeat1,
  [8615] = 4,
    ACTIONS(822), 1,
      sym__eof,
    ACTIONS(986), 1,
      anon_sym_,
    ACTIONS(988), 1,
      aux_sym_nl_token1,
    STATE(382), 1,
      sym_eol,
  [8628] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(91), 1,
      sym_nl,
    STATE(433), 1,
      aux_sym_verbatim_tag_repeat1,
  [8641] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(105), 1,
      sym_nl,
    STATE(412), 1,
      aux_sym_verbatim_tag_repeat1,
  [8654] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(990), 1,
      anon_sym_,
    STATE(38), 1,
      sym_eol,
  [8667] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(992), 1,
      anon_sym_,
    STATE(29), 1,
      sym_eol,
  [8680] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(994), 1,
      anon_sym_,
    STATE(31), 1,
      sym_eol,
  [8693] = 3,
    ACTIONS(998), 1,
      sym_raw_word,
    STATE(391), 1,
      aux_sym_verbatim_tag_repeat1,
    ACTIONS(996), 2,
      sym__eof,
      aux_sym_nl_token1,
  [8704] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1001), 1,
      anon_sym_,
    STATE(44), 1,
      sym_eol,
  [8717] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1003), 1,
      anon_sym_,
    STATE(32), 1,
      sym_eol,
  [8730] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1005), 1,
      anon_sym_,
    STATE(34), 1,
      sym_eol,
  [8743] = 2,
    ACTIONS(1009), 1,
      sym_raw_word,
    ACTIONS(1007), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8752] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1011), 1,
      anon_sym_,
    STATE(36), 1,
      sym_eol,
  [8765] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(1013), 1,
      sym_raw_word,
    STATE(413), 1,
      sym_nl,
    STATE(430), 1,
      aux_sym_verbatim_tag_repeat2,
  [8778] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1015), 1,
      anon_sym_,
    STATE(37), 1,
      sym_eol,
  [8791] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1017), 1,
      anon_sym_,
    STATE(40), 1,
      sym_eol,
  [8804] = 3,
    ACTIONS(1021), 1,
      sym_raw_word,
    STATE(400), 1,
      aux_sym_comment_repeat1,
    ACTIONS(1019), 2,
      sym__eof,
      aux_sym_nl_token1,
  [8815] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1024), 1,
      anon_sym_,
    STATE(41), 1,
      sym_eol,
  [8828] = 2,
    ACTIONS(1028), 1,
      aux_sym_nl_token1,
    ACTIONS(1026), 3,
      anon_sym_BSLASH,
      aux_sym_inline_tag_token5,
      anon_sym_RPAREN2,
  [8837] = 2,
    ACTIONS(1032), 1,
      aux_sym_nl_token1,
    ACTIONS(1030), 3,
      anon_sym_BSLASH,
      aux_sym_inline_tag_token6,
      anon_sym_RBRACE2,
  [8846] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1034), 1,
      anon_sym_,
    STATE(46), 1,
      sym_eol,
  [8859] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1036), 1,
      anon_sym_,
    STATE(47), 1,
      sym_eol,
  [8872] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1038), 1,
      anon_sym_,
    STATE(48), 1,
      sym_eol,
  [8885] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1040), 1,
      anon_sym_,
    STATE(50), 1,
      sym_eol,
  [8898] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1042), 1,
      anon_sym_,
    STATE(51), 1,
      sym_eol,
  [8911] = 4,
    ACTIONS(540), 1,
      aux_sym_nl_token1,
    ACTIONS(542), 1,
      sym__eof,
    ACTIONS(1044), 1,
      anon_sym_,
    STATE(270), 1,
      sym_eol,
  [8924] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1046), 1,
      anon_sym_,
    STATE(17), 1,
      sym_eol,
  [8937] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1048), 1,
      anon_sym_,
    STATE(61), 1,
      sym_eol,
  [8950] = 4,
    ACTIONS(433), 1,
      aux_sym_nl_token1,
    ACTIONS(978), 1,
      sym_raw_word,
    STATE(97), 1,
      sym_nl,
    STATE(433), 1,
      aux_sym_verbatim_tag_repeat1,
  [8963] = 2,
    ACTIONS(1050), 1,
      sym_raw_word,
    ACTIONS(452), 3,
      sym_tag_token,
      sym_end_tag,
      aux_sym_nl_token1,
  [8972] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1052), 1,
      anon_sym_,
    STATE(59), 1,
      sym_eol,
  [8985] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1054), 1,
      anon_sym_,
    STATE(60), 1,
      sym_eol,
  [8998] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1056), 1,
      anon_sym_,
    STATE(52), 1,
      sym_eol,
  [9011] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1058), 1,
      anon_sym_,
    STATE(7), 1,
      sym_eol,
  [9024] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1060), 1,
      anon_sym_,
    STATE(63), 1,
      sym_eol,
  [9037] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1062), 1,
      anon_sym_,
    STATE(65), 1,
      sym_eol,
  [9050] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1064), 1,
      anon_sym_,
    STATE(66), 1,
      sym_eol,
  [9063] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1066), 1,
      anon_sym_,
    STATE(68), 1,
      sym_eol,
  [9076] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1068), 1,
      anon_sym_,
    STATE(11), 1,
      sym_eol,
  [9089] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1070), 1,
      anon_sym_,
    STATE(72), 1,
      sym_eol,
  [9102] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1072), 1,
      anon_sym_,
    STATE(73), 1,
      sym_eol,
  [9115] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1074), 1,
      anon_sym_,
    STATE(74), 1,
      sym_eol,
  [9128] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1076), 1,
      anon_sym_,
    STATE(70), 1,
      sym_eol,
  [9141] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1078), 1,
      anon_sym_,
    STATE(57), 1,
      sym_eol,
  [9154] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1080), 1,
      anon_sym_,
    STATE(53), 1,
      sym_eol,
  [9167] = 4,
    ACTIONS(9), 1,
      sym__eof,
    ACTIONS(580), 1,
      aux_sym_nl_token1,
    ACTIONS(1082), 1,
      anon_sym_,
    STATE(22), 1,
      sym_eol,
  [9180] = 3,
    ACTIONS(1084), 1,
      aux_sym_nl_token1,
    ACTIONS(1086), 1,
      sym_raw_word,
    STATE(430), 1,
      aux_sym_verbatim_tag_repeat2,
  [9190] = 2,
    ACTIONS(1091), 1,
      sym_raw_word,
    ACTIONS(1089), 2,
      sym__eof,
      aux_sym_nl_token1,
  [9198] = 2,
    ACTIONS(1095), 1,
      sym_raw_word,
    ACTIONS(1093), 2,
      sym__eof,
      aux_sym_nl_token1,
  [9206] = 3,
    ACTIONS(996), 1,
      aux_sym_nl_token1,
    ACTIONS(1097), 1,
      sym_raw_word,
    STATE(433), 1,
      aux_sym_verbatim_tag_repeat1,
  [9216] = 2,
    ACTIONS(1093), 1,
      aux_sym_nl_token1,
    ACTIONS(1095), 1,
      sym_raw_word,
  [9223] = 1,
    ACTIONS(1100), 1,
      ts_builtin_sym_end,
  [9227] = 1,
    ACTIONS(1102), 1,
      aux_sym_escaped_sequence_token1,
  [9231] = 1,
    ACTIONS(1104), 1,
      aux_sym_escaped_sequence_token1,
  [9235] = 1,
    ACTIONS(1106), 1,
      aux_sym_escaped_sequence_token1,
  [9239] = 1,
    ACTIONS(1108), 1,
      aux_sym_escaped_sequence_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 209,
  [SMALL_STATE(6)] = 270,
  [SMALL_STATE(7)] = 317,
  [SMALL_STATE(8)] = 364,
  [SMALL_STATE(9)] = 411,
  [SMALL_STATE(10)] = 458,
  [SMALL_STATE(11)] = 505,
  [SMALL_STATE(12)] = 552,
  [SMALL_STATE(13)] = 599,
  [SMALL_STATE(14)] = 646,
  [SMALL_STATE(15)] = 693,
  [SMALL_STATE(16)] = 740,
  [SMALL_STATE(17)] = 787,
  [SMALL_STATE(18)] = 834,
  [SMALL_STATE(19)] = 881,
  [SMALL_STATE(20)] = 928,
  [SMALL_STATE(21)] = 975,
  [SMALL_STATE(22)] = 1022,
  [SMALL_STATE(23)] = 1069,
  [SMALL_STATE(24)] = 1116,
  [SMALL_STATE(25)] = 1163,
  [SMALL_STATE(26)] = 1210,
  [SMALL_STATE(27)] = 1257,
  [SMALL_STATE(28)] = 1304,
  [SMALL_STATE(29)] = 1351,
  [SMALL_STATE(30)] = 1398,
  [SMALL_STATE(31)] = 1445,
  [SMALL_STATE(32)] = 1492,
  [SMALL_STATE(33)] = 1539,
  [SMALL_STATE(34)] = 1586,
  [SMALL_STATE(35)] = 1633,
  [SMALL_STATE(36)] = 1680,
  [SMALL_STATE(37)] = 1727,
  [SMALL_STATE(38)] = 1774,
  [SMALL_STATE(39)] = 1821,
  [SMALL_STATE(40)] = 1868,
  [SMALL_STATE(41)] = 1915,
  [SMALL_STATE(42)] = 1962,
  [SMALL_STATE(43)] = 2009,
  [SMALL_STATE(44)] = 2056,
  [SMALL_STATE(45)] = 2103,
  [SMALL_STATE(46)] = 2150,
  [SMALL_STATE(47)] = 2197,
  [SMALL_STATE(48)] = 2244,
  [SMALL_STATE(49)] = 2291,
  [SMALL_STATE(50)] = 2338,
  [SMALL_STATE(51)] = 2385,
  [SMALL_STATE(52)] = 2432,
  [SMALL_STATE(53)] = 2479,
  [SMALL_STATE(54)] = 2526,
  [SMALL_STATE(55)] = 2573,
  [SMALL_STATE(56)] = 2620,
  [SMALL_STATE(57)] = 2667,
  [SMALL_STATE(58)] = 2714,
  [SMALL_STATE(59)] = 2761,
  [SMALL_STATE(60)] = 2808,
  [SMALL_STATE(61)] = 2855,
  [SMALL_STATE(62)] = 2902,
  [SMALL_STATE(63)] = 2949,
  [SMALL_STATE(64)] = 2996,
  [SMALL_STATE(65)] = 3043,
  [SMALL_STATE(66)] = 3090,
  [SMALL_STATE(67)] = 3137,
  [SMALL_STATE(68)] = 3184,
  [SMALL_STATE(69)] = 3231,
  [SMALL_STATE(70)] = 3278,
  [SMALL_STATE(71)] = 3325,
  [SMALL_STATE(72)] = 3372,
  [SMALL_STATE(73)] = 3419,
  [SMALL_STATE(74)] = 3466,
  [SMALL_STATE(75)] = 3513,
  [SMALL_STATE(76)] = 3560,
  [SMALL_STATE(77)] = 3607,
  [SMALL_STATE(78)] = 3649,
  [SMALL_STATE(79)] = 3691,
  [SMALL_STATE(80)] = 3733,
  [SMALL_STATE(81)] = 3774,
  [SMALL_STATE(82)] = 3815,
  [SMALL_STATE(83)] = 3839,
  [SMALL_STATE(84)] = 3863,
  [SMALL_STATE(85)] = 3887,
  [SMALL_STATE(86)] = 3911,
  [SMALL_STATE(87)] = 3935,
  [SMALL_STATE(88)] = 3959,
  [SMALL_STATE(89)] = 3983,
  [SMALL_STATE(90)] = 4007,
  [SMALL_STATE(91)] = 4031,
  [SMALL_STATE(92)] = 4054,
  [SMALL_STATE(93)] = 4077,
  [SMALL_STATE(94)] = 4100,
  [SMALL_STATE(95)] = 4123,
  [SMALL_STATE(96)] = 4146,
  [SMALL_STATE(97)] = 4169,
  [SMALL_STATE(98)] = 4192,
  [SMALL_STATE(99)] = 4215,
  [SMALL_STATE(100)] = 4238,
  [SMALL_STATE(101)] = 4261,
  [SMALL_STATE(102)] = 4284,
  [SMALL_STATE(103)] = 4307,
  [SMALL_STATE(104)] = 4330,
  [SMALL_STATE(105)] = 4353,
  [SMALL_STATE(106)] = 4376,
  [SMALL_STATE(107)] = 4399,
  [SMALL_STATE(108)] = 4422,
  [SMALL_STATE(109)] = 4442,
  [SMALL_STATE(110)] = 4462,
  [SMALL_STATE(111)] = 4482,
  [SMALL_STATE(112)] = 4502,
  [SMALL_STATE(113)] = 4522,
  [SMALL_STATE(114)] = 4542,
  [SMALL_STATE(115)] = 4562,
  [SMALL_STATE(116)] = 4582,
  [SMALL_STATE(117)] = 4602,
  [SMALL_STATE(118)] = 4622,
  [SMALL_STATE(119)] = 4642,
  [SMALL_STATE(120)] = 4662,
  [SMALL_STATE(121)] = 4682,
  [SMALL_STATE(122)] = 4702,
  [SMALL_STATE(123)] = 4722,
  [SMALL_STATE(124)] = 4742,
  [SMALL_STATE(125)] = 4762,
  [SMALL_STATE(126)] = 4782,
  [SMALL_STATE(127)] = 4802,
  [SMALL_STATE(128)] = 4824,
  [SMALL_STATE(129)] = 4844,
  [SMALL_STATE(130)] = 4864,
  [SMALL_STATE(131)] = 4884,
  [SMALL_STATE(132)] = 4904,
  [SMALL_STATE(133)] = 4924,
  [SMALL_STATE(134)] = 4944,
  [SMALL_STATE(135)] = 4966,
  [SMALL_STATE(136)] = 4986,
  [SMALL_STATE(137)] = 5006,
  [SMALL_STATE(138)] = 5026,
  [SMALL_STATE(139)] = 5046,
  [SMALL_STATE(140)] = 5068,
  [SMALL_STATE(141)] = 5088,
  [SMALL_STATE(142)] = 5110,
  [SMALL_STATE(143)] = 5130,
  [SMALL_STATE(144)] = 5150,
  [SMALL_STATE(145)] = 5170,
  [SMALL_STATE(146)] = 5190,
  [SMALL_STATE(147)] = 5210,
  [SMALL_STATE(148)] = 5230,
  [SMALL_STATE(149)] = 5250,
  [SMALL_STATE(150)] = 5270,
  [SMALL_STATE(151)] = 5290,
  [SMALL_STATE(152)] = 5310,
  [SMALL_STATE(153)] = 5330,
  [SMALL_STATE(154)] = 5350,
  [SMALL_STATE(155)] = 5370,
  [SMALL_STATE(156)] = 5390,
  [SMALL_STATE(157)] = 5410,
  [SMALL_STATE(158)] = 5430,
  [SMALL_STATE(159)] = 5450,
  [SMALL_STATE(160)] = 5470,
  [SMALL_STATE(161)] = 5490,
  [SMALL_STATE(162)] = 5510,
  [SMALL_STATE(163)] = 5530,
  [SMALL_STATE(164)] = 5550,
  [SMALL_STATE(165)] = 5570,
  [SMALL_STATE(166)] = 5590,
  [SMALL_STATE(167)] = 5610,
  [SMALL_STATE(168)] = 5630,
  [SMALL_STATE(169)] = 5650,
  [SMALL_STATE(170)] = 5670,
  [SMALL_STATE(171)] = 5690,
  [SMALL_STATE(172)] = 5710,
  [SMALL_STATE(173)] = 5730,
  [SMALL_STATE(174)] = 5750,
  [SMALL_STATE(175)] = 5770,
  [SMALL_STATE(176)] = 5790,
  [SMALL_STATE(177)] = 5810,
  [SMALL_STATE(178)] = 5830,
  [SMALL_STATE(179)] = 5850,
  [SMALL_STATE(180)] = 5870,
  [SMALL_STATE(181)] = 5890,
  [SMALL_STATE(182)] = 5910,
  [SMALL_STATE(183)] = 5930,
  [SMALL_STATE(184)] = 5950,
  [SMALL_STATE(185)] = 5970,
  [SMALL_STATE(186)] = 5990,
  [SMALL_STATE(187)] = 6010,
  [SMALL_STATE(188)] = 6030,
  [SMALL_STATE(189)] = 6050,
  [SMALL_STATE(190)] = 6070,
  [SMALL_STATE(191)] = 6090,
  [SMALL_STATE(192)] = 6110,
  [SMALL_STATE(193)] = 6130,
  [SMALL_STATE(194)] = 6150,
  [SMALL_STATE(195)] = 6170,
  [SMALL_STATE(196)] = 6190,
  [SMALL_STATE(197)] = 6210,
  [SMALL_STATE(198)] = 6230,
  [SMALL_STATE(199)] = 6250,
  [SMALL_STATE(200)] = 6270,
  [SMALL_STATE(201)] = 6290,
  [SMALL_STATE(202)] = 6310,
  [SMALL_STATE(203)] = 6330,
  [SMALL_STATE(204)] = 6350,
  [SMALL_STATE(205)] = 6370,
  [SMALL_STATE(206)] = 6390,
  [SMALL_STATE(207)] = 6410,
  [SMALL_STATE(208)] = 6430,
  [SMALL_STATE(209)] = 6450,
  [SMALL_STATE(210)] = 6470,
  [SMALL_STATE(211)] = 6489,
  [SMALL_STATE(212)] = 6508,
  [SMALL_STATE(213)] = 6527,
  [SMALL_STATE(214)] = 6546,
  [SMALL_STATE(215)] = 6565,
  [SMALL_STATE(216)] = 6584,
  [SMALL_STATE(217)] = 6603,
  [SMALL_STATE(218)] = 6622,
  [SMALL_STATE(219)] = 6632,
  [SMALL_STATE(220)] = 6642,
  [SMALL_STATE(221)] = 6652,
  [SMALL_STATE(222)] = 6664,
  [SMALL_STATE(223)] = 6678,
  [SMALL_STATE(224)] = 6690,
  [SMALL_STATE(225)] = 6706,
  [SMALL_STATE(226)] = 6718,
  [SMALL_STATE(227)] = 6730,
  [SMALL_STATE(228)] = 6746,
  [SMALL_STATE(229)] = 6760,
  [SMALL_STATE(230)] = 6776,
  [SMALL_STATE(231)] = 6792,
  [SMALL_STATE(232)] = 6808,
  [SMALL_STATE(233)] = 6818,
  [SMALL_STATE(234)] = 6832,
  [SMALL_STATE(235)] = 6848,
  [SMALL_STATE(236)] = 6862,
  [SMALL_STATE(237)] = 6878,
  [SMALL_STATE(238)] = 6894,
  [SMALL_STATE(239)] = 6910,
  [SMALL_STATE(240)] = 6922,
  [SMALL_STATE(241)] = 6936,
  [SMALL_STATE(242)] = 6950,
  [SMALL_STATE(243)] = 6960,
  [SMALL_STATE(244)] = 6970,
  [SMALL_STATE(245)] = 6982,
  [SMALL_STATE(246)] = 6994,
  [SMALL_STATE(247)] = 7006,
  [SMALL_STATE(248)] = 7016,
  [SMALL_STATE(249)] = 7032,
  [SMALL_STATE(250)] = 7046,
  [SMALL_STATE(251)] = 7056,
  [SMALL_STATE(252)] = 7072,
  [SMALL_STATE(253)] = 7082,
  [SMALL_STATE(254)] = 7098,
  [SMALL_STATE(255)] = 7108,
  [SMALL_STATE(256)] = 7120,
  [SMALL_STATE(257)] = 7132,
  [SMALL_STATE(258)] = 7142,
  [SMALL_STATE(259)] = 7154,
  [SMALL_STATE(260)] = 7166,
  [SMALL_STATE(261)] = 7176,
  [SMALL_STATE(262)] = 7192,
  [SMALL_STATE(263)] = 7202,
  [SMALL_STATE(264)] = 7212,
  [SMALL_STATE(265)] = 7222,
  [SMALL_STATE(266)] = 7234,
  [SMALL_STATE(267)] = 7250,
  [SMALL_STATE(268)] = 7266,
  [SMALL_STATE(269)] = 7276,
  [SMALL_STATE(270)] = 7286,
  [SMALL_STATE(271)] = 7296,
  [SMALL_STATE(272)] = 7308,
  [SMALL_STATE(273)] = 7322,
  [SMALL_STATE(274)] = 7332,
  [SMALL_STATE(275)] = 7344,
  [SMALL_STATE(276)] = 7354,
  [SMALL_STATE(277)] = 7364,
  [SMALL_STATE(278)] = 7376,
  [SMALL_STATE(279)] = 7386,
  [SMALL_STATE(280)] = 7396,
  [SMALL_STATE(281)] = 7406,
  [SMALL_STATE(282)] = 7422,
  [SMALL_STATE(283)] = 7432,
  [SMALL_STATE(284)] = 7448,
  [SMALL_STATE(285)] = 7458,
  [SMALL_STATE(286)] = 7468,
  [SMALL_STATE(287)] = 7478,
  [SMALL_STATE(288)] = 7494,
  [SMALL_STATE(289)] = 7504,
  [SMALL_STATE(290)] = 7514,
  [SMALL_STATE(291)] = 7524,
  [SMALL_STATE(292)] = 7534,
  [SMALL_STATE(293)] = 7544,
  [SMALL_STATE(294)] = 7554,
  [SMALL_STATE(295)] = 7564,
  [SMALL_STATE(296)] = 7574,
  [SMALL_STATE(297)] = 7590,
  [SMALL_STATE(298)] = 7600,
  [SMALL_STATE(299)] = 7610,
  [SMALL_STATE(300)] = 7626,
  [SMALL_STATE(301)] = 7636,
  [SMALL_STATE(302)] = 7646,
  [SMALL_STATE(303)] = 7656,
  [SMALL_STATE(304)] = 7666,
  [SMALL_STATE(305)] = 7676,
  [SMALL_STATE(306)] = 7692,
  [SMALL_STATE(307)] = 7702,
  [SMALL_STATE(308)] = 7718,
  [SMALL_STATE(309)] = 7728,
  [SMALL_STATE(310)] = 7738,
  [SMALL_STATE(311)] = 7748,
  [SMALL_STATE(312)] = 7758,
  [SMALL_STATE(313)] = 7768,
  [SMALL_STATE(314)] = 7784,
  [SMALL_STATE(315)] = 7794,
  [SMALL_STATE(316)] = 7804,
  [SMALL_STATE(317)] = 7814,
  [SMALL_STATE(318)] = 7824,
  [SMALL_STATE(319)] = 7834,
  [SMALL_STATE(320)] = 7844,
  [SMALL_STATE(321)] = 7860,
  [SMALL_STATE(322)] = 7870,
  [SMALL_STATE(323)] = 7880,
  [SMALL_STATE(324)] = 7890,
  [SMALL_STATE(325)] = 7899,
  [SMALL_STATE(326)] = 7912,
  [SMALL_STATE(327)] = 7925,
  [SMALL_STATE(328)] = 7938,
  [SMALL_STATE(329)] = 7951,
  [SMALL_STATE(330)] = 7964,
  [SMALL_STATE(331)] = 7977,
  [SMALL_STATE(332)] = 7990,
  [SMALL_STATE(333)] = 8003,
  [SMALL_STATE(334)] = 8016,
  [SMALL_STATE(335)] = 8029,
  [SMALL_STATE(336)] = 8042,
  [SMALL_STATE(337)] = 8055,
  [SMALL_STATE(338)] = 8068,
  [SMALL_STATE(339)] = 8081,
  [SMALL_STATE(340)] = 8094,
  [SMALL_STATE(341)] = 8107,
  [SMALL_STATE(342)] = 8120,
  [SMALL_STATE(343)] = 8133,
  [SMALL_STATE(344)] = 8146,
  [SMALL_STATE(345)] = 8159,
  [SMALL_STATE(346)] = 8172,
  [SMALL_STATE(347)] = 8185,
  [SMALL_STATE(348)] = 8194,
  [SMALL_STATE(349)] = 8207,
  [SMALL_STATE(350)] = 8220,
  [SMALL_STATE(351)] = 8229,
  [SMALL_STATE(352)] = 8242,
  [SMALL_STATE(353)] = 8255,
  [SMALL_STATE(354)] = 8268,
  [SMALL_STATE(355)] = 8281,
  [SMALL_STATE(356)] = 8294,
  [SMALL_STATE(357)] = 8307,
  [SMALL_STATE(358)] = 8320,
  [SMALL_STATE(359)] = 8329,
  [SMALL_STATE(360)] = 8342,
  [SMALL_STATE(361)] = 8351,
  [SMALL_STATE(362)] = 8360,
  [SMALL_STATE(363)] = 8373,
  [SMALL_STATE(364)] = 8386,
  [SMALL_STATE(365)] = 8399,
  [SMALL_STATE(366)] = 8412,
  [SMALL_STATE(367)] = 8421,
  [SMALL_STATE(368)] = 8430,
  [SMALL_STATE(369)] = 8439,
  [SMALL_STATE(370)] = 8448,
  [SMALL_STATE(371)] = 8457,
  [SMALL_STATE(372)] = 8470,
  [SMALL_STATE(373)] = 8483,
  [SMALL_STATE(374)] = 8492,
  [SMALL_STATE(375)] = 8505,
  [SMALL_STATE(376)] = 8518,
  [SMALL_STATE(377)] = 8527,
  [SMALL_STATE(378)] = 8540,
  [SMALL_STATE(379)] = 8549,
  [SMALL_STATE(380)] = 8558,
  [SMALL_STATE(381)] = 8571,
  [SMALL_STATE(382)] = 8584,
  [SMALL_STATE(383)] = 8593,
  [SMALL_STATE(384)] = 8602,
  [SMALL_STATE(385)] = 8615,
  [SMALL_STATE(386)] = 8628,
  [SMALL_STATE(387)] = 8641,
  [SMALL_STATE(388)] = 8654,
  [SMALL_STATE(389)] = 8667,
  [SMALL_STATE(390)] = 8680,
  [SMALL_STATE(391)] = 8693,
  [SMALL_STATE(392)] = 8704,
  [SMALL_STATE(393)] = 8717,
  [SMALL_STATE(394)] = 8730,
  [SMALL_STATE(395)] = 8743,
  [SMALL_STATE(396)] = 8752,
  [SMALL_STATE(397)] = 8765,
  [SMALL_STATE(398)] = 8778,
  [SMALL_STATE(399)] = 8791,
  [SMALL_STATE(400)] = 8804,
  [SMALL_STATE(401)] = 8815,
  [SMALL_STATE(402)] = 8828,
  [SMALL_STATE(403)] = 8837,
  [SMALL_STATE(404)] = 8846,
  [SMALL_STATE(405)] = 8859,
  [SMALL_STATE(406)] = 8872,
  [SMALL_STATE(407)] = 8885,
  [SMALL_STATE(408)] = 8898,
  [SMALL_STATE(409)] = 8911,
  [SMALL_STATE(410)] = 8924,
  [SMALL_STATE(411)] = 8937,
  [SMALL_STATE(412)] = 8950,
  [SMALL_STATE(413)] = 8963,
  [SMALL_STATE(414)] = 8972,
  [SMALL_STATE(415)] = 8985,
  [SMALL_STATE(416)] = 8998,
  [SMALL_STATE(417)] = 9011,
  [SMALL_STATE(418)] = 9024,
  [SMALL_STATE(419)] = 9037,
  [SMALL_STATE(420)] = 9050,
  [SMALL_STATE(421)] = 9063,
  [SMALL_STATE(422)] = 9076,
  [SMALL_STATE(423)] = 9089,
  [SMALL_STATE(424)] = 9102,
  [SMALL_STATE(425)] = 9115,
  [SMALL_STATE(426)] = 9128,
  [SMALL_STATE(427)] = 9141,
  [SMALL_STATE(428)] = 9154,
  [SMALL_STATE(429)] = 9167,
  [SMALL_STATE(430)] = 9180,
  [SMALL_STATE(431)] = 9190,
  [SMALL_STATE(432)] = 9198,
  [SMALL_STATE(433)] = 9206,
  [SMALL_STATE(434)] = 9216,
  [SMALL_STATE(435)] = 9223,
  [SMALL_STATE(436)] = 9227,
  [SMALL_STATE(437)] = 9231,
  [SMALL_STATE(438)] = 9235,
  [SMALL_STATE(439)] = 9239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(438),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(336),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(438),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(81),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_paragraph, 1), SHIFT(8),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_paragraph, 1), SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(438),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(81),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 44),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eol, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eol, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 6, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 6, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 6, .production_id = 14),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 6, .production_id = 14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 16),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 16),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 47),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 47),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 6, .production_id = 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 6, .production_id = 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 6, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 6, .production_id = 13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 15),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 15),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 10, .production_id = 49),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 10, .production_id = 49),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 18),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 18),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 12),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 12),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 19),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 19),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 11),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 11),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtag, 3, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtag, 3, .production_id = 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 7, .production_id = 21),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 7, .production_id = 21),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtag, 3, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtag, 3, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 7, .production_id = 22),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 7, .production_id = 22),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 10),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 10),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 7, .production_id = 23),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 7, .production_id = 23),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 12, .production_id = 62),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 12, .production_id = 62),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 7, .production_id = 24),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 7, .production_id = 24),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 12, .production_id = 61),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 12, .production_id = 61),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 11, .production_id = 60),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 11, .production_id = 60),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 11, .production_id = 59),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 11, .production_id = 59),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3, .production_id = 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 11, .production_id = 58),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 11, .production_id = 58),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 11, .production_id = 57),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 11, .production_id = 57),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 7, .production_id = 25),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 7, .production_id = 25),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 3, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 3, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 11, .production_id = 56),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 11, .production_id = 56),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 11, .production_id = 55),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 11, .production_id = 55),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 9),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 9),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtag, 4, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtag, 4, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 7, .production_id = 26),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 7, .production_id = 26),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hashtag, 4, .production_id = 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hashtag, 4, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 10, .production_id = 54),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 10, .production_id = 54),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 10, .production_id = 53),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 10, .production_id = 53),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 10, .production_id = 52),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 10, .production_id = 52),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 7, .production_id = 27),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 7, .production_id = 27),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 5, .production_id = 8),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 5, .production_id = 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 10, .production_id = 51),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 10, .production_id = 51),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 7, .production_id = 28),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 7, .production_id = 28),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 29),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 29),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 10, .production_id = 50),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 10, .production_id = 50),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_sequence, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_sequence, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 30),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 30),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 6, .production_id = 17),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 6, .production_id = 17),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 46),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 46),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 45),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 45),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 48),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 48),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 43),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 43),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 42),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 42),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 31),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 31),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 9, .production_id = 41),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 9, .production_id = 41),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 40),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 40),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 39),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 39),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 38),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 38),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 37),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 37),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 32),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 32),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 5, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 5, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 36),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 36),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 35),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 35),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 34),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 34),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbatim_tag, 5, .production_id = 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verbatim_tag, 5, .production_id = 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_tag, 8, .production_id = 33),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_tag, 8, .production_id = 33),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat1, 2), SHIFT_REPEAT(437),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat1, 2), SHIFT_REPEAT(80),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat1, 2), SHIFT_REPEAT(247),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat1, 2), SHIFT_REPEAT(252),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2), SHIFT_REPEAT(373),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2), SHIFT_REPEAT(397),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2), SHIFT_REPEAT(77),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat3, 2), SHIFT_REPEAT(436),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat3, 2), SHIFT_REPEAT(403),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat3, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat3, 2), SHIFT_REPEAT(368),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat2, 2), SHIFT_REPEAT(439),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat2, 2), SHIFT_REPEAT(402),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat2, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat2, 2), SHIFT_REPEAT(379),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [794] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat1, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat1, 1),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nl, 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nl, 1),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [988] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat1, 2),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat1, 2), SHIFT_REPEAT(432),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat3, 1),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat3, 1),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1015] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [1021] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(431),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat2, 1),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat2, 1),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_tag_repeat3, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_tag_repeat3, 1),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [1048] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat3, 2),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [1060] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat2, 2),
  [1086] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat2, 2), SHIFT_REPEAT(430),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1, .production_id = 4),
  [1091] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1, .production_id = 4),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbatim_tag_repeat1, 1, .production_id = 1),
  [1095] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat1, 1, .production_id = 1),
  [1097] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_verbatim_tag_repeat1, 2), SHIFT_REPEAT(434),
  [1100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
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
