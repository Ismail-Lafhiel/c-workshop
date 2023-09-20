#include<stdio.h>
#include<string.h>


int main(){

    // Initialiser un tableau avec le texte suivant : "Quel sinistre mot !"

    char text[] = "Quel sinistre mot!", lettre;
    int position_m, position_s, i;

    // Trouver et afficher à quelle position se trouve la lettre 'm'
    for (i = 0; i < strlen(text); i++){
        if(text[i] == 'm'){
            position_m = i;
            break;
        }
    // Même chose pour la première lettre 's'
    }
    for (i = 0; i < strlen(text); i++){
        if(text[i] == 's'){
            position_s = i;
            break;
        }
    }

    printf("\n%d est la position du m\n", position_m);
    printf("\n%d est la position du premier s\n", position_s);

    // Mettre la lettre 'm' à la place de 's' et vice versa
    for (i = 0; i < strlen(text); i++){
        if(text[i] == 's'){
            text[i] = 'm';
        }else if(text[i] == 'm'){
            text[i] = 's';
        }
    }

    //Afficher le texte ainsi modifié
    printf("\nLe text a ete modifie \"%s\"\n", text);

    //Demander à l’utilisateur de saisir une lettre quelconque

    printf("\nveuillez entrer un lettre: ");
    scanf("%c", &lettre);

    //Chercher cette lettre dans le texte et afficher sa position ou un message d’erreur si elle est absente
    for (i = 0; i < strlen(text); i++){
        if(text[i] == lettre){
            printf("\nla lettre '%c' a ete localise sur %d\n", lettre, i);
            break;
        }
    }
    if(i == strlen(text)){
        printf("\nErreur : La lettre '%c' est manquante dans le texte.\n", lettre);
    }
    


    return 0;
}