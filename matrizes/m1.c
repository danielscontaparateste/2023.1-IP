#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD 100
#define INI 0
#define LIN 3
#define COL 3

int main(){
    int mat[LIN][COL];

    srand(time(NULL));

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

    /***********
    * Somatório dos elementos da diagonal principal
    ************/ 

    int somaDiagPrinc = 0;
    
    /**** Estratégia 1 ****/

    // for (int k=0; k<LIN; k++){
    //     for (int j=0; j<COL; j++){
    //         // Quando k e j forem iguais, estamos nos elementos da diagonal principal.
    //         if (k==j){
    //             soma = soma + mat[k][j];
    //         }
    //     }
    // }

    /**** Estratégia 2 ****/
    for (int k=0; k<LIN; k++){
        somaDiagPrinc = somaDiagPrinc + mat[k][k];
    }


    /***********
    * Somatório dos elementos da diagonal secundária
    ************/ 

   int somaDiagSec = 0;
   for (int k=0; k<LIN; k++){
        somaDiagSec = somaDiagSec + mat[k][COL-1 - k];
    }

    puts("=======");
    printf("Somatório da diagonal principal : %d\n",somaDiagPrinc);
    printf("Somatório da diagonal secundária : %d\n",somaDiagSec);


    
   
    return 0;
}

