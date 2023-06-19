// Ler um vetor de 5 elementos e imprimir. 

#include <stdio.h>

#define TAM 5

int main(){
    int v[TAM];
    int *px = &v[0]; // int *px = v;

    puts("Entre com os dados do vetor");

    for (int k=0; k<TAM; k++){
        scanf("%d",px+k);
    }

    puts("=====");

    puts("Vetor digitado\n");
    for (int k=0; k<TAM; k++){
        printf("%d ",*(px+k));
    }
    printf("\n");

    return 0;

}