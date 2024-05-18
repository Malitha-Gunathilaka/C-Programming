#include <stdio.h>
void main()
{
	int count=1,sum=0;
	do
	{
		sum += count;
		count += 3;
	}
	while (count<30);
	printf("SUM-%d",sum);
}