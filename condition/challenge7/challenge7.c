#include<stdio.h>
#include <ctype.h>


int main(){
    char alphabet;

    printf("entrer un alphabet: ");
    scanf("%c", &alphabet);

    int code = alphabet ;

    
    // printf("%x");



    if (code>= 65 && code <=90){
        printf("%c est un lettre majuscule", alphabet);
    }else{
        printf("%c est un lettre miniscule", alphabet);
    }

}