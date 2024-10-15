[bits 64]

section .text
    extern __errno_location
    global ft_read

ft_read:
    cmp rsi, 0
    je exit
    mov rax, 0
    syscall
    cmp rax,0
    jl error
    jmp exit
error:
    neg rax
    push rax
    call __errno_location wrt ..plt
    pop r12
    mov [rax], r12
    mov rax,-1
exit:
    ret

section .note.GNU-stack