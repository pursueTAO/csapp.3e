	.file	"invoke.c"
	.text
	.globl	P
	.type	P, @function
P:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	movq	%rdi, %rbp
	movq	%rsi, %rdi
	movl	$0, %eax
	call	Q@PLT
	movslq	%eax, %rbx
	movq	%rbp, %rdi
	movl	$0, %eax
	call	Q@PLT
	cltq
	addq	%rbx, %rax
	addq	$8, %rsp
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	popq	%rbp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE0:
	.size	P, .-P
	.ident	"GCC: (Debian 8.2.0-14) 8.2.0"
	.section	.note.GNU-stack,"",@progbits
