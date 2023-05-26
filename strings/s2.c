#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 30

int main(){
    char str1[TAM], str2[TAM];
    char str3[TAM];

    puts("Entre com a primeira string: ");
    // fgets(str1, TAM, stdin);
    scanf("%[^\n]",str1);
    // fflush(stdin);
    getchar();

    puts("Entre com a segunda string: ");
    // fgets(str2, TAM, stdin);
    scanf("%[^\n]",str2);

    if (strcmp(str1, str2)==0){
        puts("As strings fornecidas são iguais. Tente novamente");
        exit(1);
    }

    strcat(str1,str2);

    strcpy(str3, str1);

    printf("String concatenada: \n %s\n",str1);

    printf("A quantidade total de caracteres (após concatenação) é: %lu\n",strlen(str1));

    printf("String copiada: \n %s\n",str3);

    return 0;
}