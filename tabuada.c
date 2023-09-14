#include <stdio.h>

int main(){

    int N, i;

    scanf("Digite o nuemro que deseja saber a tabuada %d", &N);

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, N, i * N);
    }

    return 0;
}

