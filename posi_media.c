#include <stdio.h>

int main(){

    printf("Descubra a soma e a media de numeros");

    float N, soma, media;
    int positivos, i;
    media = 0;
    positivos = 0;

    for(i = 0; i < 6; i++){
        scanf("%f", &N);
        if(N >= 0){
            positivos++;
            soma = soma + N;
        }
    }

    media = soma / positivos;

    printf("%d valor\n", positivos);
    printf("%0.1f\n", media);

    return 0;
}

