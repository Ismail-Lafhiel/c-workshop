#include <stdio.h>

int main()
{

    int num, i;

    printf("entrer un nombre: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            continue;
        }else{
            printf("%d est nombre premier\n", num);
            break;
        }
    }

    // if(num % 2 == 0){
    //     printf("%d est un nombre premier", num);
    // }else{
    //     printf("%d est un nombre non premier", num);
    // }

    return 0;
}