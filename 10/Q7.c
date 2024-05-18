#include <stdio.h>

int read_input();
int factorial(int n);

int main()
{
	int input, answer;
	input = read_input();
	answer = factorial(input);
	
	printf("Factorial(%d) = %d \n", input, answer);
	
	return 0;
}

int read_input()
{
	int num;
	
	printf("Enter value: ");
	scanf("%d", &num);
	
	return num;
}

int factorial(int n)
{
	int fact = 1;
	for(int i = 1; i <= n; ++i)
	{
		fact *= i;
	}
	
	return fact;
}