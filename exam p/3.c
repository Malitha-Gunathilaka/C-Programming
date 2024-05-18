#include<stdio.h>
int main()
{
	int num[10];
	int max,min;
	float avg;

	for (int i = 0; i < 10; ++i)
	{
		/* code */
		printf("Enter you number : ");
		scanf("%d",&num[i]);
	}
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		if (max<=num[i])
		{
			max=num[i];
		}

		if (min>=num[i])
		{
			min=num[i];
		}
		avg+=num[i];

	}
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%.2f\n",avg/10);
	
}