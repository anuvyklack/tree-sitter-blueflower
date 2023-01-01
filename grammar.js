const MAX_HEADING = 6
const MAX_LIST_LEVEL = 10

const blueflower_grammar = {
  name: 'blueflower',

  externals: $ => [
    $.heading_1_token,
    $.heading_2_token,
    $.heading_3_token,
    $.heading_4_token,
    $.heading_5_token,
    $.heading_6_token,

    $.list_1_token,
    $.list_2_token,
    $.list_3_token,
    $.list_4_token,
    $.list_5_token,
    $.list_6_token,
    $.list_7_token,
    $.list_8_token,
    $.list_9_token,
    $.list_10_token,

    $.tag_token,
    $.extended_tag_token,
    $.hashtag_token,
    $.tag_parameter,
    $.end_tag,

    $.blank_line,
    $.soft_break,
    $.hard_break,

    $._, // none
  ],

  conflicts: $ => [
    [$.paragraph],
    [$.inline_tag, $.verbatim_tag],
    [$.directives, $._hashtag_plus_newline],
  ],

  inline: $ => [
    $.section,
    $.word
  ],

  // https://github.com/tree-sitter/tree-sitter/pull/939
  precedences: _ => [
    ['special', 'immediate', 'non-immediate'],
  ],

  rules: {
    document: $ => repeat1(choice(
      // alias($.section, $.section),
      $._hashtag_plus_newline,
      $.paragraph,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $.blank_line,
      $.hard_break,
      $.comment,
      $.list
    )),

    directives: $ => repeat1(seq($.hashtag, $.new_line)),

    paragraph: $ => seq(
      optional($.directives),
      repeat1(choice(
        $.escaped_sequence,
        $.word,
        $.inline_tag,
        // $.new_line,
        // $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
        // $.link, $.link_reference, $.short_link_reference,
      )),
    ),

    escaped_sequence: $ => seq(
      alias(
        prec('special', '\\'),
        $.token),
      alias(
        token.immediate(/\S+/),
        $.raw_word)
    ),

    // immediate_escaped_sequence: $ => seq(
    //   alias(
    //     token.immediate(prec('special', '\\')),
    //     $.token),
    //   alias(
    //     token.immediate(/\S+/),
    //     $.raw_word)
    // ),

    list: $ => seq(
      alias(repeat($.hashtag), $.directives),

      choice(
        repeat1( alias($.item_1, $.item)),
        // repeat1( alias($.ordered_item_1, $.item))
      ),
      alias($.soft_break, $.list_break)
    ),

    comment: $ => seq(
      '#',
      optional(seq(
        ' ',
        repeat(alias($.raw_word, "word"))
      )),
      $.new_line,
    ),

    hashtag: $ => seq(
      alias($.hashtag_token, $.token),

      // // Any except:
      // //    `[`, `(`, `{`, white space
      // alias(token.immediate(/[^\[({\s]+/), $.tag_name),

      field('name', alias($.raw_word, $.tag_name)),
      field('parameter',
            repeat(
              alias($.raw_word, $.tag_parameter))),
    ),

    _hashtag_plus_newline: $ => seq(
      $.hashtag,
      choice($.blank_line, $.new_line)
    ),

    inline_tag: $ => seq(
      alias(
        choice($.tag_token, '@', ':'),
        $.token),
      field('name',
            alias(
              repeat1(expression($, 'immediate', token.immediate, '[({')),
              $.tag_name)),

      choice(
        seq(
          $._inline_tag_label,
          optional($._inline_tag_content),
          optional($._inline_tag_patameters)),
        seq(
          optional($._inline_tag_label),
          $._inline_tag_content,
          optional($._inline_tag_patameters)),
        seq(
          optional($._inline_tag_label),
          optional($._inline_tag_content),
          $._inline_tag_patameters)
      )
    ),

    _inline_tag_label: $ => seq(
      field('open_label',
            alias(
              token.immediate(prec('immediate', '[')),
              $.token)),
      alias(
        repeat(choice(
          $.escaped_sequence,
          alias(/[^\[\]\s\\]+/, $.word),
          // expression($, 'non-immediate', token, '[]\\'),
          $.inline_tag,
          $.new_line
        )),
        $.label),
      field('close_label',
            alias(
              token.immediate(prec('immediate', ']')),
              $.token)),
    ),

    _inline_tag_content: $ => seq(
      field('open_content',
            alias(
              token.immediate(prec('immediate', '(')),
              $.token)),
      alias(
        repeat( choice(
          $.escaped_sequence,
          alias(/[^\(\)\s\\]+/, $.raw_word),
          // expression($, 'non-immediate', token, '()\\'),
          $.new_line
        )),
        $.content),
      field('close_content',
            alias(
              prec('non-immediate', ')'),
              $.token))
    ),

    _inline_tag_patameters: $ => seq(
      field('open_parameters',
            alias(
              token.immediate(prec('immediate', '{')),
              $.token)),
      alias(
        repeat(choice(
          $.escaped_sequence,
          alias(/[^\{\}\s\\]+/, $.raw_word),
          // expression($, 'non-immediate', token, '{}\\'),
          $.new_line
        )),
        $.parameters),
      field('close_parameters',
            alias('}', $.token))
    ),

    // The content of this tag tree-sitter parser will skip.
    verbatim_tag: $ => seq(
      alias(repeat($.hashtag), $.directives),

      alias($.tag_token, $.token),
      field('name',
            alias(
              repeat1(expression($, 'immediate', token.immediate)),
              $.tag_name)),

      repeat(seq(
        token.immediate(' '),
        field('parameter',
              repeat(
                alias($.raw_word, $.tag_parameter))),
      )),
      $.new_line,

      alias(
        repeat( choice(
          alias($.verbatim_tag, $.tag),
          alias($.tag_with_syntax, $.tag),
          seq( repeat($.raw_word), $.new_line)
        )),
        $.content),
      $.end_tag,
      choice($.comment, $.new_line)
    ),

    // The content of this tag will be parsed by this parser.
    tag_with_syntax: $ => seq(
      alias(repeat($.hashtag), $.directives),

      alias($.extended_tag_token, $.token),
      field('name',
            alias(
              repeat1(expression($, 'immediate', token.immediate)),
              $.tag_name)),

      repeat(seq(
        token.immediate(' '),
        field('parameter',
              repeat(
                alias($.raw_word, $.tag_parameter))),
      )),
      $.new_line,

      alias(
        repeat(choice(
          alias($.verbatim_tag, $.tag),
          alias($.tag_with_syntax, $.tag),
          $._hashtag_plus_newline,
          $.paragraph,
          $.list,
          $.comment,
          $.blank_line,
        )),
        $.content),

      $.end_tag,
      choice($.comment, $.new_line)
    ),

    new_line: _ => choice('\n\r', '\n', '\r'),

    word: $ => expression($, 'non-immediate', token, '@#['),

    raw_word: _ => /\S+/,
    // raw_word: _ => seq(
    //   expression('non-immediate', token),
    //   repeat(expression('immediate', token.immediate))
    // ),

    // // - Alphabetic (Alpha) – letters,
    // // - Mark (M) – для акцентов,
    // // - Decimal_Number (Nd) – для цифр,
    // // - Connector_Punctuation (Pc) – для символа подчёркивания '_' и подобных ему,
    // // - Join_Control (Join_C) – два специальных кода 200c и 200d, используемые
    // //   в лигатурах, например, арабских.
    // word: _ => /[\p{Alpha}\p{M}\p{Nd}\p{Pc}\p{Join_C}]+/
  }
}

