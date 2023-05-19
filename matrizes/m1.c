#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD 100
#define INI 0
#define LIN 5
#define COL 5

int main(){
    int mat[LIN][COL];

    // Gerar a matriz
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            mat[k][j] = INI + rand() % QTD;
        }
    }

    // Imprimir a matriz
    for (int k=0; k<LIN; k++){
        for (int j=0; j<COL; j++){
            printf("%5d",mat[k][j]);
        }
        printf("\n");
    }

    // Casa: Escreva um programa que imprima o somatório dos elementos da diagonal principal.
   
    return 0;
}

