section .data
    hello db 'Hello, Holberton', 0
    format db "%s", 10, 0

section .text
    extern printf

    global main
    main:
        sub rsp, 8               ; Align stack on 16-byte boundary (64-bit)
        mov rdi, format          ; Set format string address
        mov rsi, hello           ; Set hello string address
        xor eax, eax             ; Clear eax register
        call printf              ; Call printf function
        add rsp, 8               ; Restore stack

        mov eax, 0               ; Exit status 0
        ret

