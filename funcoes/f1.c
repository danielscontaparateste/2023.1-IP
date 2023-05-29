#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b){
    int r;
    r = a + b;
    return r;
}

int subtrair(int a, int b){
    return (a-b);
}

int multiplicar (int a, int b){
    return (a*b);
}

float dividir (int a, int b){
    float r;
    r = ((float) a) / b;
    return r;
}

void menu(){
    puts("1. Somar");
    puts("2. Subtrair");
    puts("3. Multiplicar");
    puts("4. Dividir");
}

int main(){
    int x, y, op;
    float res;
    puts("Digite o primeiro numero: ");
    scanf("%d",&x);
    puts("Digite o segundo numero: ");
    scanf("%d",&y);

    puts("Digite uma das opções a seguir: ");
    menu();
    scanf("%d",&op);

    switch(op){
        case 1:
            res = somar(x,y);
        break;
        case 2:
            res = subtrair(x,y);
        break;    
        case 3:
            res = multiplicar(x,y);
        break;
        case 4:
            res = dividir(x,y);
        break;
        default:
            puts("Opção Inválida");
            exit(1);
    }

    printf("Resultado da operação: %.2f\n",res);

    return 0;

}