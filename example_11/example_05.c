/**************************
Author: Sachintha Pitigala
Purpose: Strings Library Functions - String Concatenation
Create Date: 27/11/2022
Modified Date: 27/11/2022
***************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[50]="University";
	char string2[30]=" of";
	char string3[30]=" Kelaniya";
	
	printf("%s\n",strcat(string2," Serena"));

	printf("string1 = %s\n",string1);

	strcat(string1," Colombo");

	printf("string1 = %s\n",string1);

	return 0;
}
