#include<stdio.h>

int main(){
    int a, b; 

    printf("enter a: ");
    scanf("%d", &a);

    printf("enter b: ");
    scanf("%d", &b);

    // addition
    printf("a + b = %d\n", a+b);
    // substration
    printf("a - b = %d\n", a-b);
    // mutiplying
    printf("a * b = %d\n", a*b);
    // division
    printf("a / b = %d\n", a/b);
    // rest
    printf("a %% b = %d\n", a%b);
    

    return 0;
}