/**************************
Author: Sachintha Pitigala
Purpose: Strings in C - terminating character in c-string
Create Date: 22/11/2022
Modified Date: 22/11/2022
***************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char first_name[20]="Saman";
	char last_name[30]="Jayasinghe";
	char middle_name[10]={'K','a','l','u','m','\0'};

	int index=0;
	printf("Your First Name is from loop: ");
	while(first_name[index]!='\0')
	{
		printf("%c",first_name[index]);
		index++;
	}
	
	printf("\n");

	return 0;
}
