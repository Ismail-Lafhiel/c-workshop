#include<stdio.h>

int max_2(int num1, int num2){

    if(num1 - num2 > 0){
        return num1;
    }
    else{
        return num2;
    }
}

int max_4(int num1, int num2, int num3, int num4){

    if (max_2(num1, num2) - max_2(num3, num4) > 0){
        return max_2(num1, num2);
    }else{
        return max_2(num3, num4);
    }
    
}


int main(){
    int max = max_4(133, 45, 44, 111);
    printf("%d", max);
    return 0;
}