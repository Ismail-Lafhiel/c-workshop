#include<stdio.h>

void table(){
    int arr[10], i, j, range, max = 0, min = arr[0];


    printf("entrer le range du array: ");
    scanf("%d", &range);

    for (i = 0; i<range; i++){
        printf("entrer les valeurs du array: ");
        scanf("%d", &arr[i]);
    }

    for (j = 0; j<range; j++){
        printf("%d ", arr[j]);
    }

    for (int r = 0; r < range; r++){
        if(max < arr[r]){
            max = arr[r];
        }
    }
    for (int k = 0; k < range ; k++){
        if(min > arr[k]){
            min = arr[k];
        }
    }
    printf("\nle max est: %d", max);
    printf("\nle min est: %d", min);
}

int main(){

    table();
    return 0;

}