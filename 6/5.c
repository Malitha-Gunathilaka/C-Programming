#include <stdio.h>
int main()
{
	int x,even,multi_3,sumE=0,sumM=0;
	printf("Enter integers between 1 & 9 both inclusive, outside range to stop \n");


	while (x>=1 && x<=9)
	{
		printf("Enter integer :");
		scanf("%d",&x);
		even = x%2;
		//printf("%d \n",even);
		multi_3 =x%3;
		if (even==0)
		{
			sumE=sumE+1;
			//printf("%d \n ",sumE);
		}
		if (multi_3==0)
		{
			sumM=sumM+1;
		}
		
	}

	
	printf("Total no of even integer entered is %d \n",sumE);
	printf("Total no of multiples of 3 entered is %d",sumM);

	return 0;
}