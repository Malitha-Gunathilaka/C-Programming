/**************************
Author: Sachintha Pitigala
Purpose: Strings in C - declaration
Create Date: 22/11/2022
Modified Date: 22/11/2022
***************************/

#include <stdio.h>

int main()
{
	char first_name[20]="Saman";
	char last_name[30]="Jayasinghe";
	char middle_name[10]={'K','a','l','u','m','\0'};

	printf("Your first name is %s|\n",first_name);
	printf("Your last name is %s|\n",last_name);
	printf("Your middle name is %s|\n",middle_name);

	return 0;
}