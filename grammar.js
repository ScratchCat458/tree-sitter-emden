module.exports = grammar({
  name: 'emden',

  rules: {
    source_file: $ => repeat(choice($.schema, $.query)),

    schema: $ => seq(
      "schema",
      field("schema_name", $.ident),
      "{",
      repeat(seq($.type, field("col_name", $.ident), optional(","))),
      "}"
    ),

    query: $ => seq(
      "query",
      field("query_name", $.ident),
      "{",
      $.ident,
      repeat(seq($.pipe, choice($.functor, $.condition))),
      "}"
    ),

    type: $ => seq($.ident, optional(seq("<", $.type, ">"))),

    functor: $ => seq(field("functor_name", $.ident), optional(seq("(", repeat(
      seq(choice(
        $.value,
        $.condition,
        $.string_lit,
        $.num_lit,
        $.bool_lit,
        $.ident
      ), optional(","))
    ), ")"))),

    condition: $ => seq(choice(seq("(", $.condition, ")"), field("col_name", $.ident)), $.op, choice(seq("(", $.condition, ")"), $.value)),
    op: $ => choice("==", "!=", "<", ">", "<=", ">=", "&&", "||"),

    value: $ => prec(40, choice($.string_lit, $.num_lit, $.bool_lit, choice("null", "NULL"))),
    string_lit: $ => /".*"/,
    num_lit: $ => /-?\d+.?\d+/,
    bool_lit: $ => choice("true", "True", "false", "False"),
    ident: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    pipe: $ => "|>",
  }
});
