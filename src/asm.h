#ifndef __KIKAI_ASM__
#define __KIKAI_ASM__

#include <stdint.h>


typedef enum cpu_type {
	CT_PU24,
} cpu_type_t;


typedef struct prog {
	cpu_type_t cpu_type;
	
} prog_t;


/**
 * Take a string with the program and return a prog_t
 * that contains everything needed to execute the program
 * inside the VM.
 */
prog_t* assemble(char *program);


#endif
