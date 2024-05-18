#include <stdio.h>
int main()
{
	int num,sum=0,X,Y;

	printf("Enter a positive no less than 1000:");
	scanf("%d",&num);

	if (num < 1000 && num > 0)
	{
		X=num;
		while (X != 0)
		{
			Y=X % 10;
			sum =sum+Y;
			X =X/10;
		}
		printf("Sum of the digits of %d is %d",num,sum);
	}
	else 
	{
		printf("Entered number is out of range");
	}
}