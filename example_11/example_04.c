/**************************
Author: Sachintha Pitigala
Purpose: Strings Library Functions - Strlen
Create Date: 27/11/2022
Modified Date: 27/11/2022
***************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char string1[]="University";
	char string2[]=" of";
	char string3[]=" Kelaniya";
	
	printf("length of string1 = %u\n",strlen(string1));
	printf("length of string2 = %u\n",strlen(string2));
	printf("length of string3 = %u\n",strlen(string3));

	return 0;
	
}
