#include <stdio.h>
void main()
{
	int count=0,sum=0;
	do
	{
		sum += count;
		count++;
	}
	while (count<10);
	printf("SUM-%d",sum);
}