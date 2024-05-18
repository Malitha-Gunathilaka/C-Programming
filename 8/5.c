#include <stdio.h>
void main()
{
	int num[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Enter num[%d]",i );
		scanf("%d",&num[i]);
	}


	printf("The list of values are:\n\n");
	for (int i=0; i<5; i++)
	{
		printf("%d\n",num[i]);
	}


	printf("\nThe list of values printed in reverse are:\n\n");
	for (int i=4; i>=0; i--)
	{
		printf("%d\n",num[i]);
	}
}

