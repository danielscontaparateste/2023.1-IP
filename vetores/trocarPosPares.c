/*Escreva um programa em C que dado um vetor, troque os elementos que estão nas
posições pares. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 11 // Considerar uma quantidade ímpar de elementos.
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

    // Trocar os elementos das posições pares.
    
    int aux;
    for (int k=0; k<TAM/2; k++){
        if (k%2==0){
            aux = v[k];
            v[k] = v[TAM-1-k];
            v[TAM-1-k] = aux;
        }    
    }

    puts("Vetor com elementos trocados: ");
    for (int k=0; k<TAM; k++){
        printf("%d ",v[k]);
    }

    return 0;
}

