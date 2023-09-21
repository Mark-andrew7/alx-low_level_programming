section .data
        hello db 'Hello, Holberton', 0
section .text
        global _start
_start:
        push rbp
        mov rbp, rsp
        mov edi, hello
        xor eax, eax
        call printf
        xor eax, eax
        pop rbp
        ret
