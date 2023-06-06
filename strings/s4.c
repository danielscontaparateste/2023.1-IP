#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 30

int main(){
    char str1[TAM], str2[TAM];
    
    puts("Entre com a primeira string: ");
    scanf("%[^\n]",str1);
    getchar();

    puts("Entre com a segunda string: ");
    scanf("%[^\n]",str2);

    int k = 0, count = 0;
    // do{
    //     count++;
    // }while(str1[k++]!='\0');

    // Contar quantidade de elementos da string
    while(str1[k++]!='\0') count++;

    //Concatenar
    k=0;
    while(str2[k]!='\0'){
        str1[count + k] = str2[k];
        k++;
    }

    printf("Count: %d\n",count);

    printf("String concatenada: \n %s\n",str1);

    return 0;
}