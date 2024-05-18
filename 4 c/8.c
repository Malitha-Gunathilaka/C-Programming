#include <stdio.h>
int main()
{
	int A,X;
	printf("Enter a number:");
	scanf("%d",&A);
	X=A%2;
	
	if (X==1)
	{
		printf("Your Number is Odd");
	}	
	else
	{
		printf("Your Number is Even");
		
	}
}