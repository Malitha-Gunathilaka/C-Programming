#include <stdio.h>

void multi(int x, int y, int z);

int main()
{
	int n1, n2, n3;
	printf("Enter three integers: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	multi(n1, n2, n3);
	
	return 0;
}

void multi(int x, int y, int z)
{
	x *= 2;
	y *= 2;
	z *= 2;
	
	printf("values: %d %d %d", x, y, z);
}