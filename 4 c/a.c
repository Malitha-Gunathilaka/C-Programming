#include <stdio.h>

int main()
{
	float X;
	float Y;

	printf("Enter the distance in inches :");
	scanf("%f",&X);
	Y = X*2.54;
	printf("Distance %f inches is = %.2f cms",X,Y);
	return 0;
}
