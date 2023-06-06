#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 30

int obterPrimeiraOcorrencia(char str[TAM], char c){
    int k = 0;
    while(str[k]!='\0'){
        if (str[k++] == c)return k;
    }
    return -1; 
}


int main(){
    char str1[TAM], ch, primeiraOcorrencia;
    
    puts("Entre com a primeira string: ");
    scanf("%[^\n]",str1);
    getchar();

    puts("Entre com o caractere: ");
    scanf("%c",&ch);

    primeiraOcorrencia = obterPrimeiraOcorrencia(str1, ch);

    if (primeiraOcorrencia!=-1){
        printf("Posição da 1a Ocorrência de %c em %s: %d\n",ch,str1, primeiraOcorrencia);
    }else{
        puts("O caractere digitado não existe na string. ");
    }
    return 0;
}