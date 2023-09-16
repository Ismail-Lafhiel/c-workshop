#include <stdio.h>
int main() {
   int nombre_line, i, j, espace;
   printf("Enter the number of nombreline: ");
   scanf("%d", &nombre_line);
   for (i = 1; i <= nombre_line; ++i)
    //
     {
      for (espace = 1; espace <= nombre_line - i; ++espace) printf("  ");
      for (j = i; j <= 2 * i - 1; ++j) printf("* ");
      for (j = 0; j < i - 1; ++j) 
      printf("* ");
      printf("\n");
   }
   return 0;
}
