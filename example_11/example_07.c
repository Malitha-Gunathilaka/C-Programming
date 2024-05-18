/**************************
Author: Sachintha Pitigala
Purpose: Strings Library Functions - String compare function
Create Date: 27/11/2022
Modified Date: 27/11/2022
***************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "abc";
	char str2[] = "abcd";
	char str5[] = "Bbcde";

	int value;

	value=strcmp(str1,str2);
	
	printf("return value of strcmp is = %d\n",value);

	return 0;
}
	