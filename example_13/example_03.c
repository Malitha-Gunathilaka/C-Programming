/****************************************
Author: Sachintha Pitigala
Date Created: 01/11/2022
Date Modified: 01/11/2022
Purpose: File Processing in C - reading different data types
*****************************************/

#include <stdio.h>

int main () 
{
	char stdno[20];
	int marks;
	char grade;
	float gpa;

	//creating the file pointer
	FILE *fp;

	//opening the file to the file pointer
	fp = fopen("student_marks.txt","r");

	if(fp == NULL)
	{
		printf("Unable to read the specified file.\n");
		return 0;
	}
	//reading values from the file
	fscanf(fp,"%s",stdno);
	fscanf(fp,"%d",&marks);
	fscanf(fp," %c",&grade);
	fscanf(fp,"%f",&gpa);

	printf("student no: %s marks: %d grade: %c GPA: %f\n",stdno, marks, grade, gpa);
	//closing the file
	fclose(fp);
	
	return 0;

}
