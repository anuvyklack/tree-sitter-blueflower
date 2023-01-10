const blueflower_grammar = {
  name: 'blueflower',

  externals: $ => [
    $.bold_open,
    $.italic_open,
    $.strikethrough_open,
    $.underline_open,
    $.verbatim_open,
    $.inline_math_open,

    $.bold_close,
    $.italic_close,
    $.strikethrough_close,
    $.underline_close,
    $.verbatim_close,
    $.inline_math_close,

    $._paragraph_end,

    $.heading_token,
    $.section_end,

    $.definition_term_begin,
    $.definition_term_end,
    $.definition_end,

    $._list_start,
    $.list_token,
    $._list_end,

    $._tag_begin,
    $.hashtag_token,

    $.code_block_token,

    $.blank_line,
    $.soft_break,
    $.hard_break,

    // We need to parse newline char as a separate node, because it
    // triggers the external scanner at the begging of the next line (column 0)
    // but not at the first non-blank character, as parser do without this rule.
    //
    // We need to parse newlines ourself, because this rule:
    // ```
    //    _new_line: $ => choice('\r\n', '\r', '\n')
    // ```
    // returns two new line chars in a row as one "$._new_line" node, and
    // we miss all "$.blank_line" nodes, which we need, to separate paragraphs.
    $._new_line,
    $._eof, // end of the file

    $.error,
  ],

  conflicts: $ => [
    [$.section],
    [$._paragraph_content],
    [$.tag_content],
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
    document: $ => seq(
      repeat(choice(
        $.paragraph,
        $._paragraph_and_reference_link_definition,
        $.reference_link_definition,
        $.section,
        $.definition,
        $.hashtag,
        $.code_block,
        alias($.verbatim_tag, $.tag),
        alias($.tag_with_syntax, $.tag),
        $.list_block,
        $.comment,
        $.blank_line,
        $.hard_break,
      )),
      optional($._eof)
    ),

    paragraph: $ => seq(
      $._paragraph_content,
      choice($._paragraph_end, $._eof)
    ),

    _paragraph_and_reference_link_definition: $ => seq(
      alias($._paragraph_content, $.paragraph),
      $._new_line,
      $.reference_link_definition
    ),

    _paragraph_content: $ => seq(
      $._general_text,
      repeat(choice(
        $._general_text,
        $._new_line
      )),
    ),

    _general_text: $ => choice(
      $.escaped_char,
      $.word,
      $.inline_tag,
      $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
      $.link, $.raw_link, $.reference_link, $.short_reference_link,
    ),

    escaped_char: $ => seq(
      alias('\\', $.token),
      token.immediate(/./, $.character)
    ),

    definition: $ => seq(
      field('term_open', alias($.definition_term_begin, $.token)),
      alias($.paragraph, $.term),
      field('term_close', alias($.definition_term_end, $.token)),

      repeat(seq(
          $._new_line,
          field('term_open', alias($.definition_term_begin, $.token)),
          alias($.paragraph, $.term),
          field('term_close', alias($.definition_term_end, $.token)),
      )),

      // repeat(seq(
      //   optional(alias($.general_text, $.description)),
      //   field('term_open', alias($.definition_term_begin, $.token)),
      //   alias($.general_text, $.term),
      //   field('term_close', alias($.definition_term_end, $.token)),
      // )),

      optional($._new_line),
      $.description,
      field('description_end', alias($.definition_end, $.token)),
      $.eol
    ),

    description: $ => repeat1(choice(
      $.paragraph,
      $._paragraph_and_reference_link_definition,
      $.reference_link_definition,
      $.hashtag,
      $.code_block,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $.list_block,
      $.comment,
      $.blank_line,
    )),

    comment: $ => seq(
      '#',
      optional(seq(
        $._whitespace,
        repeat(alias($.raw_word, "word"))
      )),
      $.eol,
    ),

    // _new_line: _ => choice('\n\r', '\n', '\r'),
    // _new_line: _ => /\n|\r\n?/,
    eol: $ => choice($._new_line, $._eof),

    word: $ => seq(
      expression($, 'non-immediate', token, '@[<' + '*/+_`$'),
      optional(expression($, 'immediate', token.immediate, '*/+_`$')),
    ),

    // word: $ => /[^\s@\[]+/,

    raw_word: _ => /\S+/,

    _whitespace: $ => /[ \t]+/,

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
    // optional(prec(1, $.blank_line)),
    optional(alias($.section_content, $.content)),
    choice($.section_end, $._eof),
    optional(seq(
      (optional($.soft_break)),
      $.eol
    ))
  ),

  section_content: $ => repeat1(choice(
    $.section,
    $.paragraph,
    $._paragraph_and_reference_link_definition,
    $.reference_link_definition,
    $.definition,
    $.list_block,
    $.comment,
    $.hashtag,
    $.code_block,
    alias($.verbatim_tag, $.tag),
    alias($.tag_with_syntax, $.tag),
    $.blank_line,
  )),

  heading: $ => seq(
    field("level", alias($.heading_token, $.token)),
    alias($.paragraph, $.title),
  ),
}

