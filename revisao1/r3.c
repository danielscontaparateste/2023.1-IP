#include <stdio.h>

int main(){

    // printf("%d\n",0);
    // printf("%d\n",1);
    // printf("%d\n",2);
    // printf("%d\n",3);
    // printf("%d\n",4)

    // for (int k=0; k<5; k++){
    //     printf("%d\n",k);
    // }

    for (int k=0; k<5; k++) printf("%d\n",k);

    // int k=0;
    // while(k<5){
    //     printf("%d\n",k);
    //     k++;
    // }

    puts("===");

    int k=0;
    while(k<5) printf("%d\n",k++);

    puts("===");
    
    k = 0;
    do{
       printf("%d\n",k++); 
    }while(k<5);


    return 0;
}