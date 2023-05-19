#include <stdio.h>


int main(){

    int x, y, soma;

    for(;;){
        // Entrada de Dados
        puts("Digite o primeiro número: ");
        scanf("%d",&x);

        puts("Digite o segundo número: ");
        scanf("%d",&y);

        // Verifica se negativo 
        /* Exercício: Transforme as duas linhas condicionais a seguir em um apenas uma estrutura de decisão.  */
        if (x < 0) break;
        if (y < 0) break;

        // Processamento
        soma =  x + y;

        // Saída
        printf("%d + %d = %d\n",x,y,soma);

        if (soma % 2 ==0){
            puts("Resultado é PAR");
        }else{
            puts("Resultado é IMPAR");
        }
    }

    return 0;
}