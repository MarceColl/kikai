
stack:		dw 206 dup 0
unit_stack:	dw 1000 dup 0

mode: 		db 0

macro YIELD
	; Return to the main coroutine to check time limits
end macro

macro PUSH number
	push number
	inc rax
end macro

macro LOAD target
	push target
	inc rax
end macro

macro UDISTS
	inc rax
end macro

macro UVECSUBS
	inc rax
end macro

macro JMP target
	jmp target
	inc rax
end macro
	

_start:
	mov rsp, stack  ; set the stack
	xor rax, rax	; rax will be used as a counter for instructions executed
main:
	PUSH 0x01	; visio10_scan_around
	YIELD		; this basically yields

	PUSH 0x01	; :aggressive
	LOAD mode
	JE loop_aggressive
loop_aggressive:
	UDISTS
	PUSH 10
	JLE unit_too_close
unit_too_close:
	UVECSUBS
	PUSH 0x00

