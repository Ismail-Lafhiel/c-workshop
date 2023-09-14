#include<stdio.h>
#include<math.h>

int main(){

    int x1, x2, y1, y2, distance;

    // inputs
    printf("entrer les cordonnes du point 1: ");
    scanf("%d %d", &x1, &y1);

    printf("entrer les cordonnes du point 2: ");
    scanf("%d %d", &x2, &y2);
    // end inputs

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("La distance entre les deux points est: %d", distance);
    return 0;
}