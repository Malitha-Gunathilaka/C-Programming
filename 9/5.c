#include <stdio.h>

int main()
{
	int numbers[20];
	int i;
	FILE *fp,*fp1;
	fp=fopen("numbers.txt","r");
	fp1=fopen("processed_data.txt","w");


	if (fp == NULL)
	{
		printf("erro");
		return 0;
	}

	for(i=0 ;i<20 ;i++)
	{
		fscanf(fp,"%d",&numbers[i]);
		

	}	
	fclose(fp);

	for(i=0 ;i<20 ;i++)
	{
	fprintf(fp1,"%d\n",i,numbers[i]);
	}





	return 0;
}