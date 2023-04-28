section .data
message db "Hello, Holberton", 10, 0   ; define the message to be printed

section .text
global _start

_start:
; call printf with the message string
push message
call printf
add esp, 4    ; pop the argument off the stack

; exit the program
mov eax, 1    ; system call for exit
xor ebx, ebx  ; return 0
int 0x80      ; invoke the system call
