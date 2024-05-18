#include <stdio.h>

int mystery(int x, int y);

void main()
{
	int a = 2, b = 15;
	
	b = mystery(a, b);
	
	printf("a = %d, b = %d\n", a, b);
}

int mystery(int x, int y)
{
	int z;
	z = x * y;
	
	return z;
}