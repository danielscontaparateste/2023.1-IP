#include <stdio.h>
#include <stdlib.h>

int main(){

    int x, y, op, res; 
    float res1;

    for(;;){

        // MENU
        puts("\nOperação: \n");
        puts("1. Somar");
        puts("2. Subtrair");
        puts("3. Multiplicação");
        puts("4. Divisão (Inteira)");
        puts("Entre com o código da operação escolhida");
        scanf("%d",&op);

        // Entrada de Dados
        puts("Digite o primeiro número: ");
        scanf("%d",&x);

        puts("Digite o segundo número: ");
        scanf("%d",&y);

        // Verifica se negativo 
        /* Exercício: Transforme as duas linhas condicionais a seguir em um apenas uma estrutura de decisão.  */
        // if (x < 0) break;
        // if (y < 0) break;
        // Solução: 
        if ( (x<0) || (y<0) ) break;

        switch(op){
            case 1:
                res =  x + y;
            break;    
            case 2: 
                res =  x - y;
            break;
            case 3: 
                res =  x * y;    
            break;
            case 4:
                res1 =  ((float) x) / y;    
            break;
            default: 
                puts("Código de operação inválido");    
                exit(1);
        }
        
        // // Processamento
        // soma =  x + y;

        // Saída
        if (op!=4){
            printf("Resultado: %d\n",res);

            if (res % 2 ==0){
                puts("Resultado é PAR");
            }else{
                puts("Resultado é IMPAR");
            }
        }else{
            printf("Resultado: %.2f\n",res1);
        }     
    }

    return 0;
}