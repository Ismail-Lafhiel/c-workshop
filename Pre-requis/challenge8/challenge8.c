#include<stdio.h>

int main (){
    int num;

    printf("entrer votre numero: ");
    scanf("%d", &num);

    printf("le nombre octal est %o\n", num);
    printf("le nombre hexadecimal est %x\n", num);
}