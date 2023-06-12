#include <stdio.h>

int main(){
    int x, y, z;
    int *px, *py, *pz;

    px = &x;
    py = &y;
    pz = &z;

    puts("Digite o valor de x: ");
    scanf("%d",px);

    puts("Digite o valor de y: ");
    scanf("%d",py);

    *pz = *px + *py;

    printf("Resultado da soma de %d + %d é: %d\n",*px, *py, *pz);

    return 0;

}