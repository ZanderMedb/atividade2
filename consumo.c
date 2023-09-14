#include <stdio.h>
 
int main() {

    printf("Descubra o consumo na unidade de medida km/l");
 
    double X, Y, CONSUM;
    
    
    scanf("%lf", &X);
    
    scanf("%lf", &Y);
    
    CONSUM = X / Y;
    
    printf("%.3lf km/l\n", CONSUM);
    
    return 0;
}