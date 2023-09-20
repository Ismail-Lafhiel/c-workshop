#include<stdio.h>
#include<string.h>


int main(){

    char arrayOfChars[100];
    int nbrChars = 0, i;

    printf("entrer votre nom: ");
    scanf("%s", &arrayOfChars);

    for (i = 0; arrayOfChars[i] != '\0'; i++){
        nbrChars++;
    }

    printf("\nNombre des characters dans votre nom: %d\n", nbrChars);

    return 0;
}