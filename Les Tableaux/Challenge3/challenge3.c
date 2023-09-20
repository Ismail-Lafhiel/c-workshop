#include <stdio.h>

void sort()
{
    int arr[10], i, j, tmp, range;

    printf("entrer le range du array: ");
    scanf("%d", &range);

    for (i = 0; i < range; i++)
    {
        printf("entrer les valeur: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < range; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n \n");
    for (i = 0; i < range; i++)
    {
        for (j = i + 1; j < range; j++)
        {
            // tri decendent
            // if (arr[i] < arr[j])
            // {
            //     tmp = arr[i];
            //     arr[i] = arr[j];
            //     arr[j] = tmp;
            // }
            // tri ascendent
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (i = 0; i < range; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    sort();

    return 0;
}