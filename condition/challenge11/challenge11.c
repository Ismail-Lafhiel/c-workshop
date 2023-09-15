#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

    srand(time(NULL));

    int random_day = rand() % 7;

    printf("%d", random_day);

    switch (random_day)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("thirsday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    
    default:
        break;
    }

    return 0;
}