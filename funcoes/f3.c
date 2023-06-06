#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 10

void imprimirVetor(int x[], int t){
    for (int k=0; k<t; k++){
        printf("%d ",x[k]);
    }
    printf("\n");
}

void imprimirMedia(int x[], int t){
    int soma = 0;
    for (int k=0; k<t; k++){
        soma += x[k];
    }

    printf("A média do vetor é: %.2f\n", ( (float) soma)/t);
}

int main(){
    int v[TAM];

    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        v[k] = rand() % MX;
    }

    imprimirVetor(v, TAM);

    imprimirMedia(v, TAM);

    return 0;


}
