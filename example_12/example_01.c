/****************************************
Author: Sachintha Pitigala
Date Created: 08/09/2022
Date Modified: 08/09/2022
Purpose: One Dimensional Arrays in C
*****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main () 
{
   srand(time(0));

   int PHYS[10], CHEM[10], MATH[10]; 
   int i,j;
 
         
   for ( i = 0; i < 10; i++ ) {
      PHYS[i] = rand() % 100; 
      CHEM[i] = rand() % 100;
      MATH[i] = rand() % 100;
   }
   
   /* output each array element's value */
   printf("PHYS \t CHEM \t   MATH\n");
   for (j = 0; j < 10; j++ ) {
      printf("%3d %7d %10d\n", PHYS[j], CHEM[j],MATH[j] );
   }
 
   return 0;
}