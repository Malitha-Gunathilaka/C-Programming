/****************************************
Author: Sachintha Pitigala
Date Created: 20/10/2022
Date Modified: 20/10/2022
Purpose: File Processing in C
*****************************************/

#include <stdio.h>

int main()
{
	int marks1, marks2, marks3;

	//creating the file pointer
	FILE *fp;   //FILE *identifier;

	//opening the file to the file pointer
	fp = fopen("./data.txt","r");    //file-pointer = fopen("file path", "file opening mode")
									//file opening modes - r, w, a
									//file path - Absolute path vs relative path

	//Absolute file path
	//"Users/sachintha/Documents/UOK/2021_Sem_I/COSC_COST 11023/Class_Examples/Lecture_11/data.txt"

	//relative file path
	//"./data.txt"

	//read integer values stored in a external file
	fscanf(fp, "%d %d %d", &marks1, &marks2, &marks3);


	printf("Marks 1 = %d\n", marks1);
	printf("Marks 2 = %d\n", marks2);
	printf("Marks 3 = %d\n", marks3);

	fclose(fp);		//clode the data.txt file

	return 0;
}
