#include <stdio.h>

#define TAM 3

int main(){

    int v[TAM];
    float m;

    puts("Entre com os valores do vetor: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",&v[k]);
    }

    int soma = 0;
    for (int k=0; k<TAM; k++){
        soma += v[k];
    }

    m = ( (float) soma ) / TAM;

    printf("Média: %.2f\n",m);

    return 0;

}