#include <stdio.h>
int main()
{
int i=1,n=1,x;
char sp;
printf("Please enter the height of the pyramid: ");
scanf("%d",&x);

while (i<=x)
{
	n=1;
	while (n<=i)
	{
		printf("*");
		n++;
	}
	while (x<=sp-i)
		{
			printf(" ");
			sp++;
		}
		sp++;
	printf("\n");
	i++;
}
}