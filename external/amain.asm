section .text

bits 64

    global sum
    
sum:
    mov eax, edi
    add eax, esi
    ret