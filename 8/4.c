#include <stdio.h>
int main()
{
	int original[5] = {45, 68, 78, 85, 90};
	int duplicate[5];
	int i;
	

	for(i=0; i<5; i++)
	{
		duplicate[i] = original[i];

		printf("duplicate[%d]=%d\n",i,duplicate[i] );
		//printf("\n");
		//printf("%d,",duplicate[i]);

	}

}