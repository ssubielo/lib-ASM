[bits 64]

global ft_strcmp

ft_strcmp:
    cmp rdi, 0
    je exit
    cmp rsi, 0
    je exit
    xor rax,rax
L1: 
    mov al, byte [rsi]
    cmp byte [rdi], al
    jl retLower
    jg retUpper
    cmp byte [rdi], 0
    je exit
    cmp byte [rsi], 0
    je exit
    inc rdi
    inc rsi
    jmp L1
retLower :
    mov rax, -1
    ret
retUpper :
    mov rax, 1
    ret
exit:
    ret

section .note.GNU-stack