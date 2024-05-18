/****************************************
Author: Sachintha Pitigala
Date Created: 08/09/2022
Date Modified: 08/09/2022
Purpose: Two Dimensional Arrays in C (Omitting the first index
	at the declaration)
*****************************************/

#include <stdio.h>
 
int main () {

   /* an array with 4 rows and 4 columns*/
   int a[][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int i, j;
 
   /* output each array element's value */
   for ( i = 0; i < 16; i++ ) {

      
         printf("%d\t", a[i]);
      
      printf("\n");
   }
   
   return 0;
}