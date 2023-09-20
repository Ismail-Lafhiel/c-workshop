#include <stdio.h>

int show()
{
    int arr[10], L, c;
    printf("entrer la longueur du array: ");
    scanf("%d", &L);
    for (int val = 0; val < L; val++)
    {
        printf("entrer les valeur du array: ");
        scanf("%d", &arr[val]);
    }

    for (int i = 0; i < L; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    show();
    return 0;
}