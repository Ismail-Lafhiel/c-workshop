#include<stdio.h>
int main(){

    int num, numReverse1, numReverse2, numReverse3;

    printf("entrer le nombre prefere: ");
    scanf("%d", &num);

    numReverse1 = num % 10;
    numReverse2 = (num / 10) % 10;
    numReverse3 = (num / 100) % 10;

    printf("Le nombre reverse du %d est %d%d%d", num, numReverse1, numReverse2, numReverse3);
}