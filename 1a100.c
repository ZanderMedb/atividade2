#include <stdio.h>

int main(){

    printf("Descubra os numeros ate 100");

    int i;

    for(i = 2; i <= 100; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}

