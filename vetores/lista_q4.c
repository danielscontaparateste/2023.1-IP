/* Receber um vetor de 10 elementos do tipo float e apresentar o maior elemento PAR */

#include <stdio.h>

#define TAM 10

int main(){
    int v[TAM]; // Cria o vetor de TAM elementos.
    int maior;

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
    int j;
    int flag = 0;
    for (j=0; j<TAM; j++){
        if (v[j]%2==0){
            maior = v[j];
            flag = 1;
            break;
        }
    }
    
    for (int k=j+1; k <TAM; k++){
        if ( (maior < v[k]) && (v[k] % 2 == 0) ){
            maior = v[k];
        }    
    }

    // Saída 
    puts("---");
    if (flag == 1) {
        printf("Maior elemento PAR do vetor é: %d\n",maior);
    }else{
        puts("O vetor não tem elementos pares.");
    }

    return 0;

}