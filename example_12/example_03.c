/****************************************
Author: Sachintha Pitigala
Date Created: 08/09/2022
Date Modified: 08/09/2022
Purpose: Two Dimensional Arrays in C (Initialization Methods)
*****************************************/

#include <stdio.h>
 
int main () {

   /* an array with 5 rows and 3 columns*/
   int a[5][3] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 5; i++ ) 
   {
      for ( j = 0; j < 3; j++ ) 
      {
         printf("\t %d ", a[i][j]);
      }
      printf("\n");
   }
   
   return 0;
}