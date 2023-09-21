section .data
    format db 'Hello, %s', 0  ; Define a format string with a placeholder for a string argument
    msg db 'Helberton', 0      ; Define the string to be used as an argument for printf

section .text
    extern printf
    global main

main:
    mov edi, format
    mov esi, msg        ; Load the address of the string into esi
    xor eax, eax
    call printf
    mov eax, 0
    ret
