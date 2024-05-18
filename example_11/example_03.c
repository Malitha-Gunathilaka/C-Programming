/**************************
Author: Sachintha Pitigala
Purpose: Reading Strings in C
Create Date: 22/11/2022
Modified Date: 22/11/2022
***************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char first_name[20];
	char last_name[30];
	char middle_name[10];

	printf("Please enter your first name\n");
	
	scanf("%s",first_name);

	scanf("%s",last_name);

	printf("First Name: %s\n",first_name);
	printf("Last Name: %s\n",last_name);

	return 0;
}
