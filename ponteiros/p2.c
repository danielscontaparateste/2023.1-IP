#include <stdio.h>

/* Protótipo de Funções */

// int somar(int, int);
void somar(int, int, int *);

int main(){
    int x, y, z;
    int *px, *py, *pz; // Declaração dos ponteiros.

    // Atribuindo os endereços das variáveis aos ponteiros.
    px = &x;
    py = &y;
    pz = &z;

    /**** A partir desse ponto, apenas uso dos ponteiros *****/

    // Leitura dos dados
    puts("Digite o valor de x: ");
    scanf("%d",px);

    puts("Digite o valor de y: ");
    scanf("%d",py);

    // *pz = *px + *py;

    // Processamento com passagem por referência.
    somar(*px, *py, pz); // z = somar(x, y);

    // Saída. Observe que é possível imprimir o ponteiros com o %p.
    printf("Resultado da soma de [%p] %d + [%p] %d é: [%p] %d\n",px,*px, py, *py, pz, *pz);

    return 0;

}

// int somar(int a, int b){
//     int c;
//     c = a + b;
//     return c;
// }

void somar(int a, int b, int *pr){
    *pr = a + b;
}