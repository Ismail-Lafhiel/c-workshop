#include <stdio.h>

int main()
{

    int day, month, year;
    printf("Entrez une date au format dd/mm/yyyy: ");
    scanf("%d%d%d", &day, &month, &year);
    // printf("%d", day);

    switch (month)
    {
    case 1:
        printf("La date que vous avez entrée est le %d-Janvier-%d.\n", day, year);
        break;
    case 2:
        printf("La date que vous avez entrée est le %d-Fevrier-%d.\n", day, year);
        break;
    case 3:
        printf("La date que vous avez entrée est le %d-Mars-%d.\n", day, year);
        break;
    case 4:
        printf("La date que vous avez entrée est le %d-Avril-%d.\n", day, year);
        break;
    case 5:
        printf("La date que vous avez entrée est le %d-Mai-%d.\n", day, year);
        break;
    case 6:
        printf("La date que vous avez entrée est le %d-Juin-%d.\n", day, year);
        break;
    case 7:
        printf("La date que vous avez entrée est le %d-Juiet-%d.\n", day, year);
        break;
    case 8:
        printf("La date que vous avez entrée est le %d-Aout-%d.\n", day, year);
        break;
    case 9:
        printf("La date que vous avez entrée est le %d-Septembre-%d.\n", day, year);
        break;
    case 10:
        printf("La date que vous avez entrée est le %d-Octobre-%d.\n", day, year);
        break;
    case 11:
        printf("La date que vous avez entrée est le %d-Novembre-%d.\n", day, year);
        break;
    case 12:
        printf("La date que vous avez entrée est le %d-Decembre-%d.\n", day, year);
        break;
    default:
        printf("La format n'est pas correcte");
        break;
    }

    return 0;
}
