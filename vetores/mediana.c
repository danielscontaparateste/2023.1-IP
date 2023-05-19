#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 11
#define QTD 100

int main(){
    int x[TAM];

    srand(time(NULL));
    // Geração dos números pseudo-aleatórios
    for(int k=0; k<TAM; k++){
        x[k] = rand() % QTD; // [0, QTD-1]
        // x[k] = 10 + rand() % QTD; // [10, 10 + QTD-1]
    }

    //Imprimir o vetor
    puts("Vetor gerado: ");
    for (int k=0; k<TAM; k++){
        printf("%d ",x[k]);
    }

    // Ordenar o vetor - crescente
    // Algoritmo de ordenação por seleção
    int aux;
    for (int k=0; k<TAM-1; k++){
        for (int j=k+1; j<TAM; j++){
            if (x[k]>x[j]){
                aux = x[k];
                x[k] = x[j];
                x[j] = aux;
            }
        }
    }

    printf("\n\n");

    //Imprimir o vetor
    puts("Vetor ordenado - crescente: ");
    for (int k=0; k<TAM; k++){
        printf("%d ",x[k]);
    }
    
    // Mediana
    float med;
    if (TAM%2!=0){
        med = x[TAM/2];
    }else{
        med = ( (float) (x[TAM/2] + x[TAM/2 - 1]) )/ 2;
    }

    printf("\n\n");

    printf("Mediana: %.2f\n",med);

    return 0;


}
