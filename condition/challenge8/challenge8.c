#include<stdio.h>

int main(){
    float note;

    printf("Saisir votre note: ");
    scanf("%f", &note);

    if(note >= 10){
        if(note < 12){
            printf("Mention passable");
        }
        else if(note >= 12 && note < 14){
            printf("Mention assez");
        }
        else if (note >= 14 && note < 16){
            printf("Mention assez bien");
        }
        else if(note >=16){
            printf("Mention bien");
        }

    }else{
        printf("Tu es recalé");
    } 


    return 0;
}