#include <stdio.h>

int main() {

    printf("Descubra o produto de 2 numeros");
    
    int NUMBER1, NUMBER2, PROD;
    
    scanf("%d", &NUMBER1);
    scanf("%d", &NUMBER2);
    
    PROD = NUMBER1 * NUMBER2;
    
    printf("PROD = %d\n",PROD);
    
    return 0;
}