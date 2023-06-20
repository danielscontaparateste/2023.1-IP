// Dado um vetor X, imprima Y com os elementos de X na ordem inversa.

#include <stdio.h>

#define TAM 3

int main(){

    int x[TAM], y[TAM];
    int *px = x; // int *p = &v[0];
    int *py = y;

    puts("Entre com os elementos do vetor: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",px+k);
    }

    // Processamento
    for (int k=0; k<TAM; k++){
        *(py+k) = *(px + TAM-1 -k);
    }    

    puts("Elementos do vetor y: ");
    for (int k=0; k<TAM; k++){
        printf("%d\n",*(py+k));
    }
    return 0;

}