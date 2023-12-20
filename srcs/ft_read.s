section .data
	extern __errno_location
section .text
	global ft_read

ft_read :
	mov rax, 0 ; numero de lappel de sys read avec les bons params(rdi, rsi, rdx)
	syscall
	cmp rax, 0
	jl error_handle
	ret

error_handle:
	neg rax ;absolute value of the syscall return
	mov rdi, rax
	call __errno_location wrt ..plt
	mov [rax], rdi ;change the value located at the address of rax
	mov rax, -1
	ret
