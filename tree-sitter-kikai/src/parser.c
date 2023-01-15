#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOTdefine = 1,
  sym_label_target = 2,
  sym_label = 3,
  sym_identifier = 4,
  sym_module_target = 5,
  anon_sym_DOTmodule = 6,
  sym_number = 7,
  sym_atom = 8,
  anon_sym_POP = 9,
  anon_sym_UPOP = 10,
  anon_sym_UVECSUBS = 11,
  anon_sym_UVECADDS = 12,
  anon_sym_UDISTS = 13,
  anon_sym_PUSH = 14,
  anon_sym_JMP = 15,
  anon_sym_JLE = 16,
  anon_sym_JL = 17,
  anon_sym_JGE = 18,
  anon_sym_JG = 19,
  anon_sym_TRIGGER = 20,
  anon_sym_visio10 = 21,
  anon_sym_MOTIONv2 = 22,
  anon_sym_ARCHERmk2 = 23,
  anon_sym_COMMSmk2 = 24,
  anon_sym_DOTtype = 25,
  anon_sym_unit = 26,
  anon_sym_building = 27,
  anon_sym_overseer = 28,
  anon_sym_DOTcpu = 29,
  anon_sym_pu24 = 30,
  anon_sym_DOTinteractive_var = 31,
  anon_sym_bool = 32,
  anon_sym_EQ = 33,
  anon_sym_true = 34,
  anon_sym_false = 35,
  anon_sym_options = 36,
  anon_sym_LBRACK = 37,
  anon_sym_COMMA = 38,
  anon_sym_RBRACK = 39,
  sym_comment = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_define = 43,
  sym__constant = 44,
  sym_module = 45,
  sym_op = 46,
  sym_hardware_name = 47,
  sym_type = 48,
  sym_cpu = 49,
  sym_interactive_var = 50,
  sym_ivar_type = 51,
  sym__ivar_bool_def = 52,
  sym__ivar_options_def = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym__ivar_options_def_repeat1 = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTdefine] = ".define",
  [sym_label_target] = "label_target",
  [sym_label] = "label",
  [sym_identifier] = "identifier",
  [sym_module_target] = "module_target",
  [anon_sym_DOTmodule] = ".module",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [anon_sym_POP] = "POP",
  [anon_sym_UPOP] = "UPOP",
  [anon_sym_UVECSUBS] = "UVECSUBS",
  [anon_sym_UVECADDS] = "UVECADDS",
  [anon_sym_UDISTS] = "UDISTS",
  [anon_sym_PUSH] = "PUSH",
  [anon_sym_JMP] = "JMP",
  [anon_sym_JLE] = "JLE",
  [anon_sym_JL] = "JL",
  [anon_sym_JGE] = "JGE",
  [anon_sym_JG] = "JG",
  [anon_sym_TRIGGER] = "TRIGGER",
  [anon_sym_visio10] = "visio10",
  [anon_sym_MOTIONv2] = "MOTIONv2",
  [anon_sym_ARCHERmk2] = "ARCHERmk2",
  [anon_sym_COMMSmk2] = "COMMSmk2",
  [anon_sym_DOTtype] = ".type",
  [anon_sym_unit] = "unit",
  [anon_sym_building] = "building",
  [anon_sym_overseer] = "overseer",
  [anon_sym_DOTcpu] = ".cpu",
  [anon_sym_pu24] = "pu24",
  [anon_sym_DOTinteractive_var] = ".interactive_var",
  [anon_sym_bool] = "bool",
  [anon_sym_EQ] = "=",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_options] = "options",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_define] = "define",
  [sym__constant] = "_constant",
  [sym_module] = "module",
  [sym_op] = "op",
  [sym_hardware_name] = "hardware_name",
  [sym_type] = "type",
  [sym_cpu] = "cpu",
  [sym_interactive_var] = "interactive_var",
  [sym_ivar_type] = "ivar_type",
  [sym__ivar_bool_def] = "_ivar_bool_def",
  [sym__ivar_options_def] = "_ivar_options_def",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__ivar_options_def_repeat1] = "_ivar_options_def_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTdefine] = anon_sym_DOTdefine,
  [sym_label_target] = sym_label_target,
  [sym_label] = sym_label,
  [sym_identifier] = sym_identifier,
  [sym_module_target] = sym_module_target,
  [anon_sym_DOTmodule] = anon_sym_DOTmodule,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [anon_sym_POP] = anon_sym_POP,
  [anon_sym_UPOP] = anon_sym_UPOP,
  [anon_sym_UVECSUBS] = anon_sym_UVECSUBS,
  [anon_sym_UVECADDS] = anon_sym_UVECADDS,
  [anon_sym_UDISTS] = anon_sym_UDISTS,
  [anon_sym_PUSH] = anon_sym_PUSH,
  [anon_sym_JMP] = anon_sym_JMP,
  [anon_sym_JLE] = anon_sym_JLE,
  [anon_sym_JL] = anon_sym_JL,
  [anon_sym_JGE] = anon_sym_JGE,
  [anon_sym_JG] = anon_sym_JG,
  [anon_sym_TRIGGER] = anon_sym_TRIGGER,
  [anon_sym_visio10] = anon_sym_visio10,
  [anon_sym_MOTIONv2] = anon_sym_MOTIONv2,
  [anon_sym_ARCHERmk2] = anon_sym_ARCHERmk2,
  [anon_sym_COMMSmk2] = anon_sym_COMMSmk2,
  [anon_sym_DOTtype] = anon_sym_DOTtype,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_building] = anon_sym_building,
  [anon_sym_overseer] = anon_sym_overseer,
  [anon_sym_DOTcpu] = anon_sym_DOTcpu,
  [anon_sym_pu24] = anon_sym_pu24,
  [anon_sym_DOTinteractive_var] = anon_sym_DOTinteractive_var,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_define] = sym_define,
  [sym__constant] = sym__constant,
  [sym_module] = sym_module,
  [sym_op] = sym_op,
  [sym_hardware_name] = sym_hardware_name,
  [sym_type] = sym_type,
  [sym_cpu] = sym_cpu,
  [sym_interactive_var] = sym_interactive_var,
  [sym_ivar_type] = sym_ivar_type,
  [sym__ivar_bool_def] = sym__ivar_bool_def,
  [sym__ivar_options_def] = sym__ivar_options_def,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__ivar_options_def_repeat1] = aux_sym__ivar_options_def_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTdefine] = {
    .visible = true,
    .named = false,
  },
  [sym_label_target] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_target] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTmodule] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UPOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UVECSUBS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UVECADDS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UDISTS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUSH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRIGGER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_visio10] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOTIONv2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARCHERmk2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMSmk2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_building] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overseer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcpu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pu24] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinteractive_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_hardware_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_cpu] = {
    .visible = true,
    .named = true,
  },
  [sym_interactive_var] = {
    .visible = true,
    .named = true,
  },
  [sym_ivar_type] = {
    .visible = true,
    .named = true,
  },
  [sym__ivar_bool_def] = {
    .visible = false,
    .named = true,
  },
  [sym__ivar_options_def] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ivar_options_def_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(32);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == 'v') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(152);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(154);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(161);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '@') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(36);
      if (lookahead == 'V') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(150);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 22:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'G') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'H') ADVANCE(145);
      END_STATE();
    case 25:
      if (lookahead == 'H') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(121);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(140);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(141);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(144);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(143);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(120);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(5);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(7);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(56);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 122:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 124:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 126:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 127:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 128:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == 'J') ADVANCE(21);
      if (lookahead == 'P') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTdefine);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_label_target);
      if (lookahead == ':') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_label_target);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_module_target);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOTmodule);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_atom);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_POP);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_UPOP);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_UVECSUBS);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_UVECADDS);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_UDISTS);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PUSH);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_JMP);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_JLE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_JL);
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_JGE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_JG);
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_TRIGGER);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_visio10);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_MOTIONv2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ARCHERmk2);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COMMSmk2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_building);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_overseer);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTcpu);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_pu24);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTinteractive_var);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 129},
  [2] = {.lex_state = 129},
  [3] = {.lex_state = 129},
  [4] = {.lex_state = 129},
  [5] = {.lex_state = 129},
  [6] = {.lex_state = 129},
  [7] = {.lex_state = 129},
  [8] = {.lex_state = 129},
  [9] = {.lex_state = 129},
  [10] = {.lex_state = 129},
  [11] = {.lex_state = 129},
  [12] = {.lex_state = 129},
  [13] = {.lex_state = 129},
  [14] = {.lex_state = 129},
  [15] = {.lex_state = 129},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTdefine] = ACTIONS(1),
    [sym_label_target] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_module_target] = ACTIONS(1),
    [anon_sym_DOTmodule] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [anon_sym_POP] = ACTIONS(1),
    [anon_sym_UPOP] = ACTIONS(1),
    [anon_sym_UVECSUBS] = ACTIONS(1),
    [anon_sym_UVECADDS] = ACTIONS(1),
    [anon_sym_UDISTS] = ACTIONS(1),
    [anon_sym_PUSH] = ACTIONS(1),
    [anon_sym_JMP] = ACTIONS(1),
    [anon_sym_JLE] = ACTIONS(1),
    [anon_sym_JL] = ACTIONS(1),
    [anon_sym_JGE] = ACTIONS(1),
    [anon_sym_JG] = ACTIONS(1),
    [anon_sym_TRIGGER] = ACTIONS(1),
    [anon_sym_visio10] = ACTIONS(1),
    [anon_sym_MOTIONv2] = ACTIONS(1),
    [anon_sym_ARCHERmk2] = ACTIONS(1),
    [anon_sym_COMMSmk2] = ACTIONS(1),
    [anon_sym_DOTtype] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_building] = ACTIONS(1),
    [anon_sym_overseer] = ACTIONS(1),
    [anon_sym_DOTcpu] = ACTIONS(1),
    [anon_sym_pu24] = ACTIONS(1),
    [anon_sym_DOTinteractive_var] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__definition] = STATE(3),
    [sym_define] = STATE(3),
    [sym_module] = STATE(3),
    [sym_op] = STATE(3),
    [sym_type] = STATE(3),
    [sym_cpu] = STATE(3),
    [sym_interactive_var] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOTdefine] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_DOTmodule] = ACTIONS(9),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_UPOP] = ACTIONS(11),
    [anon_sym_UVECSUBS] = ACTIONS(11),
    [anon_sym_UVECADDS] = ACTIONS(11),
    [anon_sym_UDISTS] = ACTIONS(11),
    [anon_sym_PUSH] = ACTIONS(13),
    [anon_sym_JMP] = ACTIONS(15),
    [anon_sym_JLE] = ACTIONS(15),
    [anon_sym_JL] = ACTIONS(17),
    [anon_sym_JGE] = ACTIONS(15),
    [anon_sym_JG] = ACTIONS(17),
    [anon_sym_TRIGGER] = ACTIONS(19),
    [anon_sym_DOTtype] = ACTIONS(21),
    [anon_sym_DOTcpu] = ACTIONS(23),
    [anon_sym_DOTinteractive_var] = ACTIONS(25),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_DOTdefine,
    ACTIONS(35), 1,
      anon_sym_DOTmodule,
    ACTIONS(41), 1,
      anon_sym_PUSH,
    ACTIONS(50), 1,
      anon_sym_TRIGGER,
    ACTIONS(53), 1,
      anon_sym_DOTtype,
    ACTIONS(56), 1,
      anon_sym_DOTcpu,
    ACTIONS(59), 1,
      anon_sym_DOTinteractive_var,
    ACTIONS(32), 2,
      sym_label,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(44), 3,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
    ACTIONS(38), 5,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
    STATE(2), 8,
      sym__definition,
      sym_define,
      sym_module,
      sym_op,
      sym_type,
      sym_cpu,
      sym_interactive_var,
      aux_sym_source_file_repeat1,
  [55] = 13,
    ACTIONS(5), 1,
      anon_sym_DOTdefine,
    ACTIONS(9), 1,
      anon_sym_DOTmodule,
    ACTIONS(13), 1,
      anon_sym_PUSH,
    ACTIONS(19), 1,
      anon_sym_TRIGGER,
    ACTIONS(21), 1,
      anon_sym_DOTtype,
    ACTIONS(23), 1,
      anon_sym_DOTcpu,
    ACTIONS(25), 1,
      anon_sym_DOTinteractive_var,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(64), 2,
      sym_label,
      sym_comment,
    ACTIONS(15), 3,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
    ACTIONS(11), 5,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
    STATE(2), 8,
      sym__definition,
      sym_define,
      sym_module,
      sym_op,
      sym_type,
      sym_cpu,
      sym_interactive_var,
      aux_sym_source_file_repeat1,
  [110] = 2,
    ACTIONS(68), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(66), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [135] = 2,
    ACTIONS(72), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(70), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [160] = 2,
    ACTIONS(76), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(74), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [185] = 2,
    ACTIONS(80), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(78), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [210] = 2,
    ACTIONS(84), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(82), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [235] = 2,
    ACTIONS(88), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(86), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [260] = 2,
    ACTIONS(92), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(90), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [285] = 2,
    ACTIONS(96), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(94), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [310] = 2,
    ACTIONS(100), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(98), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [335] = 2,
    ACTIONS(104), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(102), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [360] = 2,
    ACTIONS(108), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(106), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [385] = 2,
    ACTIONS(112), 2,
      anon_sym_JL,
      anon_sym_JG,
    ACTIONS(110), 18,
      ts_builtin_sym_end,
      anon_sym_DOTdefine,
      sym_label,
      anon_sym_DOTmodule,
      anon_sym_POP,
      anon_sym_UPOP,
      anon_sym_UVECSUBS,
      anon_sym_UVECADDS,
      anon_sym_UDISTS,
      anon_sym_PUSH,
      anon_sym_JMP,
      anon_sym_JLE,
      anon_sym_JGE,
      anon_sym_TRIGGER,
      anon_sym_DOTtype,
      anon_sym_DOTcpu,
      anon_sym_DOTinteractive_var,
      sym_comment,
  [410] = 2,
    STATE(9), 1,
      sym_hardware_name,
    ACTIONS(114), 4,
      anon_sym_visio10,
      anon_sym_MOTIONv2,
      anon_sym_ARCHERmk2,
      anon_sym_COMMSmk2,
  [420] = 4,
    ACTIONS(116), 1,
      anon_sym_bool,
    ACTIONS(118), 1,
      anon_sym_options,
    STATE(8), 1,
      sym_ivar_type,
    STATE(7), 2,
      sym__ivar_bool_def,
      sym__ivar_options_def,
  [434] = 2,
    STATE(4), 1,
      sym__constant,
    ACTIONS(120), 3,
      sym_identifier,
      sym_number,
      sym_atom,
  [443] = 2,
    STATE(15), 1,
      sym__constant,
    ACTIONS(122), 3,
      sym_identifier,
      sym_number,
      sym_atom,
  [452] = 1,
    ACTIONS(124), 3,
      anon_sym_unit,
      anon_sym_building,
      anon_sym_overseer,
  [458] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
  [465] = 1,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
  [470] = 2,
    ACTIONS(132), 1,
      sym_atom,
    STATE(24), 1,
      aux_sym__ivar_options_def_repeat1,
  [477] = 2,
    ACTIONS(134), 1,
      sym_atom,
    STATE(26), 1,
      aux_sym__ivar_options_def_repeat1,
  [484] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
  [491] = 2,
    ACTIONS(138), 1,
      sym_atom,
    STATE(26), 1,
      aux_sym__ivar_options_def_repeat1,
  [498] = 1,
    ACTIONS(141), 1,
      sym_identifier,
  [502] = 1,
    ACTIONS(143), 1,
      anon_sym_EQ,
  [506] = 1,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
  [510] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [514] = 1,
    ACTIONS(149), 1,
      sym_identifier,
  [518] = 1,
    ACTIONS(151), 1,
      anon_sym_pu24,
  [522] = 1,
    ACTIONS(120), 1,
      sym_module_target,
  [526] = 1,
    ACTIONS(153), 1,
      sym_atom,
  [530] = 1,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [534] = 1,
    ACTIONS(157), 1,
      sym_atom,
  [538] = 1,
    ACTIONS(159), 1,
      anon_sym_EQ,
  [542] = 1,
    ACTIONS(126), 1,
      anon_sym_COMMA,
  [546] = 1,
    ACTIONS(120), 1,
      sym_label_target,
  [550] = 1,
    ACTIONS(161), 1,
      sym_atom,
  [554] = 1,
    ACTIONS(163), 1,
      sym_module_target,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 310,
  [SMALL_STATE(13)] = 335,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 385,
  [SMALL_STATE(16)] = 410,
  [SMALL_STATE(17)] = 420,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 443,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 465,
  [SMALL_STATE(23)] = 470,
  [SMALL_STATE(24)] = 477,
  [SMALL_STATE(25)] = 484,
  [SMALL_STATE(26)] = 491,
  [SMALL_STATE(27)] = 498,
  [SMALL_STATE(28)] = 502,
  [SMALL_STATE(29)] = 506,
  [SMALL_STATE(30)] = 510,
  [SMALL_STATE(31)] = 514,
  [SMALL_STATE(32)] = 518,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 526,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 534,
  [SMALL_STATE(37)] = 538,
  [SMALL_STATE(38)] = 542,
  [SMALL_STATE(39)] = 546,
  [SMALL_STATE(40)] = 550,
  [SMALL_STATE(41)] = 554,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ivar_bool_def, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ivar_bool_def, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ivar_type, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ivar_type, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interactive_var, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interactive_var, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ivar_options_def, 7),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ivar_options_def, 7),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hardware_name, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hardware_name, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cpu, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cpu, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ivar_options_def, 6),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ivar_options_def, 6),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ivar_options_def_repeat1, 2), SHIFT_REPEAT(38),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ivar_options_def_repeat1, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kikai(void) {
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
