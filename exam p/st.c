#include<stdio.h>
#include<string.h>

int main()
{
	int count=0;
	char st[]="Never a foot far even ";
	for (int i = 0; i < strlen(st); ++i)
	{
		/* code */
		switch (st[i])
		{
		case 'a': count++;break;
		case 'e': count++;break;
		case 'i': count++;break;
		case 'o': count++;break;
		case 'u': count++;break;	
		}
	}
	printf("%d \n",count);

	int re;
	for (int i = 1; i <= strlen(st); ++i)
	{
		/* code */
		re=strlen(st)-i;
		printf("%c",st[re]);
	}
}