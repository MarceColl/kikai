use64
format ELF64 executable

entry vm_start

include 'kikai_macros.inc'

DSTACK 400
USTACK 1000

mode: 		dw 0
health:		dw 100

; The _co variables hold the data saved
struct co_data
	.rsp	dq 0
	.rax	dq 0
	.rbx	dq 0
	.rip	dq 0
ends

_co_data: dup 6 co_data

_co_rsp:    dq 0	; stack pointer
_co_rax:	dq 0
_co_rbx:    dq 0
_co_rip:	dq 0

_co_start:
	mov rsp, rax * 30 ; set the stack
	xor rax, rax	  ; eax will be used as a counter for instructions executed
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
	mov QWORD [_co_rip], _co_start
	mov QWORD [_co_rsp], rsp
	YIELD
vm_loop:
	inc rax
	cmp rax, 5
	jge vm_exit
	YIELD
	jmp vm_loop

vm_exit:
	mov rbx, rax
	mov rax, 60
	syscall

