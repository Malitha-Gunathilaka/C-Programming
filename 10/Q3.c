#include <stdio.h>

void find_largest();

int main (){
	find_largest();
}

void find_largest()
{
	int n1, n2, n3;
	printf("Enter your three numbers here: \n");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if (n1 > n2 && n1 > n3)
	{
		printf("Largest number: %d", n1);
	}
	else if(n2 > n3)
	{
		printf("Largest number: %d", n2);
	}
	else
	{
		printf("Largest number: %d", n3);
	}
}