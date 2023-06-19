// Receber um número iterativamente e informar o menor valor fornecido.

#include <stdio.h>

int main(){
    int x; 
    int *px = &x;
    int menor;
    int *pMenor = &menor;

    puts("Digite o número: ");
    scanf("%d",px);

    *pMenor = *px;

    while(*px>=0){
        if (*px < *pMenor){
            *pMenor = *px;
        }
        printf("O menor número fornecido foi: %d\n",*pMenor);

        puts("Digite o número: ");
        scanf("%d",px);
    }

    // Exercício: reescrever com o do-while.

    return 0;

}