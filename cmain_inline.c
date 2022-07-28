#include <stdio.h>

int sum(int a, int b);


int main(int argv, char **argc){
    printf("%d", sum(3, 5));
    return 0;
}

__asm__(
    "sum:\n"
    "  lea (%edi, %esi), %eax\n"
    "  ret"
);