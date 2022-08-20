segment .data

   LF equ 0xA

   OPEN_FILE equ 0x5
   CLOSE_FILE equ 0x6
   WRITE_FILE equ 0x4

   OPEN_CREATE equ 0x40
   OPEN_WRITE equ 0x1
   OPEN_APPEND equ 0x400

   SYS_CALL equ 0x80

section .data

arq: db "mytrianRect"
fd: dq 0

section .text

global writingFile ;exportando a função
    
_start:
        mov rax, OPEN_FILE
        mov rbx, arq
        mov rcx, OPEN_CREATE+OPEN_WRITE+OPEN_APPEND
        mov rdx, 0o664
        int SYS_CALL

        mov [fd], rax

writingFile:
        mov rax, WRITE_FILE
        mov rbx, fd
        mov rcx, rdi
        int SYS_CALL

        ret

closingFile:
        mov rax, CLOSE_FILE
        mov rbx, fd
        int SYS_CALL

ending:
        mov rax, 0x1
        mov rbx, 0x0
        int SYS_CALL

       
