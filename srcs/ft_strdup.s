section .data
	extern __errno_location
	extern malloc
	extern ft_strcpy
	extern ft_strlen
section .text
	global ft_strdup

ft_strdup:
	call ft_strlen
	inc rax
	push rdi ; stock the first parametter in the stack so he doesn t get modifie
	mov rdi, rax ; stock the size of len we malloc in first parametter of malloc
	call malloc wrt ..plt
	cmp rax, 0 ;check malloc failed
	jl error_handle
	pop rsi ; pop it and attribute to the second param
	mov rdi, rax ; attribute malloc ptr to first param
	call ft_strcpy
	ret

error_handle:
	neg rax ;absolute value of the syscall return
	mov rdi, rax
	call __errno_location wrt ..plt
	mov [rax], rdi ;change the value located at the address of rax
	mov rax, -1
	ret



