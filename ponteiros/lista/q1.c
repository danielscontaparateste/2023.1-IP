// Escreva um programa que leia duas variáveis do tipo float e reporte a de maior valor.

#include <stdio.h>

int main(){

    float x, y;
    float *px = NULL;
    float *py = &y;

    px = &x;

    puts("Digite o primeiro número: ");
    scanf("%f",px);

    puts("Digite o segundo número: ");
    scanf("%f",py);

    if (*px > *py){
        printf("O primeiro valor (%.2f) é o maior\n",*px);
    }else{
        printf("O segundo valor (%.2f) é o maior\n",*py);
    }
    return 0;
}