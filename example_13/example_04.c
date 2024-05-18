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
	int marks[SIZE],i;
	char grade[SIZE];
	float gpa[SIZE];

	//creating the file pointer
	FILE *fp;

	//opening the file to the file pointer
	fp = fopen("student_marks.txt","r");

	if(fp == NULL){
		printf("Unable to read the specified file.\n");
		return 0;
	}

	for(i = 0; i < SIZE; i++){	
		//reading values from the file
		fscanf(fp,"%s",stdno[i]);
		fscanf(fp,"%d",&marks[i]);
		fscanf(fp," %c",&grade[i]);
		fscanf(fp,"%f",&gpa[i]);
	}

	//closing the file
	fclose(fp);

	for(i = 0; i < SIZE; i++){	
		printf("%s %d %c %f\n", stdno[i], marks[i], grade[i], gpa[i]);
	}

	return 0;

}