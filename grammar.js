const blueflower_grammar = {
  name: 'blueflower',

  externals: $ => [
    $.heading_token,
    $.section_end,

    $.list_start,
    $.list_token,
    $.list_end,

    $.tag_token,
    $.extended_tag_token,
    $.hashtag_token,
    $.tag_parameter,
    $.end_tag,

    $.blank_line,
    $.soft_break,
    $.hard_break,

    $.eof,
    $.error
  ],

  conflicts: $ => [
    [$.section_content],
    [$.paragraph],
    [$.inline_tag, $.verbatim_tag],
    [$.list],
    [$._hashtag_plus_blank_line],
    [$._hashtag_plus_blank_line, $.list],
    [$._hashtag_plus_blank_line, $.verbatim_tag],
    [$._hashtag_plus_blank_line, $.tag_with_syntax],
  ],

  inline: $ => [
    $.word,
    $.eol,
  ],

  // https://github.com/tree-sitter/tree-sitter/pull/939
  precedences: _ => [
    ['special', 'immediate', 'non-immediate'],
  ],

  rules: {

    document: $ => content($, [
      $.section,
      $._hashtag_plus_blank_line,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $.list_block,
      $.comment,
      // $.blank_line,
      $.hard_break,
    ]),

    paragraph: $ => repeat1(choice(
      $.escaped_sequence,
      $.word,
      $.inline_tag,
      // $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
      // $.link, $.link_reference, $.short_link_reference,
      // $.new_line,
    )),

    escaped_sequence: $ => seq(
      alias('\\', $.token),
      choice(
        alias(token.immediate(/\S+/), $.raw_word),
        alias(/\s/, $.space)
      )
    ),

    // immediate_escaped_sequence: $ => seq(
    //   alias(
    //     token.immediate(prec('special', '\\')),
    //     $.token),
    //   alias(
    //     token.immediate(/\S+/),
    //     $.raw_word)
    // ),

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

      // Any except:
      //    `[`, `(`, `{`, white space
      alias(token.immediate(/[^\[({\s]+/), $.tag_name),

      alias(
        repeat(expression($, 'non-immediate', token)),
        $.content),
      $.eol
    ),

    _hashtag_plus_blank_line: $ => seq(
      repeat1($.hashtag),
      optional($.blank_line)
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
          optional($._inline_tag_patameters)
        ),
        seq(
          optional($._inline_tag_label),
          $._inline_tag_content,
          optional($._inline_tag_patameters)
        ),
        seq(
          optional($._inline_tag_label),
          optional($._inline_tag_content),
          $._inline_tag_patameters
        )
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
        repeat(choice(
          alias($.verbatim_tag, $.tag),
          alias($.tag_with_syntax, $.tag),
          seq( repeat($.raw_word), $.new_line),
        )),
        $.content),
      $.end_tag,
      choice($.comment, $.eol, $.blank_line)
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

      optional(
        alias($.tag_content, $.content)),
      $.end_tag,
      choice($.comment, $.eol)
    ),

    // Content move into separate node, make it appears in a tree as one node,
    // not a sequence of "$.content" nodes.
    tag_content: $ => content($, [
      $._hashtag_plus_blank_line,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $.list_block,
      $.comment,
      // $.blank_line
    ]),

    new_line: _ => choice('\n\r', '\n', '\r'),
    eol: $ => choice($.new_line, $.eof),

    word: $ => expression($, 'non-immediate', token, '@#['),
    // word: $ => /[^\s@#\[]+/,

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

const sections = {
  section: $ => seq(
    $.heading,
    // optional(prec.dynamic(2, $.blank_line)),
    optional(prec(1, $.blank_line)),
    optional(alias($.section_content, $.content)),
    choice($.section_end, $.eof),
    (optional($.soft_break))
  ),

  section_content: $ => content($, [
    $._hashtag_plus_blank_line,
    alias($.verbatim_tag, $.tag),
    alias($.tag_with_syntax, $.tag),
    $.list_block,
    $.comment,
    // $.blank_line
    $.section
  ]),

  heading: $ => seq(
    field("level", alias($.heading_token, $.token)),
    $.title,
  ),

  title: $ => seq(
    repeat1(choice(
      $.escaped_sequence,
      $.word,
      $.inline_tag,
      // $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
      // $.link, $.link_reference, $.short_link_reference,
      // prec.dynamic(2, $.new_line),
      prec(1, $.new_line),
    )),
    $.eol,
  ),
}

const lists = {
  list_block: $ => seq(
    $.list,
    alias($.soft_break, $.list_break)
  ),

  list: $ => seq(
    alias(repeat($.hashtag), $.directives),
    $.list_start,
    repeat1($.list_item),
    optional($.list_end),
  ),

  list_item: $ => seq(
    field("level", alias($.list_token, $.token)),
    optional($.checkbox),
    content($, [
      $._hashtag_plus_blank_line,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $.comment,
      // $.blank_line
    ]),
    optional($.list)
  ),

  checkbox: _ => token(seq(
    '[',
    token.immediate( choice(' ', /\S/) ),
    token.immediate(']'),
  )),
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
                               $.symbol)),
    alias(tfunc(prec(pr, /\p{L}+/)), $.word),
    alias(tfunc(prec(pr, /\p{N}+/)), $.number),
    alias(tfunc(prec(pr, /[^\p{Z}\p{L}\p{N}\t\n\r]/)), $.symbol),
  )
}

function content($, elements) {
  return choice(
    $.paragraph,
    seq(
      repeat1(choice(
        seq(
          $.paragraph,
          choice($.blank_line, $.eof)
        ),
        ...elements,
        seq(
          $.paragraph,
          // optional($.blank_line),
          choice(...elements)
        ),
      )),
      optional($.paragraph)
    )
  );
}

// Object.assign(skald_grammar.rules, sections, lists, markup)
Object.assign(blueflower_grammar.rules, sections, lists)

module.exports = grammar(blueflower_grammar)

// vim: ts=2 sts=2 sw=2
