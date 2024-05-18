#include <stdio.h>

int main()
{
	int n, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0;
	
	FILE *fp;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL)
	{
		printf("Error in opening file \n");
		return 0;
	}
	
	do
	{
		fscanf(fp, "%d", &n);
		switch (n)
		{
			case 1:
			n1 += 1;
			break;
			
			case 2:
			n2 += 1;
			break;
			
			case 3:
			n3 += 1;
			break;
			
			case 4:
			n4 += 1;
			break;
			
			case 5:
			n5 += 1;
			break;
			
			case 6:
			n6 += 1;
			break;
			
			case 7:
			n7 += 1;
			break;
		}
	}
	while(!feof(fp));
		
	printf("Frequency of number 1: %d\n", n1);
	printf("Frequency of number 2: %d\n", n2);
	printf("Frequency of number 3: %d\n", n3);
	printf("Frequency of number 4: %d\n", n4);
	printf("Frequency of number 5: %d\n", n5);
	printf("Frequency of number 6: %d\n", n6);
	printf("Frequency of number 7: %d\n", n7);
	
	return 0;
}