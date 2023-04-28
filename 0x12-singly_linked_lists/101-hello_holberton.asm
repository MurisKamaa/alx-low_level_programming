section .data
hello db 'Hello, Holberton!', 10, 0  ; 10 is the ASCII code for newline
format db '%s', 0

section .text
global main
extern printf

main:
push hello
push format
call printf
add rsp, 16

ret
