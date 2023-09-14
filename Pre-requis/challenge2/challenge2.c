#include<stdio.h>

int main(){
    float F;
    float C;

    // user enter the temperature on F 
    printf("enter the temperature in F: ");
    scanf("%f", &F);

    // formula to switch from F to C 

    C = (F + 32)/1.8;

    printf("Temperature in C is %.2f", C);
}