#include "asm.h"


#define MAX_OPCODES 256
#define MAX_OP_ARGS 2


typedef enum arg_type {
	ARG_IMM = 0x01,
	ARG_LABEL = 0x02,
	ARG_MODULE = 0x04,
	ARG_IDENT = 0x08,
	ARG_VEC = 0x0F,
} arg_type_t;


typedef struct op_def {
	char *w;
	int na;
	arg_type_t t[MAX_OP_ARGS];
	char *desc
} op_def_t;

typedef struct keyword_def {
	char *w;
	void (*handler)(void);
} kw_def_t;

typedef struct parser_state {
	char *c;
	int col;
	int row;
} parser_state_t;

void parser_init(parser_state_t *ps, char *program) {
	ps->c = program;
	ps->col = 0;
	ps->row = 0;
}

void hl_kw_type(parser_state_t *ps) {
	
}

kw_def_t kw_defs[] = {
	{ .w = ".TYPE", .handler = &hl_kw_type },
};

op_def_t op_defs[MAX_OPCODES] = {
	// IO
	{ .w = "TRIGGER", .na = 1, .t = { ARG_MODULE }, 
		.desc = "Trigger a module function, it takes a module reference" },
	// Arithmetic
	{ .w = "ADD", .na = 0, .desc = "PUSH (POP + POP)" },
	{ .w = "SUB", .na = 0, .desc = "PUSH (POP - POP)" },
	{ .w = "MULT", .na = 0, .desc = "PUSH (POP * POP)" },
	{ .w = "REM", .na = 0, .desc = "PUSH (POP % POP)" },
	{ .w = "DIV", .na = 0, .desc = "PUSH (int)(POP / POP)" },
	// Stack handling
	{ .w = "PUSH", .na = 1, .t = { ARG_IMM | ARG_IDENT | ARG_VEC }},
	{ .w = "POP", .na = 0 },
	{ .w = "UPUSH", .na = 0 },
	{ .w = "UPOP", .na = 0 },
	{ .w = "SWAP", .na = 0 },
	{ .w = "DUP", .na = 0 },
	// Memory operations
	{ .w = "STORE", .na = 1, .t = { ARG_LABEL }},
	{ .w = "LOAD", .na = 1, .t = { ARG_LABEL }},
	// Random generation
	{ .w = "RAND", .na = 0 },
	{ .w = "RANDMAX", .na = 1, .t = { ARG_IMM | ARG_IDENT }},
	// Jumps
	{ .w = "JMP", .na = 1, t = { ARG_LABEL }},
	{ .w = "JE", .na = 1, t = { ARG_LABEL }},
	{ .w = "JGE", .na = 1, t = { ARG_LABEL }},
	{ .w = "JL", .na = 1, t = { ARG_LABEL }},
	{ .w = "JLE", .na = 1, t = { ARG_LABEL }},
	// Vector operations
	{ .w = "VECADD", .na = 0 },
	{ .w = "VECSUB", .na = 0 },
	{ .w = "VECMULT", .na = 0 },
	{ .w = "VECX", .na = 0 },
	{ .w = "VECINV", .na = 0 },
	{ .w = "DIST", .na = 0 },
	// Unit vec operations
	{ .w = "UVECADD", .na = 0 },
	{ .w = "UVECSUB", .na = 0 },
	{ .w = "UVECMULT", .na = 0 },
	{ .w = "UVECX", .na = 0 },
	{ .w = "UDIST", .na = 0 },
	// Unit with self vec operations
	{ .w = "UVECADDS", .na = 0 },
	{ .w = "UVECSUBS", .na = 0 },
	{ .w = "UVECMULTS", .na = 0 },
	{ .w = "UVECXS", .na = 0 },
	{ .w = "UDISTS", .na = 0 },
	// END
	{ .w = NULL, .na = 0 },
};


uint8_t* assemble(char *program) {
	parser_state_t ps;
	parser_init(&ps, program);
	parser_parse(&ps);
}


