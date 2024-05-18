/****************************************
Author: Sachintha Pitigala
Date Created: 01/11/2022
Date Modified: 01/11/2022
Purpose: File Processing in C - reading using array
*****************************************/

#include <stdio.h>

#define SIZE 10

int main () 
{
	char stdno[SIZE][20];
	int marks[SIZE],i,count;
	char grade[SIZE];
	float gpa[SIZE];

	//creating the file pointer
	FILE *fp;

	//opening the file to the file pointer
	fp = fopen("student_data.txt","r");

	if(fp == NULL){
		printf("Unable to read the specified file.\n");
		return 0;
	}

	count = 0;
	while(fscanf(fp,"%s",stdno[count]) != EOF)
	{	
		fscanf(fp,"%d",&marks[count]);
		fscanf(fp," %c",&grade[count]);
		fscanf(fp,"%f",&gpa[count]);
		count++;
	}

	//closing the file
	fclose(fp);

	for(i = 0; i < count; i++){	
		printf("%s %d %c %f\n", stdno[i], marks[i], grade[i], gpa[i]);
	}

	return 0;

}