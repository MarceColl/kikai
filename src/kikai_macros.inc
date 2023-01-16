; kikai VM macros
; kikai VMs are implemented as co-routines

struc VEC x,y {
	.x dw x
	.y dw y
}

struc UNIT {
	.pos VEC
	.player db
}

macro YIELD {
	local next_inst, after_yield
	; yield to the main thread
	xchg rsp, QWORD [_co_rsp]
	xchg rax, QWORD [_co_rax]
	xchg rbx, QWORD [_co_rbx]
	push QWORD [_co_rip]	
	call next_inst
next_inst:
	pop QWORD [_co_rip]
	add QWORD [_co_rip], (after_yield - next_inst)
	ret
after_yield:
}

macro CHECK_LIMITS {
	local no_yield
	cmp rax, 5
	jl no_yield
	YIELD 
no_yield:
}

macro PUSH number {
	push WORD number
	inc rax
}

macro ADD {
	pop WORD bx
	add WORD [rsp], bx
	inc rax
}

macro SUB {
	pop WORD bx
	sub WORD [rsp], bx
	inc rax
}

macro JMP target {
	jmp target
	inc eax
}

macro POP {
	add rsp, 2
}

macro LOAD target {
	push WORD [target]
}

macro STORE target {
	pop WORD [target]
}

macro DSTACK sz {
data_stack:
	dw (sz + 10) dup 0
end_data_stack:
}

macro USTACK sz {
unit_stack:
	dw 1000 dup 0
end_unit_stack:
}