const markup = {
  bold: $ => gen_markup($, "bold",
    [$.italic, $.underline, $.strikethrough, $.verbatim, $.inline_math]),

  italic: $ => gen_markup($, "italic",
    [$.bold, $.underline, $.strikethrough, $.verbatim, $.inline_math]),

  underline: $ => gen_markup($, "underline",
    [$.bold, $.italic, $.strikethrough, $.verbatim, $.inline_math]),

  strikethrough: $ => gen_markup($, "strikethrough",
    [$.bold, $.italic, $.underline, $.verbatim, $.inline_math]),

  verbatim: $ => prec.right(seq(
    field("open", alias($.verbatim_open, $.token)),
    alias(
      repeat1(/[^`\s]/),
      $.content),
    field("close", alias($.verbatim_close, $.token)),
  )),

  inline_math: $ => prec.right(seq(
    field("open", alias($.inline_math_open, $.token)),
    alias(
      repeat1(/[^$\s]/),
      $.content),
    field("close", alias($.inline_math_close, $.token)),
  )),
}

const lists = {
  list_block: $ => seq(
    $.list,
    seq(alias($.soft_break, $.list_break), $.eol),
  ),

  list: $ => seq(
    $._list_start,
    repeat1($.list_item),
    $._list_end,
  ),

  list_item: $ => seq(
    field("level", alias($.list_token, $.token)),
    optional($.checkbox),
    repeat(choice(
      $.paragraph,
      $._paragraph_and_reference_link_definition,
      $.reference_link_definition,

      $.definition,
      $.hashtag,
      $.code_block,
      alias($.verbatim_tag, $.tag),
      alias($.tag_with_syntax, $.tag),
      $.comment,
      $.blank_line
    )),
    optional($.list)
  ),

  checkbox: _ => token(seq(
    '[',
    token.immediate( choice(' ', /\S/) ),
    token.immediate(']'),
  )),
}

const links = {
  link_label: $ => repeat1(choice(
    expression($, 'non-immediate', token, '@[]<>' + '*/+_`$'),
    $.escaped_char,
    $.inline_tag,
    $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
    $._new_line
  )),

  reference_link_definition: $ => prec.dynamic(1, seq(
    alias('[', $.token),
    alias($.link_label, $.reference),
    alias(']:', $.token),
    $._whitespace,

    alias(repeat($.raw_word), $.link),
    $.eol
  )),

  short_reference_link: $ => seq(
    field('open_reference', alias('[', $.token)),
    alias($.link_label, $.reference),
    field('close_reference', alias(']', $.token)),
  ),

  reference_link: $ => seq(
    field('open_label', alias('[', $.token)),
    optional(alias($.link_label, $.label)),
    field('close_label', alias(']', $.token)),

    field('open_reference', alias(token.immediate('['), $.token)),
    optional(alias($.link_label, $.reference)),
    field('close_reference', alias(']', $.token)),
  ),

  link: $ => seq(
    field('open_label', alias('[', $.token)),
    optional(alias($.link_label, $.label)),
    field('close_label', alias(']', $.token)),

    field('open_target', alias(token.immediate('('), $.token)),
    alias(token.immediate(/[^\(\)\s\\]+/), $.target),
    field('close_target', alias(')', $.token))
  ),

  raw_link: _ => seq(
    '<',
    token.immediate(/[^>\s]+/),
    token.immediate('>'),
  )
}

const tags = {
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

  inline_tag: $ => seq(
    alias('@', $.token),
    field('name',
          alias(
            repeat1(expression($, 'immediate', token.immediate, '[({' )),
            $.tag_name)),

    choice(
      seq(
        $._inline_tag_label,
        optional($._inline_tag_content),
        optional($._inline_tag_parameters)
      ),
      seq(
        optional($._inline_tag_label),
        $._inline_tag_content,
        optional($._inline_tag_parameters)
      ),
      seq(
        optional($._inline_tag_label),
        optional($._inline_tag_content),
        $._inline_tag_parameters
      )
    )
  ),

  _inline_tag_label: $ => choice(
    seq(
      field('open_label', alias(token.immediate('['), $.token)),
      alias($.link_label, $.label),
      field('close_label', alias(']', $.token)),
    ),
    '[]'
  ),

  _inline_tag_content: $ => seq(
    field('open_content',
          alias(
            token.immediate(prec('immediate', '(')),
            // token.immediate('('),
            $.token)),
    alias(
      repeat( choice(
        $.escaped_char,
        alias(/[^\(\)\s\\]+/, $.raw_word),
        // expression($, 'non-immediate', token, '()\\'),
        $._new_line
      )),
      $.content),
    field('close_content',
          alias(
            prec('non-immediate', ')'),
            $.token))
  ),

  _inline_tag_parameters: $ => seq(
    field('open_parameters',
          alias(
            token.immediate(prec('immediate', '{')),
            $.token)),
    alias(
      repeat(choice(
        $.escaped_char,
        alias(/[^\{\}\s\\]+/, $.raw_word),
        // expression($, 'non-immediate', token, '{}\\'),
        $._new_line
      )),
      $.parameters),
    field('close_parameters',
          alias('}', $.token))
  ),

  // The content of this tag tree-sitter parser will skip.
  verbatim_tag: $ => seq(
    $._tag_begin,
    alias('@', $.token),
    field('name',
          alias(
            repeat1(expression($, 'immediate', token.immediate)),
            $.tag_name)),

    optional(seq(
      $._whitespace,
      field('parameter',
            repeat(alias($.raw_word, $.tag_parameter))),
    )),
    $._new_line,

    alias(
      repeat(choice(
        $.code_block,
        alias($.verbatim_tag, $.tag),
        alias($.tag_with_syntax, $.tag),

        alias(/\S+/, $.raw_word),
        $._new_line,
        $.blank_line,
      )),
      $.content),

    $.end_tag,
    choice($.comment, $.eol)
  ),

  // The content of this tag will be parsed by this parser.
  tag_with_syntax: $ => seq(
    $._tag_begin,
    alias('@+', $.token),
    field('name',
          alias(
            repeat1(expression($, 'immediate', token.immediate)),
            $.tag_name)),

    optional(seq(
      $._whitespace,
      field('parameter',
            repeat(alias($.raw_word, $.tag_parameter))),
    )),
    $._new_line,

    optional(
      alias($.tag_content, $.content)),

    $.end_tag,
    choice($.comment, $.eol)
  ),

  code_block: $ => seq(
    $.code_block_token,
    field('parameter',
          repeat(alias($.raw_word, $.tag_parameter))),
    $._new_line,

    alias(
      repeat(choice(
        alias(/\S+/, $.raw_word),
        $._tag_begin,
        $._new_line,
        $.blank_line,
      )),
      $.content),

    $.code_block_token,
    $.eol
  ),

  // Content move into separate node, make it appears in a tree as one node,
  // not a sequence of "$.content" nodes.
  tag_content: $ => content($, [
    $.paragraph,
    $._paragraph_and_reference_link_definition,
    $.reference_link_definition,
    $.definition,
    $.hashtag,
    $.code_block,
    alias($.verbatim_tag, $.tag),
    alias($.tag_with_syntax, $.tag),
    $.list_block,
    $.comment,
    $.blank_line,
  ]),

  end_tag: $ => seq($._tag_begin, '@end'),
}

function gen_markup($, kind, other_kinds) {
  return prec.right(seq(
    field("open", alias($[kind + "_open"],
                        $.token)),
    alias(
      repeat1(choice(
        $.word,
        $.escaped_char,
        $.inline_tag,
        $.link, $.raw_link, $.reference_link, $.short_reference_link,
        ...other_kinds
      )),
      $.content),

    field("close", alias($[kind + "_close"],
                         $.token))
  ));
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
          choice($.blank_line, $._eof)
        ),
        ...elements,
        seq(
          $.paragraph,
          optional($.blank_line),
          choice(...elements)
        ),
      )),
      optional($.paragraph)
    )
  );
}

Object.assign(blueflower_grammar.rules, sections, lists, tags, links, markup)

module.exports = grammar(blueflower_grammar)

// vim: ts=2 sts=2 sw=2
