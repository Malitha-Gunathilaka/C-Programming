#include <stdio.h>

void add();
void sub();
void div();
void mul();


int main ()
{
	char opt;
	
	printf("Select the operation (+, -, *, /): ");
	scanf("%c", &opt);
	
	switch(opt)
	{
		case '+':
		add();
		break;
		
		case '-':
		sub();
		break;
		
		case '*':
		mul();
		break;
		
		case '/':
		div();
		break;
		
		default:
		printf("\nInvalid operation");
	}
	return 0;
}

void add()
{
	float x, y, res;
	
	printf("Enter the first number: ");
	scanf("%f", &x);
	
	printf("Enter the second number: ");
	scanf("%f", &y);
	
	res = x + y;
	
	printf("The answer is: %f", res);
}

void sub()
{
	float x, y, res;
	
	printf("Enter the first number: ");
	scanf("%f", &x);
	
	printf("Enter the second number: ");
	scanf("%f", &y);
	
	res = x - y;
	
	printf("The answer is: %f", res);
}

void mul()
{
	float x, y, res;
	
	printf("Enter the first number: ");
	scanf("%f", &x);
	
	printf("Enter the second number: ");
	scanf("%f", &y);
	
	res = x * y;
	
	printf("The answer is: %f", res);
}

void div()
{
	float x, y, res;
	
	printf("Enter the first number: ");
	scanf("%f", &x);
	
	printf("Enter the second number: ");
	scanf("%f", &y);
	
	if(y == 0)
	{
		printf("\nDivisor cannot be zero");
	}
	else
	{
		res = x / y;
		printf("The answer is: %f", res);
	}
}