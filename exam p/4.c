#include<stdio.h>
int main()
{
	float sum=0;
	float zscore[10] = {1.2, 0.9, 0.8, 1.3, 1.4, 1.2, 1.8, 2.2, 2.7, 2.1};
	for(int i=0; i<10; i++)
	{
		sum=sum+zscore[i];
	}
	printf("%.1f",sum);
}