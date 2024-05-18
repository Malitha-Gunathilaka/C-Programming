#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two integers:");
	scanf("%d %d",&a,&b);

	if (a < b)
	{
		printf("The Largest Number is:%d",b);
	}
	else
	{
		printf("The Largest Number is: %d",a);
	}
}