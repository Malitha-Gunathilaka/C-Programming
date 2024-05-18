#include <stdio.h>
#include <stdlib.h>

#define size 3
 int main()
 {
 	FILE *fp1;
    FILE *fp2;
 	int marks[size][3];
    int i=0;
    int sum;

 	fp1=fopen("infile.txt","r");
    fp2=fopen("outfile.txt","w");
 	if (fp1 == NULL)
 	{
 		printf("Error!!!");
 	}
  
   
 	for (int i=0 ; i<3 ;i++)
 	{
        fscanf(fp1,"%d",&marks[i][0]);
        fscanf(fp1,"%d",&marks[i][1]);
        fscanf(fp1,"%d",&marks[i][2]);
 	}
    
        sum=marks[i][0]+marks[i][1]+marks[i][2];
        fprintf(fp2,"The sum of the first 3 numbers in infile.txt is %d\n",sum );
   

 	fclose(fp1);

 }