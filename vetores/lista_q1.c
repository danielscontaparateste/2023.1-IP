/* Receber um vetor de 10 elementos e apresentar o somatório */

#include <stdio.h>

#define TAM 10

int main(){
    int v[TAM]; // Cria o vetor de TAM elementos.
    
    // Realiza a leitura dos dados para o vetor
    puts("Entre com os valores do vetor: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",&v[k]);
    }

    // Exibindo o vetor na tela
    puts("Vetor fornecido: ");
    for (int k=0; k<TAM; k++){
        printf("%d\n",v[k]);
    }

    // Somatório
    int soma = 0; // Variável para acumular o valor do somatório
    for (int k=0; k <TAM; k++){
        soma = soma + v[k];
    }

    // Saída 
    puts("---");
    printf("Somatório do vetor é: %d\n",soma);

    return 0;

}