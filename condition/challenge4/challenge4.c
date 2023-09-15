#include<stdio.h>

#include <math.h>

int main(){
    double b, a, c, delta, x1, x2;

    printf("entrer les valeurs du a, b et c: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    delta = pow(b, 2) - 4*a*c;

    if(delta > 0){
        x1 = (-b + sqrt(delta))/ (2*a);
        x2 = (-b - sqrt(delta))/ (2*a);


        printf("alors l'équation admet deux solutions réelles notées x1 = %.2lf et x2 = %.2lf", x1, x2);
    }else if (delta == 0)
    {
        x1 = x2 = -b / (2*a);
        printf("alors l'équation admet une solution réelle double noté x1 = x2 = %.2lf", x1);
    }else{
        printf("alors l'équation n'admet pas de solution réelle");
    }
    
    
    return 0;

}