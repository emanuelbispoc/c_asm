section .text

bits 64

    global sum ;exportando a função
    
sum:
    mov eax, edi
    add eax, esi 
    ret
