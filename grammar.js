/// tree-sitter generate && tree-sitter parse -d test-file
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
    $._section_end,

    // $.description_begin,
    $.description_end,
    // $.definition_end,

    $._list_start,
    $.list_token,
    $._list_end,

    $._tag_begin,
    $.hashtag_token,

    $.code_block_token,

    $._directive_begin,

    // $.link_marker,

    $.escape_token,
    $.escaped_character,

    $.force_new_line,

    $.blank_line,
    $.soft_break,
    $.dinkus,
    $.hard_break,

    // We need to parse newline char as a separate node, because it
    // triggers the external scanner at the begging of the next line (column 0)
    // but not at the first non-blank character, as parser do without this rule.
    //
    // We need to parse newlines ourself, because the rule:
    // ```
    //    new_line: $ => choice('\r\n', '\r', '\n')
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
        $.link_definition,
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
        $._new_line
      )),
      optional($._eof)
    ),

    comment: $ => seq(
      '#',
      optional(seq(
        $._whitespace,
        repeat(alias($.raw_word, "word"))
      )),
      $.eol,
    ),

    escaped_char: $ => seq(
      alias($.escape_token, $.token),
      choice(
        alias($.escaped_character, $.character),
        alias($._new_line, $.new_line)
      )
    ),

    directive: $ => seq(
      $._directive_begin,
      alias(':', $.token),
      field('name', alias(token.immediate(/[^:\[({\s]+/), $.name)),
      alias(token.immediate(':'), $.token),
      $._whitespace,

      field('content',
        alias(
          repeat(expression($, 'non-immediate', token)),
          $.content)),
      $.eol
    ),

    // // - Alphabetic (Alpha) – letters,
    // // - Mark (M) – для акцентов,
    // // - Decimal_Number (Nd) – для цифр,
    // // - Connector_Punctuation (Pc) – для символа подчёркивания '_' и подобных ему,
    // // - Join_Control (Join_C) – два специальных кода 200c и 200d, используемые
    // //   в лигатурах, например, арабских.
    // word: _ => /[\p{Alpha}\p{M}\p{Nd}\p{Pc}\p{Join_C}]+/

    // word: $ => /[^@\[\s]+/,
    word: $ => expression($, 'non-immediate', token, '@[<' + '*/+_`$'),

    raw_word: _ => /\S+/,

    _whitespace: _ => /[ \t]+/,

    eol: $ => choice($._new_line, $._eof),
  }
}

const sections = {
  section: $ => seq(
    $.heading,
    field('directive', repeat(prec(3, $.directive))),
    optional(alias($.section_content, $.content)),
    choice(
      seq($.dinkus, $.eol),
      $._section_end,
      $._eof
    )
  ),

  heading: $ => seq(
    field("level", alias($.heading_token, $.token)),
    field("title", alias($.paragraph, $.title)),
  ),

  section_content: $ => repeat1(choice(
    $.section,
    $.paragraph,
    $.link_definition,
    $.definition,
    $.list_block,
    $.comment,
    $.hashtag,
    $.code_block,
    alias($.verbatim_tag, $.tag),
    alias($.tag_with_syntax, $.tag),
    $.blank_line,
  )),
}

const paragraph = {
    paragraph: $ => seq(
      $._paragraph_content,
      choice($._paragraph_end, $._eof)
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
      $.force_new_line,
      $.word,
      $.inline_tag,
      $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
      // $.link, $.direct_link, $.reference_link, $.short_reference_link,
      $.link, $.short_link,
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

  verbatim: $ => seq(
    alias($.verbatim_open, $.token),
    field("verbatim",
          alias(
            repeat1(choice(/[^`\s]/, $._new_line)),
            $.content)),
    alias($.verbatim_close, $.token),
  ),

  inline_math: $ => seq(
    alias($.inline_math_open, $.token),
    field("inline_math",
          alias(
            repeat1(/[^$\s]/),
            $.content)),
    alias($.inline_math_close, $.token),
  ),
}

const definition = {
  definition: $ => seq(
    field('directive', repeat($.directive)),

    field('term', alias($.paragraph, $.term)),

    // field('description_begin', alias($.description_begin, $.token)),
    field('description_begin', alias('::', $.token)),

    optional($._new_line),
    field('description', $.description),
    // field('description_end', alias($.definition_end, $.token)),
    // $._whitespace,
    field('description_end', alias($.description_end, $.token)),
    $.eol
  ),

  description: $ => repeat1(choice(
    $.paragraph,
    $.link_definition,
    $.hashtag,
    $.code_block,
    alias($.verbatim_tag, $.tag),
    alias($.tag_with_syntax, $.tag),
    $.list_block,
    $.comment,
    $.blank_line,
  )),
}

const lists = {
  list_block: $ => seq(
    $.list,
    seq(alias($.soft_break, $.list_break), $.eol),
  ),

  list: $ => seq(
    field('directive', repeat($.directive)),
    $._list_start,
    field("list_item", repeat1($.list_item)),
    $._list_end,
  ),

  list_item: $ => seq(
    field("level", alias($.list_token, $.token)),
    field("checkbox", optional($.checkbox)),
    field("content",
      repeat(choice(
        $.paragraph,
        $.link_definition,

        $.definition,
        $.hashtag,
        $.code_block,
        alias($.verbatim_tag, $.tag),
        alias($.tag_with_syntax, $.tag),
        $.comment,
        $.blank_line
      ))),
    field("nested_list", optional($.list))
  ),

  checkbox: _ => token(seq(
    '[',
    token.immediate( choice(' ', /\S/) ),
    token.immediate(']'),
  )),
}

const links = {
  short_link: $ => seq(
    alias('[', $.token),
    optional(
      field("target",
        alias($.link_content, $.target))),
    alias(']', $.token),
  ),

  link: $ => seq(
    field('open_label', alias('[', $.token)),
    optional(
      field('label',
        alias($.link_content, $.label))),
    // $.link_marker,
    field('close_label', alias(']', $.token)),

    field('open_target', alias(token.immediate('['), $.token)),
    optional(
      field("target",
        alias($.link_content, $.target))),
    field('close_target', alias(']', $.token))
  ),

  link_definition: $ => seq(
    alias('[', $.token),
    optional(
      field('label',
        alias($.link_content, $.label))),
    alias(']:', $.token),
    $._whitespace,

    field('target', alias(repeat($.raw_word), $.target)),
    $.eol
  ),

  link_content: $ => repeat1(choice(
    /[^\[\]\s\\]+/,
    $.escaped_char,
    $._new_line
  )),

  link_label: $ => repeat1(choice(
    expression($, 'non-immediate', token, '@[]' + '*/+_`$'),
    $.escaped_char,
    $.inline_tag,
    $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
    $._new_line
  )),

  // direct_link: $ => seq(
  //   alias('<', $.token),
  //   field("target", alias(token.immediate(/[^>\s]+/), $.target)),
  //   alias(token.immediate('>'), $.token)
  // ),
  //
  // link: $ => prec(1, seq(
  //   field('open_label', alias('[', $.token)),
  //   field("label", optional(alias($.link_label, $.label))),
  //   field('close_label', alias(']', $.token)),
  //
  //   field('open_target', alias(token.immediate('('), $.token)),
  //   field("target",
  //     alias(
  //       repeat(/[^\(\)\s\\]+/),
  //       $.target)),
  //   field('close_target', alias(')', $.token))
  // )),
  //
  // reference_link: $ => prec.dynamic(2, seq(
  //   field('open_label', alias('[', $.token)),
  //   field('label', optional(alias($.link_label, $.label))),
  //   field('close_label', alias(']', $.token)),
  //
  //   field('open_reference', alias(token.immediate('['), $.token)),
  //   field('target', optional(alias($.link_label, $.reference))),
  //   field('close_reference', alias(']', $.token)),
  // )),
  //
  // short_reference_link: $ => prec.dynamic(1, seq(
  //   field('open_reference', alias('[', $.token)),
  //   field('target', alias($.link_label, $.reference)),
  //   field('close_reference', alias(']', $.token)),
  // )),
  //
  // reference_link_definition: $ => prec.dynamic(2, seq(
  //   alias('[', $.token),
  //   field('reference', alias($.link_label, $.reference)),
  //   alias(']:', $.token),
  //   $._whitespace,
  //
  //   field('target', alias(repeat($.raw_word), $.target)),
  //   $.eol
  // )),
  //
  // link_label: $ => repeat1(choice(
  //   expression($, 'non-immediate', token, '@[]<>' + '*/+_`$'),
  //   $.escaped_char,
  //   $.inline_tag,
  //   $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
  //   $._new_line
  // )),
}

const tags = {
  hashtag: $ => seq(
    alias($.hashtag_token, $.token),

    // Any except:
    //    `[`, `(`, `{`, white space
    field('name', alias(token.immediate(/[^\[({\s]+/), $.tag_name)),

    field('content',
      alias(
        repeat(expression($, 'non-immediate', token)),
        $.content)),
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
      field('label', alias($.link_label, $.label)),
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
    field('content',
          alias(
            repeat( choice(
              $.escaped_char,
              alias(/[^\(\)\s\\]+/, $.raw_word),
              // expression($, 'non-immediate', token, '()\\'),
              $._new_line
            )),
            $.content)),
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
    field('parameters',
          alias(
            repeat(choice(
              $.escaped_char,
              alias(/[^\{\}\s\\]+/, $.raw_word),
              // expression($, 'non-immediate', token, '{}\\'),
              $._new_line
            )),
            $.parameters)),
    field('close_parameters',
          alias('}', $.token))
  ),

  // The content of this tag tree-sitter parser will skip.
  verbatim_tag: $ => seq(
    field('directive', repeat($.directive)),

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

    field('content',
      alias(
        repeat(choice(
          $.code_block,
          alias($.verbatim_tag, $.tag),
          alias($.tag_with_syntax, $.tag),
          alias(/\S+/, $.raw_word),
          $._new_line,
          $.blank_line,
        )),
        $.content)),

    $.end_tag,
    choice($.comment, $.eol)
  ),

  // The content of this tag will be parsed by this parser.
  tag_with_syntax: $ => seq(
    field('directive', repeat($.directive)),

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

    field('content',
      optional(
        alias($.tag_content, $.content))),

    $.end_tag,
    choice($.comment, $.eol)
  ),

  code_block: $ => seq(
    field('directive', repeat($.directive)),

    alias($.code_block_token, $.token),
    field('parameter',
          repeat(alias($.raw_word, $.tag_parameter))),
    $._new_line,

    field('code',
      alias(
        repeat(choice(
          alias(/\S+/, $.raw_word),
          $._tag_begin,
          $._new_line,
          $.blank_line,
        )),
        $.content)),

    alias($.code_block_token, $.token),
    $.eol
  ),

  // Content move into separate node, make it appears in a tree as one node,
  // not a sequence of "$.content" nodes.
  tag_content: $ => repeat1(choice(
    $.paragraph,
    $.link_definition,
    $.definition,
    $.hashtag,
    $.code_block,
    alias($.verbatim_tag, $.tag),
    alias($.tag_with_syntax, $.tag),
    $.list_block,
    $.comment,
    $.blank_line,
  )),

  end_tag: $ => seq($._tag_begin, '@end'),
}

function gen_markup($, kind, other_kinds) {
  return seq(
    alias($[kind + "_open"], $.token),
    field(kind,
      alias(
        repeat1(choice(
          $.word,
          $.escaped_char,
          $.inline_tag,
          // $.link, $.direct_link, $.reference_link, $.short_reference_link,
          $.link, $.short_link,
          ...other_kinds
        )),
        $.content)),

    alias($[kind + "_close"], $.token)
  );
}

/**
 * @param {string} pr Precedence value
 * @param {Function} tfunc Token function: `token` or `token.immediate`.
 */
function expression($, pr, tfunc, skip = '') {
  const asciiSymbols = [ '!', '"', '#', '$', '%', '&', "'", '(', ')', '*', '+',
                         ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@',
                         '[', ']', '^', '_', '`', '{', '|', '}', '~', '\\' ]
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

Object.assign(blueflower_grammar.rules,
  sections, paragraph, markup, definition, lists, links, tags)

module.exports = grammar(blueflower_grammar)

// vim: ts=2 sts=2 sw=2
