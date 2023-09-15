#include<stdio.h>

int main(){

    //declaration
    int num;

    // inputs
    printf("entrer un nombre: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Pair");
    }
    else {
        printf("Impair");
    }

    return 0;
}