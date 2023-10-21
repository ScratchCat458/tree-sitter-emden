#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_schema = 1,
  anon_sym_LBRACE = 2,
  anon_sym_COMMA = 3,
  anon_sym_RBRACE = 4,
  anon_sym_query = 5,
  anon_sym_LT = 6,
  anon_sym_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_EQ_EQ = 10,
  anon_sym_BANG_EQ = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_AMP_AMP = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_null = 16,
  anon_sym_NULL = 17,
  sym_string_lit = 18,
  sym_num_lit = 19,
  anon_sym_true = 20,
  anon_sym_True = 21,
  anon_sym_false = 22,
  anon_sym_False = 23,
  sym_ident = 24,
  sym_pipe = 25,
  sym_source_file = 26,
  sym_schema = 27,
  sym_query = 28,
  sym_type = 29,
  sym_functor = 30,
  sym_condition = 31,
  sym_op = 32,
  sym_value = 33,
  sym_bool_lit = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_schema_repeat1 = 36,
  aux_sym_query_repeat1 = 37,
  aux_sym_functor_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_schema] = "schema",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_query] = "query",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_null] = "null",
  [anon_sym_NULL] = "NULL",
  [sym_string_lit] = "string_lit",
  [sym_num_lit] = "num_lit",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [sym_ident] = "ident",
  [sym_pipe] = "pipe",
  [sym_source_file] = "source_file",
  [sym_schema] = "schema",
  [sym_query] = "query",
  [sym_type] = "type",
  [sym_functor] = "functor",
  [sym_condition] = "condition",
  [sym_op] = "op",
  [sym_value] = "value",
  [sym_bool_lit] = "bool_lit",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_schema_repeat1] = "schema_repeat1",
  [aux_sym_query_repeat1] = "query_repeat1",
  [aux_sym_functor_repeat1] = "functor_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_schema] = anon_sym_schema,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym_string_lit] = sym_string_lit,
  [sym_num_lit] = sym_num_lit,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [sym_ident] = sym_ident,
  [sym_pipe] = sym_pipe,
  [sym_source_file] = sym_source_file,
  [sym_schema] = sym_schema,
  [sym_query] = sym_query,
  [sym_type] = sym_type,
  [sym_functor] = sym_functor,
  [sym_condition] = sym_condition,
  [sym_op] = sym_op,
  [sym_value] = sym_value,
  [sym_bool_lit] = sym_bool_lit,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_schema_repeat1] = aux_sym_schema_repeat1,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
  [aux_sym_functor_repeat1] = aux_sym_functor_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_num_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_functor] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schema_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functor_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_col_name = 1,
  field_functor_name = 2,
  field_query_name = 3,
  field_schema_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_col_name] = "col_name",
  [field_functor_name] = "functor_name",
  [field_query_name] = "query_name",
  [field_schema_name] = "schema_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_schema_name, 1},
  [1] =
    {field_col_name, 1},
  [2] =
    {field_col_name, 3, .inherited = true},
    {field_schema_name, 1},
  [4] =
    {field_col_name, 0, .inherited = true},
    {field_col_name, 1, .inherited = true},
  [6] =
    {field_query_name, 1},
  [7] =
    {field_functor_name, 0},
  [8] =
    {field_col_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'q') ADVANCE(32);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '|') ADVANCE(7);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'F') ADVANCE(76);
      if (lookahead == 'N') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '|') ADVANCE(7);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(50);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '|') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_num_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_num_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'L') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'U') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym_string_lit] = ACTIONS(1),
    [sym_num_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym_pipe] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym_schema] = STATE(21),
    [sym_query] = STATE(21),
    [aux_sym_source_file_repeat1] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_schema] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(7),
  },
  [2] = {
    [sym_op] = STATE(17),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [anon_sym_EQ_EQ] = ACTIONS(15),
    [anon_sym_BANG_EQ] = ACTIONS(15),
    [anon_sym_LT_EQ] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(15),
    [anon_sym_AMP_AMP] = ACTIONS(15),
    [anon_sym_PIPE_PIPE] = ACTIONS(15),
    [anon_sym_null] = ACTIONS(17),
    [anon_sym_NULL] = ACTIONS(17),
    [sym_string_lit] = ACTIONS(13),
    [sym_num_lit] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_True] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_False] = ACTIONS(17),
    [sym_ident] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      sym_ident,
    STATE(4), 1,
      aux_sym_functor_repeat1,
    STATE(14), 1,
      sym_bool_lit,
    ACTIONS(23), 2,
      anon_sym_null,
      anon_sym_NULL,
    ACTIONS(25), 2,
      sym_string_lit,
      sym_num_lit,
    STATE(13), 2,
      sym_condition,
      sym_value,
    ACTIONS(27), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [34] = 9,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      sym_ident,
    STATE(4), 1,
      aux_sym_functor_repeat1,
    STATE(14), 1,
      sym_bool_lit,
    ACTIONS(36), 2,
      anon_sym_null,
      anon_sym_NULL,
    ACTIONS(39), 2,
      sym_string_lit,
      sym_num_lit,
    STATE(13), 2,
      sym_condition,
      sym_value,
    ACTIONS(42), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [68] = 9,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_ident,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_functor_repeat1,
    STATE(14), 1,
      sym_bool_lit,
    ACTIONS(23), 2,
      anon_sym_null,
      anon_sym_NULL,
    ACTIONS(25), 2,
      sym_string_lit,
      sym_num_lit,
    STATE(13), 2,
      sym_condition,
      sym_value,
    ACTIONS(27), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [102] = 2,
    ACTIONS(50), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
      sym_pipe,
    ACTIONS(52), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [121] = 2,
    ACTIONS(54), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
      sym_pipe,
    ACTIONS(56), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [140] = 2,
    ACTIONS(58), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
      sym_pipe,
    ACTIONS(60), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [159] = 2,
    ACTIONS(62), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
      sym_pipe,
    ACTIONS(64), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [178] = 2,
    ACTIONS(66), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
      sym_pipe,
    ACTIONS(68), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [197] = 2,
    ACTIONS(70), 7,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
      sym_pipe,
    ACTIONS(72), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [216] = 5,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_op,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 2,
      anon_sym_RBRACE,
      sym_pipe,
    ACTIONS(15), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [239] = 3,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    ACTIONS(13), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
    ACTIONS(17), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [258] = 2,
    ACTIONS(70), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
    ACTIONS(72), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [275] = 2,
    ACTIONS(34), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string_lit,
      sym_num_lit,
    ACTIONS(78), 7,
      anon_sym_null,
      anon_sym_NULL,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
      sym_ident,
  [291] = 5,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_value,
    STATE(11), 1,
      sym_bool_lit,
    ACTIONS(82), 4,
      anon_sym_null,
      anon_sym_NULL,
      sym_string_lit,
      sym_num_lit,
    ACTIONS(84), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [313] = 5,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_value,
    STATE(11), 1,
      sym_bool_lit,
    ACTIONS(82), 4,
      anon_sym_null,
      anon_sym_NULL,
      sym_string_lit,
      sym_num_lit,
    ACTIONS(84), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [335] = 1,
    ACTIONS(88), 9,
      anon_sym_LPAREN,
      anon_sym_null,
      anon_sym_NULL,
      sym_string_lit,
      sym_num_lit,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [347] = 3,
    STATE(17), 1,
      sym_op,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [363] = 3,
    STATE(16), 1,
      sym_op,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [379] = 4,
    ACTIONS(5), 1,
      anon_sym_schema,
    ACTIONS(7), 1,
      anon_sym_query,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_schema,
      sym_query,
      aux_sym_source_file_repeat1,
  [394] = 4,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      anon_sym_schema,
    ACTIONS(97), 1,
      anon_sym_query,
    STATE(22), 3,
      sym_schema,
      sym_query,
      aux_sym_source_file_repeat1,
  [409] = 4,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      sym_ident,
    STATE(24), 1,
      aux_sym_schema_repeat1,
    STATE(46), 1,
      sym_type,
  [422] = 4,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      sym_ident,
    STATE(24), 1,
      aux_sym_schema_repeat1,
    STATE(46), 1,
      sym_type,
  [435] = 3,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      sym_ident,
    STATE(43), 2,
      sym_functor,
      sym_condition,
  [446] = 4,
    ACTIONS(102), 1,
      sym_ident,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_schema_repeat1,
    STATE(46), 1,
      sym_type,
  [459] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      sym_pipe,
    STATE(38), 1,
      aux_sym_query_repeat1,
  [469] = 1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_schema,
      anon_sym_query,
  [475] = 3,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_pipe,
    STATE(29), 1,
      aux_sym_query_repeat1,
  [485] = 3,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_ident,
    STATE(54), 1,
      sym_condition,
  [495] = 1,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_schema,
      anon_sym_query,
  [501] = 2,
    ACTIONS(128), 1,
      anon_sym_LT,
    ACTIONS(130), 2,
      anon_sym_GT,
      sym_ident,
  [509] = 3,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_ident,
    STATE(50), 1,
      sym_condition,
  [519] = 3,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      sym_ident,
    STATE(47), 1,
      sym_condition,
  [529] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_schema,
      anon_sym_query,
  [535] = 2,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      sym_ident,
  [543] = 1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_schema,
      anon_sym_query,
  [549] = 3,
    ACTIONS(115), 1,
      sym_pipe,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_query_repeat1,
  [559] = 2,
    ACTIONS(102), 1,
      sym_ident,
    STATE(45), 1,
      sym_type,
  [566] = 1,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      sym_pipe,
  [571] = 1,
    ACTIONS(144), 2,
      anon_sym_GT,
      sym_ident,
  [576] = 1,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      sym_ident,
  [581] = 1,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      sym_pipe,
  [586] = 1,
    ACTIONS(148), 2,
      anon_sym_RBRACE,
      sym_pipe,
  [591] = 1,
    ACTIONS(150), 1,
      anon_sym_GT,
  [595] = 1,
    ACTIONS(152), 1,
      sym_ident,
  [599] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [603] = 1,
    ACTIONS(156), 1,
      sym_ident,
  [607] = 1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
  [611] = 1,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
  [615] = 1,
    ACTIONS(162), 1,
      sym_ident,
  [619] = 1,
    ACTIONS(164), 1,
      anon_sym_LBRACE,
  [623] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [627] = 1,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
  [631] = 1,
    ACTIONS(170), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 178,
  [SMALL_STATE(11)] = 197,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 239,
  [SMALL_STATE(14)] = 258,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 291,
  [SMALL_STATE(17)] = 313,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 347,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 379,
  [SMALL_STATE(22)] = 394,
  [SMALL_STATE(23)] = 409,
  [SMALL_STATE(24)] = 422,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 459,
  [SMALL_STATE(28)] = 469,
  [SMALL_STATE(29)] = 475,
  [SMALL_STATE(30)] = 485,
  [SMALL_STATE(31)] = 495,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 529,
  [SMALL_STATE(36)] = 535,
  [SMALL_STATE(37)] = 543,
  [SMALL_STATE(38)] = 549,
  [SMALL_STATE(39)] = 559,
  [SMALL_STATE(40)] = 566,
  [SMALL_STATE(41)] = 571,
  [SMALL_STATE(42)] = 576,
  [SMALL_STATE(43)] = 581,
  [SMALL_STATE(44)] = 586,
  [SMALL_STATE(45)] = 591,
  [SMALL_STATE(46)] = 595,
  [SMALL_STATE(47)] = 599,
  [SMALL_STATE(48)] = 603,
  [SMALL_STATE(49)] = 607,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 615,
  [SMALL_STATE(52)] = 619,
  [SMALL_STATE(53)] = 623,
  [SMALL_STATE(54)] = 627,
  [SMALL_STATE(55)] = 631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_repeat1, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functor_repeat1, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_repeat1, 2), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functor_repeat1, 2), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functor_repeat1, 2), SHIFT_REPEAT(10),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_functor_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3, .production_id = 7),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3, .production_id = 7),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5, .production_id = 7),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_lit, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor, 1, .production_id = 6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_functor_repeat1, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, .production_id = 4),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, .production_id = 4), SHIFT_REPEAT(32),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(25),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 4, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2, .production_id = 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 5, .production_id = 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor, 3, .production_id = 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 3, .production_id = 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor, 4, .production_id = 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_emden(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
