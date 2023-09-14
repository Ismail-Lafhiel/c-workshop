#include<stdio.h>

int main(){
    // declaration
    const float PI = 3.14;
    float r, circonference;

    // inputs

    printf("entrer le rayon du cercle: ");
    scanf("%f", &r);

    circonference = 2 * PI * r;

    printf("circonference de la cercle: %.2f m", circonference);
}