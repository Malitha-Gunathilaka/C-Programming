/****************************************
Author: Sachintha Pitigala
Date Created: 01/11/2022
Date Modified: 01/11/2022
Purpose: File Processing in C - Usage of EOF
*****************************************/
#include <stdio.h>

#define SIZE 10

int main () {
	char stdno[SIZE][20];
	int marks[SIZE][3];
	int count;

	//creating the file pointer
	FILE *fp;

	//opening the file to the file pointer
	fp = fopen("student_data_2.txt","r");

	if(fp == NULL)
	{
		printf("Unable to read the specified file.\n");
		return 0;
	}
	count = 0;
	while(fscanf(fp,"%s",stdno[count]) != EOF)
	{	
		//reading values from the file
		fscanf(fp,"%d",&marks[count][0]);
		fscanf(fp,"%d",&marks[count][1]);
		fscanf(fp,"%d",&marks[count][2]);
		count++;		
	}

	printf("Student Number \t Test 01 \t  Test 02 \t  Test 03\n");
	for(int j = 0; j < count; j++)
	{
		printf("%10s %10d %15d %15d\n",stdno[j], marks[j][0],marks[j][1],
															marks[j][2]);
	}
	
	//closing the file
	fclose(fp);

	return 0;
}
