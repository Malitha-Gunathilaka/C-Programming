#include<stdio.h>
int main()
{
	int x=0;
	int values[10] = { 2, 5, 8, 13, 14, 11, 74, 65, 34, 13};

	for(int i=0; i<10; i++)
	{
		//printf("%i",values[4]);
		
		if (x<values[i])
		{
			x=values[i];
			
		}
	}
	printf("%i\n",x);
	}