#include<stdio.h>
int main()
{
	int count=0;
	char a;
	char word[10]={'a', 'v', 's', 'a', 'a', 'a', 't', 'a', 'b', 'c'};
	for (int i = 0; i < 10; ++i)
	{
		/* code */
		if ('a'== word[i])
		{
			count++;
		}
	}
	printf("%i\n",count );
}