#include <stdio.h>
#include <string.h>

#define TAM 30

int main(){
    char str[TAM];
    int qtd;

    puts("Entre com o seu nome: ");
    // fgets(str, TAM, stdin);
    gets(str);

    printf("String digitada: %s\n",str);

    qtd = strlen(str);

    printf("A quantidade de caracteres na string é: %d\n",qtd);

    return 0;

}