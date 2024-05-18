#include <stdio.h>
void main()
{
	int n;
	long long int sum=1;
	for(n=5; n<=50;n+=5)
	{
		//printf("%d,",n);
		sum=sum*n;
		
	}
	printf("%lld",sum);
}