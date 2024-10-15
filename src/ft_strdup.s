[bits 64]

section.text:
    extern malloc
    extern ft_strlen
    extern ft_strcpy
    global ft_strdup

ft_strdup:
    cmp rdi, 0
    je exit
    mov r13, rdi
    call ft_strlen
    inc rax
    mov rdi, rax
    call malloc wrt ..plt
    mov rdi, rax
    mov rsi, r13
    call ft_strcpy
exit:
    ret

section .note.GNU-stack