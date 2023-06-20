// Dado um vetor X, conte a quantidade de ocorrências de um numero y em X.

#include <stdio.h>

#define TAM 3

int main(){

    int x[TAM];
    int *px = x; // int *p = &v[0];
    int y;
    int *py = &y;
    int count;
    int *pc = &count;
    
    puts("Entre com os elementos do vetor: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",px+k);
    }

    puts("Entre com o valor de y: ");
    scanf("%d",py);

    // Processamento
    
    *pc = 0;
    for (int k=0; k<TAM; k++){
        if ( *(px+k) == *py ) {
            *pc = *pc + 1;
        }

    }    

    printf("A quantidade de ocorrências do valor %d é: %d\n",*py, *pc);

    return 0;

}