#include <stdio.h>
int main()
{
	char word[10]={'a','v','s','j','a','g','t','a','b','c'};
	int i,sum=0;
	char a;

	for(i=0; i<10; i++)
	{
		if ('a' == word[i]) 
		{
			sum=sum+1;
		}
	}
	printf("How many 'a' characters in the word array --> %d \n",sum );
}