#include <stdio.h>
void main()
{
	float zscore[10] = {1.2, 0.9, 0.8, 1.3, 1.4, 1.2, 1.8, 2.2, 2.7, 2.1};
	float sum;
	int i;
	
	for (i=0; i<10; i++ )
	{
		sum=sum+zscore[i];
	}
	printf("Sum =%.1f",sum);
}