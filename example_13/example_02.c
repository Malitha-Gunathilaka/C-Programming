/****************************************
Author: Sachintha Pitigala
Date Created: 01/11/2022
Date Modified: 01/11/2022
Purpose: File Processing in C 
*****************************************/

#include <stdio.h>

int main () 
{

	int marks;

	//creating the file pointer
	FILE *fp;

		printf("Unable to read the specified file.\n");
		return 0;
	}
	
	//reading values from the file
	//opening the file to the file pointer
	fp = fopen("data2.txt","r");

	if(fp == NULL)
	{
	fscanf(fp,"%d",&marks);

	printf("marks = %d\n",marks);

	//closing the file
	fclose(fp);

	return 0;

}
