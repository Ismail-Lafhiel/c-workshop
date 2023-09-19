#include <stdio.h>

int permuter(int num1, int num2)
{
                        //exemple x = 4 et y = 5
    num1 = num1 + num2; // x = 4 + 5 = 9;
    num2 = num1 - num2; // y = x(9) - 5;
    num1 = num1 -num2; // x = x - y c-a-d x = 9 - 4 = 5
                       // alors x = 5 et y = 4

    return printf("a = %d, b = %d", num1, num2);
}

int main()
{
    int a, b;

    printf("Type a number: \n");

    scanf("%d", &a);

    printf("Type a number: \n");

    scanf("%d", &b);

    printf("a = %d - b = %d \n", a, b);

    permuter(a, b);

    return 0;
}


// #include <stdio.h>

// int test(int x, int y){
//     // Code to swap 'x' and 'y'
// 	x = x + y; // x now becomes 15
// 	y = x - y; // y becomes 10
// 	x = x - y; // x becomes 5
//     return printf("x = %d et y = %d", x, y);
// }

// int main()
// {

// 	// printf("After Swapping: x = %d, y = %d", x, y);
//     test(45, 11);

// 	return 0;
// }
