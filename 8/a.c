#include <stdio.h>

void main(){

	int values[10] = { 2, 5, 8, 13, 14, 11, 74, 65, 34, 13};
	int i,odd=0;

	for(i=0; i<10; i++)
	{ if (values[i]%2 == 1)
		{ odd+=1;}
	}
	printf("odd numbers-%d\n",odd );
}