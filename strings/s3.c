#include <stdio.h>
#include <string.h>

#define TAM 30

int main(){

    char str[TAM];

    puts("Entre com a string: ");
    scanf("%[^\n]",str);

    int k=0;
    while (str[k]!='\0'){
        printf("%c\n",str[k]);
        k++;
    }

    // for (int k=0; k<TAM; k++){
    //     printf("%u\n",str[k]);
    // }

    return 0;

}