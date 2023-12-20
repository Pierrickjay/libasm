
section .text
	global ft_list_size

ft_list_size :
	mov rax, 0
	mov rcx, rdi; work with the address and not the value
	jmp lst_next
lst_next:
	cmp rcx, 0
	je end_loop
	inc rax
	mov rcx, [rcx + 8] ; the size of a ptr
	jmp lst_next

end_loop:
	ret
