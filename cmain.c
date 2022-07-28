#include <stdio.h>

extern int sum(int a, int b);


int main(int argv, char **agc){

    printf("%d\n", sum(3, 7));
    return 0;
}