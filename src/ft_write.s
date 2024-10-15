[bits 64]

section .text
    extern __errno_location
    global ft_write

ft_write:
    cmp rsi, 0
    je exit_error
    mov rax, 1
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
exit_error:
    mov rax,-1
    ret
exit:
    ret

section .note.GNU-stack