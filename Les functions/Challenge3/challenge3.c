#include<stdio.h>

int PCGD(unsigned int num1, unsigned int num2){
    if (num1 < num2){
        num1, num2 =num2, num1;
    }

    for (int i = num2; i > 0; i--){
        if(num1 % i == 0 && num2 % i == 0){
            return i;
        }
    }
    

}


int main(){
    printf("%d", PCGD(221, 782));
    return 0;
}