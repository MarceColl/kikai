use64
format ELF64 executable

entry vm_start

include 'kikai_macros.inc'

DSTACK 400
USTACK 1000

mode: 		dw 0
health:		dw 100

struc co_data {
	.rsp	dq 0
	.rax	dq 0
	.rbx	dq 0
	.rip	dq 0
}

; co-routine data
_co_data:	dq 40 dup 0

_co_start:
	mov rsp, QWORD [rcx] ; set the stack
	xor rax, rax			 ; eax will be used as a counter for instructions executed
main:
	CHECK_LIMITS
	PUSH 0x01
l01:
	CHECK_LIMITS
	PUSH 0x01
	ADD
	JMP l01

vm_start:         ; Main VM start
	xor rax, rax
	mov rdx, end_unit_stack
	mov rcx, _co_data
init_co_loop:
	; Initialize coroutines to have their rsp and rip pointers
	mov QWORD [rcx], rdx
	mov QWORD [rcx + 24], _co_start
	add rcx, 32
	sub rdx, 40
	inc rax
	cmp rax, 10
	jl init_co_loop
co_initialized:
	mov QWORD rcx, _co_data
	xor rax, rax
vm_loop:
	YIELD
	inc rax
	cmp rax, 10
	add rcx, 32
	jge vm_exit
	jmp vm_loop

vm_exit:
	mov rbx, rax
	mov rax, 60
	syscall

