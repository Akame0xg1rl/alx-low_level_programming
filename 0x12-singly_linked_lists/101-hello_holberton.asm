section .data
    msg db 'Hello, Helberton', 0xa, 0  ; Define the string to be printed with a newline character

section .text
    extern printf
    global main

main:
    mov edi, msg   ; Load the address of the string into edi
    xor eax, eax
    call printf
    mov eax, 0
    ret
