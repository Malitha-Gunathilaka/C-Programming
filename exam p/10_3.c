/***Write a C function to find the largest number of 
 three user input numbers and display the largest number.***/

#include<stdio.h>

int number();

int count=0,y=0;
int main()
{
	number();
}

int number(int x)
{
	while (count<3)
	{
		printf("enter number ");
		scanf("%d",&x);
		//number(count);
		//printf("enter number");
		//scanf("%d",&number);
		if (y<x)
		{
			y=x;
		}
		 
		count++;
	}
	printf("%d\n",y );
	
}