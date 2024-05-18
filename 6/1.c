#include <stdio.h>
int main()
{
int i=1,n=1,x;
printf("Please enter the height of the pyramid: ");
scanf("%d",&x);

while (i<=x)
{
	n=1;
	while (n<=i)
	{
		printf("%d",i);
		n++;
	}
	printf("\n");
	i++;
}
}