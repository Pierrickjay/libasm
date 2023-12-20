section .text
	global ft_strcmp
ft_strcmp:
	mov rax, 0
	mov rdx, 0
	jmp loop_start
loop_start:
	mov cl, [rsi + rdx]
	mov al, [rdi + rdx]
	cmp al, cl
	jb end_loop_neg
	jg end_loop_pos
	cmp al, 0
	je end_loop
	inc rdx
	jmp loop_start
end_loop_neg:
	mov rax, -1
	ret

end_loop_pos:
	mov rax, 1
	ret
end_loop
	ret

