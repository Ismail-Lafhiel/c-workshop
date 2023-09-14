#include<stdio.h>
#include <string.h>
int main(){
    
    char nom[10];
    char prenom[10];
    int age;
    char sexe[6];
    char numero[10];

    // nom 
    printf("Entrer votre nom: ");
    scanf("%s", &nom);
    // prenom 
    printf("Entrer votre prenom: ");
    scanf("%s", &prenom);
    // age 
    printf("Entrer votre age: ");
    scanf("%d", &age);
    // sexe 
    printf("Entrer votre sexe: ");
    scanf("%s", &sexe);
    // numero 
    printf("Entrer votre numero: ");
    scanf("%s", &numero);


    printf("Bonjour %s %s, tu as %d. votre sexe est %s et votre numero telephone est %s", prenom, nom, age, sexe, numero);
    // return 0;

}