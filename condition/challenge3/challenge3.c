#include<stdio.h>

int main (){
    int num1, num2, somme;

    // inputs
    printf("entrer le 1er nombre: ");
    scanf("%d", &num1);

    printf("entrer le 2eme nombre: ");
    scanf("%d", &num2);

    // calculer la somme 
    somme = num1 + num2;

    if(num1 == num2){
        somme *= 3;
        printf("la somme est: %d\n", somme);
        printf("les nombres sont identiques");
    }
    else{
        printf("la somme est: %d", somme);
        printf("les nombres ne sont pas identiques");
    }

    return 0;
}