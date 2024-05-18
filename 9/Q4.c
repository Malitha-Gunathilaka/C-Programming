#include <stdio.h>

int main()
{
	char player[15];
	int runs, count = 0, total = 0;
	float avg = 0;
	
	FILE *fp;
	
	fp = fopen("Q4.txt", "r");
	
	if(fp == NULL)
	{
		printf("Error in opening file \n");
		return 0;
	}
	
	do
	{
		fscanf(fp, "%s %d", player, &runs);
		printf("%s\t \t %d\n", player, runs);
		total += runs;
		count++;
	}
	while (!feof(fp));
	
	fclose(fp);
	
	avg = total / count;
	
	printf("Total Runs Scored\t %d\n", total);
	printf("Average for the Year\t %.2f\n", avg);
	
	return 0;
}