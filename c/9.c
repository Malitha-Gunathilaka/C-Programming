#include <stdio.h>
int main()
{
//constants declarations
const int RENT_RATE = 350;
   
int years = 3;     //# of years over which rent is computed  
int costOfRent;   //cost for renting 
   
//calculate the rent 
costOfRent = years * RENT_RATE;
   
//output the results
 printf("The cost per month for rent is:%i\n",RENT_RATE/12);
 printf("The number of years is: %i\n",years); 
 printf("The total cost of rent is:%i\n",costOfRent);

}
