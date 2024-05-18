#include <stdio.h>

int read_input();
int square(int x);

int main()
{
	int input, answer;
	input = read_input();
	answer = square(input);
	
	printf("Square of %d is : %d \n", input, answer);
	
	return 0;
}

int read_input()
{
	int num;
	
	printf("Enter value: ");
	scanf("%d", &num);
	
	return num;
}

int square(int x)
{
	int sq;
	sq = x * x;
	
	return sq;
}