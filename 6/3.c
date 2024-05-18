#include <stdio.h>
int main() {
   int i, sp, x, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &x);
   i = 1;
   while (i <= x) 
   {
      
      k = 0;
      sp = 1;

      while ( sp <= x - i) 
      {
         printf(" ");
         sp++;
      }
      while (k != 2 * i - 1) 
      {
         printf("*");
         k++;
      }
      printf("\n");
      i++;
   }
   return 0;
}