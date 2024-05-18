/****************************************
Author: Sachintha Pitigala
Date Created: 08/09/2022
Date Modified: 08/09/2022
Purpose: Two Dimensional Arrays in C
*****************************************/

#include <stdio.h>

int main () 
{
   //data-type identifier[row number][column number];
   int MARKS[3][500]; 
   int i,j;

   /* read the values from the user */
   for ( i = 0; i < 3; i++ ) {
      for ( j = 0; j < 5; j++ ) 
      {
         scanf("%d", &MARKS[i][j]);
      }
   }
   /* output each array element's value */
   for ( i = 0; i < 3; i++ ) {

      for ( j = 0; j < 5; j++ ) 
      {
         printf("%d\t", MARKS[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}