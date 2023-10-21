[
    "query"
    "schema"
] @keyword

[
    ","
] @punctuation.delimiter

[
    "("
    ")"
    "{"
    "}"
    "<"
    ">"
] @punctuation.bracket

(pipe) @keyword.operator
(op) @keyword.operator
(bool_lit) @boolean
(num_lit) @number
(string_lit) @string
(functor) @function.call
(type) @type

(schema schema_name: (ident) @constructor col_name: (ident) @field)
(query query_name: (ident)) @function
