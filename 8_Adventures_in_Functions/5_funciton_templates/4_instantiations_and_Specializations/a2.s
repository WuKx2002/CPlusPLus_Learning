;-------------------------------------------------------
;2.模板+实例化
;	#include "a"
;
;	template <typename T>
;	void f(T i);
;
;	template void f<int>(int i);  //使用f()模板生成int类型的实例(_Z1fIiEvT_:......)
;
;	int main(void)
;	{	
;		i = 1;
;	    double j = 2.2;
;		return 0;
;	}
;
;	template <typename T>
;	void f(T i)
;	{
;		i = 2;
;	}
;--------------------------------------------------------
	.file	"a.cpp"
	.text
	.globl	i
	.bss
	.align 4
i:
	.space 4
	.section	.text$_Z1fIiEvT_,"x"
	.linkonce discard
	.globl	_Z1fIiEvT_
	.def	_Z1fIiEvT_;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z1fIiEvT_
_Z1fIiEvT_:
.LFB2:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	$2, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$1, i(%rip)
	movsd	.LC0(%rip), %xmm0
	movsd	%xmm0, -8(%rbp)
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	-1717986918
	.long	1073846681
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
