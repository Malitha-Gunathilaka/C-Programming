/**************************
Author: Sachintha Pitigala
Date Created: 01/11/2022
Date Modified: 01/11/2022
Purpose: File Processing in C - Usage of fgets
***************************/

#include <stdio.h>

int main()
{
	char lines[20][50];
	int i;

	//creating the file pointer
	FILE *fp;

	//opening the file to the file pointer
	fp = fopen("uok.txt","r");

	if(fp == NULL)
	{
		printf("Unable to read the specified file.\n");
		return 0;
	}
	
	i = 0;
	
	while(fgets(lines[i], 50, fp))   //fgets(char array, no of characters, file pointer)
	{
		i++;
	}
	
	for(int j = 0; j < i; j++)
	{
		printf("lines[%d] : %s\n",j, lines[j]);
	}

	return 0;
}