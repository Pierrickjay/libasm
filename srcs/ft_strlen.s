section .text
	global ft_strlen

ft_strlen :
	mov rax, 0
	jmp loop_start

loop_start:
	cmp byte [rdi + rax], 0
	je end_loop
	inc rax
	jmp loop_start

end_loop:
	ret


