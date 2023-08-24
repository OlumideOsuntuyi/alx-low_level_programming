section .data
    format db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    mov edi, format     ; Load the format string address
    xor eax, eax        ; Clear eax register
    call printf        ; Call the printf function
    mov eax, 0          ; Set the return value to 0
    ret                 ; Return from the main function

