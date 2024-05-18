#include <stdio.h>

int main()
{
	int numbers[20];
	int i;
	FILE *fp;
	fp=fopen("numbers.txt","r");

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
	printf("numbers[%d]-%d\n",i,numbers[i]);
	}





	return 0;
}