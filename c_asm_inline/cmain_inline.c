#include <stdio.h>

int sum(int a, int b);


void main(){
    printf("%d", sum(3, 5));
}

__asm__(
    "sum:\n"
    "  lea (%edi, %esi), %eax\n"
    "  ret"
);