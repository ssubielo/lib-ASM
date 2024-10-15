[bits 64]

global ft_strcpy

ft_strcpy:
    cmp rdi, 0
    je exit
    cmp rsi, 0
    je exit
    mov rax, rdi
L1: 
    cmp byte [rsi], 0
    je L2
    mov bl, byte [rsi]
    mov [rdi], bl
    inc rdi
    inc rsi
    jmp L1
L2:
    mov byte [rdi], 0
    je exit
exit:
    ret

section .note.GNU-stack
