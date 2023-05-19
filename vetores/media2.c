#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define QTD 10

int main(){

    int v[TAM];
    float m;

    srand(time(NULL));

    // Gerar o vetor de forma pseudo-aleatória
    for (int k=0; k<TAM; k++){
        v[k] = rand() % QTD;
    }

    // Imprimir o vetor
    for (int k=0; k<TAM; k++){
        printf("%d ",v[k]);
    }
    printf("\n");

    int soma = 0;
    for (int k=0; k<TAM; k++){
        soma += v[k];
    }

    m = ( (float) soma ) / TAM;

    printf("Média: %.2f\n",m);

    return 0;

}