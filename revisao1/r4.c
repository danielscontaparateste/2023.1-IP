#include <stdio.h>

int main(){
    int x, y;

    puts("Entre com o inicio da faixa: ");
    scanf("%d",&x);

    puts("Entre com fim da faixa: ");
    scanf("%d",&y);

    int a;
    if (x > y){
        a = x;
        x = y;
        y = a;
    }

    puts("====");
    for (int k=x; k<y; k++){
        if (k % 5 == 0) printf("%d\n",k );
    }

    return 0;
}