#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, sum = 0;
	
	FILE *fp1;
	
	fp1 = fopen("infile.txt", "r");
	
	if(fp1 == NULL)
	{
		printf("Error in opening file \n");
		return 0;
	}
	
	fscanf(fp1, "%d %d %d %d", &n1, &n2, &n3, &n4);
	fclose(fp1);
	
	sum = n1 + n2 + n3 ;
	
	FILE *fp2;
	
	fp2 = fopen("outfile.txt", "w");
	
	if(fp2 == NULL)
	{
		printf("Error in opening file \n");
		return 0;
	}
	
	fprintf(fp2, "The sum of the first 3 numbers in infile.txt is %d", sum);
	fclose(fp2);
	
	
}