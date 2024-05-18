#include <stdio.h>
int main()
{
	char Cha,Out;

	printf("Enter your character:");
	scanf("%c",&Cha);

	if (Cha < 103)
	{
		Out = Cha - 32;
		printf("Output is:%c",Out);
	}

	else
	{
		printf("Output is:X ");
	}

	
}