#include "vm.h"

#include <stddef.h>


#define OP_PUSH 0x00
#define OP_CALL 0x01
#define OP_LOAD 0x02


void vm_init(vm_t *vm, uint32_t speed, uint32_t code_size, uint8_t *code) {
	vm->code = code;
	vm->code_size = code_size;
	vm->pc = 0;
	vm->modules = NULL;
	vm->num_modules = 0;
}

void vm_attach_module(vm_t *vm, module_t *mod) {
	vm->modules[vm->num_modules] = mod;
	vm->num_modules++;
}

static void _vm_instr(vm_t *vm, uint8_t *instr) {
	switch (*instr) {
		case OP_PUSH:
			vm->stack[vm->stack_size] = 
	}
}

void vm_tick(vm_t *vm, uint32_t time_ms) {
	uint32_t num_instr = time_ms;

	uint8_t *code = vm->code;
	for (int i = 0; i < num_instr; i++) {
		_vm_instr(vm, &code[vm->pc]); 
	}
}
