/*Escreva um programa em C que dado um vetor, imprimi-o na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define QTD 100
#define INI 10

int main(){
    int v[TAM];

    srand(time(NULL));

    // Gera os números pseudoaleatórios
    for (int k=0; k<TAM; k++){
        v[k] = (rand() % QTD) + INI;
    }

    // Imprimir o vetor Gerado
    puts("Vetor gerado: ");
    for (int k=0; k<TAM; k++){
        printf("%d ",v[k]);
    }

    printf("\n\n");

    // Imprimir de forma reversa
    puts("Vetor na Ordem Inversa");
    // for (int k=TAM-1; k>=0; k--){
    //     printf("%d ",v[k]);
    // }

    for (int k=0; k<TAM; k++){
        printf("%d ",v[TAM-1-k]);
    }

    return 0;
}

