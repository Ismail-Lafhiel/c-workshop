#include <stdio.h>

int main (){

    double x;

    printf("entrer le nombre x: ");
    scanf("%lf", &x);

    //condition
    if (x > 0){
        printf("%lf est un nombre positif", x);
    }else if(x < 0){
        printf("%lf est un nombre negatif", x);
    }else {
        printf("%lf est un nombre null", x);
    }
    //end condition

    return 0;
}