/****************************************
Author: Sachintha Pitigala
Date Created: 08/09/2022
Date Modified: 08/09/2022
Purpose: Multidimensional Arrays in C
*****************************************/

#include <stdio.h>
 
int main () {

  int a[2][3][2];
   int i, j, k;

   /* output each array element's value */
   for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 3; j++ ) {

         for( k = 0; k < 2; k++) {

            scanf("%d", &a[i][j][k] );
         }
      }
   }
 
   /* output each array element's value */
   for ( i = 0; i < 2; i++ ) {

      for ( j = 0; j < 3; j++ ) {

      	for( k = 0; k < 2; k++) {

         	printf("a[%d][%d][%d] = %d\t", i,j,k, a[i][j][k] );
         }
         printf("\n");
      }
   }
   
   return 0;
}