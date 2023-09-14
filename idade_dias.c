#include <stdio.h>

int main() {

    int N, Y, M, D;

    printf("Descubra sua idade em dias");

    scanf("Digite sua idade%d", &N);

    Y = N / 365;
    N = N % 365;
    M = N / 30;
    D = N % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Y,M,D);

    return 0;
}