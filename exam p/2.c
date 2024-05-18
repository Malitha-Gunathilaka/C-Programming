#include<stdio.h>
int main()
{
	/*int c,ic;
	
	c=1;
	while (c<=4)
	{
		ic=1;
		while(ic<=(7-c)/2)
		{
			printf("*");
			ic++;
		}
		ic=1;
		while(ic<=c)
		{
			printf("@");
			ic++;
		}
		printf("\n");
		c++;
	}*/

	int i=0,x=0;
	do
	{
		if (i%5==0)
		{
			x++;
			printf("%d",x );
		}
		++i;

	}
	while (i<20);
	/*{
		if (i%5==0)
		{
			x++;
			printf("%d",x );
		}
		++i;
	}*/
	printf("\n x=%d",x);
}