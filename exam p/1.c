#include<stdio.h>

int main()
{
	int num,x=1,y,z=1,k;

	printf("enter youer number->");
	scanf("%d",&num);

	while (num>=x)
	{

		y=0;
		//k=num-x;
		for(k=1;k<=num-x ;k++)
		{
			printf("  ");
		}
		while(z>y)
		{
			
			printf("*");
			y++;
		}

		printf("\n");
		x++;
		z+=2;
	}
	

}