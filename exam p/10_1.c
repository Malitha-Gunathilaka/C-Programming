/****************************************
Author:Malitha
Date Created:2022/12/24
Date Modified:
Purpose:00012
*****************************************/
#include <stdio.h>
//include the math library here
#include<math.h>
int main () {
float value;
printf("Please enter your number\n");
//scan the user entered
scanf("%f", &value);
//find the cosine value of the user input
printf("%f \n", cos(value) );
//find the sin value of the user input
printf("%f \n", sin(value));
//raise the user value to the third power
printf("%f \n", pow(value,3));
//find the nearest integer value which is less than
printf("%f \n", floor(value));
//or equal to the user input
/*printf("%f \n" );
//find the smallest integer that is greater than
printf("%f \n" floor(value));
//or equal to user input
printf("%f \n" ); */
//find the natural log(e) of the user input
printf("%f \n", log(value));
//find the log base 10 value of the user input
printf("%f \n", log(value));
return 0;
}