#include <stdio.h>

int read_input();
int lead(int n);

int main()
{
	int input, answer;
	input = read_input();
	answer = lead(input);
	
	printf("The leading digit of %d is %d \n", input, answer);
	
	return 0;
}

int read_input()
{
	int num;
	
	printf("Enter value: ");
	scanf("%d", &num);
	
	return num;
}

int lead(int n)
{
	while(n >= 10)
	{
		n = n / 10;
	}

	return n;
}