section .text
	global ft_strcpy

ft_strcpy:
	mov rax, rsi
	mov rdx, 0
	jmp loop_start
loop_start:
	cmp byte[rsi + rdx], 0
	je end_loop
	mov cl, [rsi + rdx]
	mov [rdi + rdx], cl
	inc rdx
	jmp loop_start

end_loop:
	mov byte [rdi + rdx], 0
	mov rax, rdi
	ret
