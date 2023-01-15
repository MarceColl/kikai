#ifndef __KIKAI_VM__
#define __KIKAI_VM__

#include <stdint.h>

#define MAX_VM_MODULES 32

typedef struct module {
	// TODO
} module_t;


typedef struct unit {
	
} unit_t;


typedef struct vm {
	uint8_t *code;
	module_t *modules[MAX_VM_MODULES];
	uint16_t *stack;
	unit_t *unit_stack;
	uint32_t code_size;
	uint32_t pc;
	uint32_t stack_size;
	uint32_t unit_stack_size;
	uint8_t num_modules;
} vm_t;


/**
 * Initialize a vm with a particular amount of code, of a certain length.
 */
void vm_init(vm_t *vm, uint32_t speed, uint32_t code_size, uint8_t *code);

/**
 * Attach a module to the vm.
 */
void vm_attach_module(vm_t *vm, module_t *mod);

/**
 * Run a vm tick, the vm is allowed to run for `time_ms` milliseconds.
 * This is not real-clock time, but in-game clock. This means that it may
 * take more or less.
 */
void vm_tick(vm_t *vm, uint32_t time_ms);


#endif
