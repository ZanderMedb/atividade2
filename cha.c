#include <stdio.h>

int main(){

    int t, a, b, c, d, e, cont;

    scanf("%d", &t);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(t == a){
        cont++;
    }
    if(t == b){
        cont++;
    }
    if(t == c){
        cont++;
    }
    if(t == d){
        cont++;
    }
    if(t == e){
        cont++;
    }

    if (cont == 1) {
        printf("cha branco %d\n", cont);
    } else if (cont == 2){
        printf("cha verde %d\n", cont);
    } else if (cont == 3){
        printf("cha preto %d\n", cont);
    } else if (cont == 3){
        printf("cha preto %d\n", cont);
    } else if (cont == 4){
        printf("cha de ervas %d\n", cont);
    }

     return 0;
    
    }

    


