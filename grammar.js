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

    $.hashtag_token,
    $.tag_token,
    $.tag_parameter,
    $.end_tag,

    $.blank_line,
    $.soft_break,
    $.hard_break,

    $._, // none
  ],

  inline: $ => [
    $.section,
  ],

  // https://github.com/tree-sitter/tree-sitter/pull/939
  precedences: _ => [
    // ['link', 'long_link_reference', 'short_link_reference'],
    ['inline_tag', 'tag', 'hashtag', 'comment', 'word'],
  ],

  rules: {
    document: $ => repeat1(choice(
      alias($.section, $.section),
      $.paragraph,
      $.blank_line,
      $.hard_break,
      $.hashtag,
      alias($.verbatim_tag, $.tag),
    )),

    paragraph: $ => prec.right(
      repeat1(choice(
        $.word,
        $.comment,
        // $.escaped_sequence,
        // $.bold, $.italic, $.strikethrough, $.underline, $.verbatim, $.inline_math,
        // $.link, $.link_reference, $.short_link_reference,
        $.inline_tag
      )),
    ),

    section: $ => choice($.section1, $.section2, $.section3, $.section4, $.section5, $.section6),

    // inline_tag: $ => prec('inline_tag',
    inline_tag: $ => prec(10,
      seq(
        alias(
          choice($.tag_token, '@'),
          $.token),

        // Any except:
        //    `[`, `(`, `{`, white space
        alias(token.immediate( /[^\[({\s]+/ ), $.tag_name),

        alias(token.immediate('['), $.token),
        alias(/[^\[\]\r\n\s]+/, $.label),
        alias(token.immediate(']'), $.token)
    )),

    // verbatim_tag: $ => prec('tag',
    verbatim_tag: $ => prec(6,
      seq(
        $.tag_token,

        // Any except:
        //    `[`, `(`, `{`, white space
        alias(token.immediate( /[^\[({\s]+/ ), $.tag_name),

        repeat($.tag_parameter),
        // /\r?\n/,

        alias(
          repeat1(choice(
              alias($.raw_word, "word"),
              alias($.blank_line, "blank_line"),
              alias($.verbatim_tag, $.tag),
              // $.tag
          )),
          $.content),

        $.end_tag
    )),

    hashtag: $ => prec('hashtag',
      seq(
        alias($.hashtag_token, $.token),

        // Any except:
        //    `[`, `(`, `{`, white space
        alias(token.immediate( /[^\[({\s]+/ ), $.tag_name),

        repeat(
          seq(' ', alias($.raw_word, $.parameter))),

        /\r?\n/
    )),

    comment: $ => prec('comment',
      seq(
        alias('# ', $.token),
        repeat( alias($.raw_word, 'word')),
        /\r?\n/
    )),

    word: _ => prec('word', /[^\s@]\S*/),
    raw_word: _ => /\S+/,

    // word: _ => /[^\s]+/

    // word: _ => choice(/\p{L}+/, /\p{N}+/),

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
  section1: $ => gen_section($, 1),
  section2: $ => gen_section($, 2),
  section3: $ => gen_section($, 3),
  section4: $ => gen_section($, 4),
  section5: $ => gen_section($, 5),
  section6: $ => gen_section($, 6),

  heading1: $ => gen_heading($, 1),
  heading2: $ => gen_heading($, 2),
  heading3: $ => gen_heading($, 3),
  heading4: $ => gen_heading($, 4),
  heading5: $ => gen_heading($, 5),
  heading6: $ => gen_heading($, 6),
}

function gen_section($, level) {

  let lower_level_sections = []
  for (let i = 0; i + 1 + level <= MAX_HEADING; ++i) {
    lower_level_sections[i] = $["section" + (i + 1 + level)]
  }

  return prec.right(
    seq(
      alias($["heading" + level], $.heading),
      repeat(choice(
          alias(choice(...lower_level_sections),
                $.section),
          // $.list,
          // $.definition,
          // // $.markdown_code_block,
          alias($.verbatim_tag, $.tag),
          // $.tag,
          $.hashtag,
          $.paragraph,
          $.blank_line)),
      optional($.soft_break)
    ));
}

function gen_heading($, level) {
  return seq(
    field("level", alias($["heading_" + level + "_token"],
                         $["token" + level])),
    field("title", $.paragraph)
  );
}

// Object.assign(skald_grammar.rules, sections, lists, markup)
Object.assign(blueflower_grammar.rules, sections)

module.exports = grammar(blueflower_grammar)

// vim: ts=2 sts=2 sw=2
