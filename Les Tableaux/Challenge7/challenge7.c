#include <stdio.h>

int main()
{

    int T[5][5], L, C, somme = 0, i, j;

    printf("\nentrer le nombre des line: \n");
    scanf("%d", &L);
    printf("\nentrer le nombre des column: \n");
    scanf("%d", &C);

    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("element: [%d][%d]: ", i, j);
            scanf("%d", &T[i][j]);
            somme += T[i][j];
        }
    }

    printf("Tableau: \n");
    for (i = 0; i < L; i++)
    {
        for (j = 0; j < C; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    printf("la somme des elements du tableau: %d", somme);

    return 0;
}