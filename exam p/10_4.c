#include<stdio.h>

void primrnum();

int main()
{
primrnum();
}

void primrnum()
{
	//nt n1,n2,n3;
	//printf("enter 3 number \n");
	//scanf("%d %d %d",&n1,&n2,&n3);
	for (int j = 0; j<3; ++j)
	{		
    int n, flag=0;
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	if (n == 0 || n == 1)
		flag = 1;
	
	for (int i = 2; i <= n /2; ++i)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	
	if (flag == 0)
		printf("%d is a prime number.\n\n", n);
	else
		printf("%d is not a prime number.\n\n", n);


}	
}