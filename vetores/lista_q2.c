/* Receber um vetor de 10 elementos do tipo float e apresentar a subtração do maior elemento pelo menor elemento */

#include <stdio.h>

#define TAM 10

int main(){
    float v[TAM]; // Cria o vetor de TAM elementos.
    float menor, maior;

    // Realiza a leitura dos dados para o vetor
    puts("Entre com os valores do vetor: ");
    for (int k=0; k<TAM; k++){
        scanf("%f",&v[k]);
    }

    // Exibindo o vetor na tela
    puts("Vetor fornecido: ");
    for (int k=0; k<TAM; k++){
        printf("%.2f\n",v[k]);
    }

    // Somatório
    
    menor = v[0]; // Assumindo que o primeiro elemento do vetor é o menor. 
    maior = v[0]; // Assumindo que o primeiro elemento do vetor é o maior.
    for (int k=1; k <TAM; k++){
        if (menor > v[k]) menor = v[k];
        if (maior < v[k]) maior = v[k];
    }

    // Saída 
    puts("---");
    printf("Menor elemento do vetor é: %.2f\n",menor);
    printf("Maior elemento do vetor é: %.2f\n",maior);

    return 0;

}