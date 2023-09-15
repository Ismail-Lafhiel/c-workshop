#include<stdio.h>

int main(){

    char caractere;

    // inputs
    printf("Entrer votre caractere prefere: ");
    scanf("%c", &caractere);

    switch (caractere)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'u':
    case 'y':
    case 'o':
        printf("%c est un voyelle", caractere);
        break;
    default:
        printf("%c est non voyelle", caractere);
        break;
    }

    
    
    return 0;
}