#include<stdio.h>

int main(){

    printf("Descubra a area do circulo com valores desejados");

    double R,A;
    
    scanf("%lf", &R);


    A = 3.14159 * R * R;

    printf("A=%.4lf\n", A);

	return 0;
}  