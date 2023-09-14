#include<stdio.h>

int main(){

    //declaring stage
    int a, b, c, d, somme, moyenne;

    // entering the inputs:

    printf("entrer la valeur de a: ");
    scanf("%d", &a);

    printf("entrer la valeur de b: ");
    scanf("%d", &b);
    
    printf("entrer la valeur de c: ");
    scanf("%d", &c);

    printf("entrer la valeur de d: ");
    scanf("%d", &d);

    //end entering the inputs

    // assigning somme and moy
    somme = a + b + c + d;

    // ---------- output ------------- 
    // somme 
    printf("La somme des nombres: %d", somme);

    // assigning moy
    moyenne = somme / 4;

    //moy
    printf("\nLa moyenne: %d", moyenne);

    return 0;
}