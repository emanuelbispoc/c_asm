/*
    Neste programa estamos entendo o funcionamento da vinculação do C com Assembly
    Então no programa teremos a definição de um Triângulo retângulo.
    A função do Assembly será simplesmente criar um arquivo com as informações do nosso triangulo   

*/

//TODO: Criar uma função que defina os angulos ALPHA e o BETA

#include <stdio.h>


extern void writingFile(char triang); // Enviaremos o nosso triangulo para nossa
                                                //função do assembly

float num1, num2;

typedef struct TriangRect
{
    float hipo, catA, catB;
    float alpha, beta;

}TriangRect;

void main(){

    TriangRect triang1; 

    printf("Digite o primeiro cateto");
    scanf("%f", &num1);

    triang1.catA = num1;

    printf("Digite o segundo cateto");
    scanf("%f", &num2);

    triang1.catB = num2; 
}