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

macro YIELD co_idx {
	local next_inst, after_yield
	; yield to the main thread
	xchg rsp, QWORD [rcx]
	xchg rax, QWORD [rcx + 8]
	xchg rbx, QWORD [rcx + 16]
	push QWORD [rcx + 24]	
	call next_inst
next_inst:
	pop QWORD [rcx + 24]
	add QWORD [rcx + 24], (after_yield - next_inst)
	ret
after_yield:
}

macro CHECK_LIMITS {
	local no_yield
	cmp rax, 1000000
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
