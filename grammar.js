const MAX_HEADING = 6
const MAX_LIST_LEVEL = 10

const asciiSymbols = [ '!', '"', '#', '$', '%', '&', "'", '(', ')', '*',
  '+', ',', '-', '.', '/',  ':', ';', '<', '=', '>', '?', '@', '[', ']',
  '\\', '^', '_', '`', '{', '|', '}', '~' ]

const blueflower_grammar = {
  name: 'blueflower',

  externals: $ => [
    $.heading_1_token,
    $.heading_2_token,
    $.heading_3_token,
    $.heading_4_token,
    $.heading_5_token,
    $.heading_6_token,

    $.hashtag_token,
    $.tag_token,
    $.tag_parameter,
    $.end_tag,
    $.tag_label_open,

    // $.blank_line,
    $.soft_break,
    $.hard_break,

    $._eof, // none
  ],

  conflicts: $ => [
    [$.paragraph],
    [$.inline_tag, $.verbatim_tag]
  ],

  inline: $ => [
    // $.nl,
    $.eol,
    $.section,
    $.word
  ],

  // https://github.com/tree-sitter/tree-sitter/pull/939
  precedences: _ => [
    // ['document_directive', 'body_directive'],
    ['special', 'immediate', 'non-immediate'],
  ],

  rules: {
    document: $ => repeat1(choice(
      // alias($.section, $.section),
      $.paragraph,
      $.verbatim_tag,
      // $.blank_line,
      $.hard_break,
      $.hashtag,
      // alias($.verbatim_tag, $.tag),
      $.comment,
    )),

    paragraph: $ => seq(
      repeat1(choice(
        $.escaped_sequence,
        $.word,
        $.inline_tag,
        $.eol,
        // $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
        // $.link, $.link_reference, $.short_link_reference,
      )),
      optional($.eol)
    ),

    escaped_sequence: $ => seq(
      alias(
        prec('special', '\\'),
        $.token),
      alias(
        token.immediate(/\S+/),
        $.raw_word)
    ),

    immediate_escaped_sequence: $ => seq(
      alias(
        token.immediate(prec('special', '\\')),
        $.token),
      alias(
        token.immediate(/\S+/),
        $.raw_word)
    ),

    comment: $ => seq(
      '#',
      optional(seq(
        ' ',
        repeat(alias($.raw_word, "word"))
      )),
      $.eol,
    ),

    inline_tag: $ => seq(
      alias(
        choice($.tag_token, '@', ':'),
        $.token),
      field('name',
            alias(
              expression($, 'immediate', token.immediate, '['),
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
      ),

      choice(' ', $.eol)
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
          $.nl
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
          $.nl
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
          $.nl
        )),
        $.parameters),
      field('close_parameters',
            alias('}', $.token))
    ),

    verbatim_tag: $ => seq(
      alias($.tag_token, $.token),
      field('name',
            alias(
              expression($, 'immediate', token.immediate),
              $.tag_name)),

      optional( seq(
        ' ',
        field('parameter',
              repeat(
                alias($.raw_word, $.tag_parameter))),
      )),
      $.nl,
      alias(
        repeat( choice(
          $.verbatim_tag,
          seq( repeat($.raw_word), $.nl)
        )),
        $.content),
      $.end_tag,
      choice($.comment, $.eol)
    ),

    hashtag: $ => seq(
      alias($.hashtag_token, $.token),

      // // Any except:
      // //    `[`, `(`, `{`, white space
      // alias(token.immediate(/[^\[({\s]+/), $.tag_name),

      field('name',
            alias(
              expression($, 'immediate', token.immediate),
              $.tag_name)),
      field('parameter',
            repeat(
              alias($.raw_word, $.tag_parameter))),
      $.eol
    ),

    // blank_line: $ => seq($.nl, $.eol),

    // The first symbol could not be any of:
    //    white space, `\`
    // word: _ => /[^\s\\]\S*/,
    // word: _ => choice(/\p{L}+/, /\p{N}+/),

    // nl: _ => choice('\n', '\r'),
    // eol: $ => choice('\n', '\r', $._eof),
    nl: _ => /\r?\n/,
    eol: $ => choice($.nl, $._eof),

    word: $ => expression($, 'non-immediate', token, '@#'),

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

/**
 * @param {string} pr Precedence value
 * @param {Function} tfunc Token function: `token` or `token.immediate`.
 */
function expression($, pr, tfunc, skip = '') {
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
// Object.assign(blueflower_grammar.rules, sections)

module.exports = grammar(blueflower_grammar)

// vim: ts=2 sts=2 sw=2
