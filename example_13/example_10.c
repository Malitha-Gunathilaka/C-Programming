/****************************************
Author: Sachintha Pitigala
Date Created: 20/10/2022
Date Modified: 20/10/2022
Purpose: File Processing in C - Output to an external file
*****************************************/

#include <stdio.h>

#define SIZE 10

int main () 
{
	char stdno[SIZE][20];
	int marks[SIZE][3];
	int i;

	//creating the file pointer
	FILE *fp;

	//opening the file to the file pointer
	fp = fopen("student_data.txt","r");

	if(fp == NULL)
	{
		printf("Unable to read the specified file.\n");
		return 0;
	}

	i = 0;

	while(fscanf(fp,"%s",stdno[i]) != EOF)
	{
		//reading values from the file
		fscanf(fp,"%d",&marks[i][0]);
		fscanf(fp,"%d",&marks[i][1]);
		fscanf(fp,"%d",&marks[i][2]);
		i++;
	}

	//first step
	FILE *outfp;

	//second step
	outfp = fopen("Processed_Information.txt", "w");

	fprintf(outfp, "Student Number \t Test 01 \t Test 02 \t Test 03\n");
	
	for(int j = 0; j < i; j++)
	{
		fprintf(outfp,"%10s %10d %15d %15d\n",stdno[j], marks[j][0],marks[j][1],
		marks[j][2]);
	}

	//closing the file
	fclose(fp);
	fclose(outfp);

	return 0;
}