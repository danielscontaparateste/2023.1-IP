/* Ordenação por seleção */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define QTD 100

int main(){

    int v[TAM];
    
    srand(time(NULL));

    // Gerar o vetor de forma pseudo-aleatória
    for (int k=0; k<TAM; k++){
        v[k] = rand() % QTD;
    }

    // Imprimir o vetor
    puts("Vetor não ordenado");
    for (int k=0; k<TAM; k++){
        printf("%d ",v[k]);
    }
    printf("\n");

    // Algoritmo de ordenação - decrescente
    int aux;
    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (v[k]<v[j]){
                aux = v[k];
                v[k] = v[j];
                v[j] = aux;
            }
        }
    }

    // Imprimir o vetor
    puts("=====");
    puts("Vetor ordenado");
    for (int k=0; k<TAM; k++){
        printf("%d ",v[k]);
    }
    printf("\n");

    return 0;

}