const lists = {
  checkbox: _ => token(
    seq(
      '[',
      token.immediate( choice(' ', /\S/) ),
      token.immediate(']'),
  )),

  item_1:  $ => gen_list_item($, 1),
  item_2:  $ => gen_list_item($, 2),
  item_3:  $ => gen_list_item($, 3),
  item_4:  $ => gen_list_item($, 4),
  item_5:  $ => gen_list_item($, 5),
  item_6:  $ => gen_list_item($, 6),
  item_7:  $ => gen_list_item($, 7),
  item_8:  $ => gen_list_item($, 8),
  item_9:  $ => gen_list_item($, 9),
  item_10: $ => gen_list_item($, 10),

  // ordered_item_1:  $ => gen_list_item($, 1,  true),
  // ordered_item_2:  $ => gen_list_item($, 2,  true),
  // ordered_item_3:  $ => gen_list_item($, 3,  true),
  // ordered_item_4:  $ => gen_list_item($, 4,  true),
  // ordered_item_5:  $ => gen_list_item($, 5,  true),
  // ordered_item_6:  $ => gen_list_item($, 6,  true),
  // ordered_item_7:  $ => gen_list_item($, 7,  true),
  // ordered_item_8:  $ => gen_list_item($, 8,  true),
  // ordered_item_9:  $ => gen_list_item($, 9,  true),
  // ordered_item_10: $ => gen_list_item($, 10, true),
}
 
function gen_list_item($, level, ordered = false) {
  let token = []
  token[0] = field("level",
    alias(
      $["list_" + level + "_token"],
      $["token" + level]))

  // if (ordered)
  //   token[1] = alias($.ordered_list_label, $.label)

  let next_level_list = ''
  if (level < MAX_LIST_LEVEL) {
    next_level_list = optional(
      alias(
        // choice(
          repeat1(
            alias($["item_" + (level + 1)],
                  $.item)),
          // repeat1(
          //   alias($["ordered_item_" + (level + 1)],
          //         $.item))),
        $.list)
    )
  }

  return seq(
    ...token,
    optional($.checkbox),
    repeat1( choice(
      // $.markdown_code_block,
      // alias($.verbatim_tag, $.tag),
      // $.tag,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $._hashtag_plus_newline,
      $.paragraph,
      $.blank_line,
      $.comment,
    )),
    next_level_list,
  );
}

/**
 * @param {string} pr Precedence value
 * @param {Function} tfunc Token function: `token` or `token.immediate`.
 */
function expression($, pr, tfunc, skip = '') {
  const asciiSymbols = [ '!', '"', '#', '$', '%', '&', "'", '(', ')', '*',
    '+', ',', '-', '.', '/',  ':', ';', '<', '=', '>', '?', '@', '[', ']',
    '\\', '^', '_', '`', '{', '|', '}', '~' ]

  skip = skip.split("")
  return choice(
    ...asciiSymbols.filter(c => !skip.includes(c))
                   .map(c => alias(
                               tfunc(prec(pr, c)),
                               $.ascii_symbol)),
    alias(tfunc(prec(pr, /\p{L}+/)), $.string),
    alias(tfunc(prec(pr, /\p{N}+/)), $.number),
    alias(tfunc(prec(pr, /[^\p{Z}\p{L}\p{N}\t\n\r]/)), $.symbol),
  )
}

// Object.assign(skald_grammar.rules, sections, lists, markup)
Object.assign(blueflower_grammar.rules, lists)

module.exports = grammar(blueflower_grammar)

// vim: ts=2 sts=2 sw=2
