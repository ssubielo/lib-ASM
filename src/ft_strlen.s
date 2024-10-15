[bits 64]

global ft_strlen

ft_strlen:
    xor rax, rax
    cmp rdi, 0
    je exit
L1: 
    cmp byte [rdi], 0
    je exit
    inc rax
    inc rdi
    jmp L1
exit:
    ret

section .note.GNU-stack
