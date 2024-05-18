#include <stdio.h>
void main()
{
	int values[10] = { 2, 5, 8, 13, 14, 11, 74, 65, 34, 13};
	int i,max=values[0],min=values[0];

	for (i=0, i<10, i++)
	{
		if (max < values[i])
		{
			max=values[i];
		}
		if (min > values[i])
		{
			min=values[i];
		}
	}
	printf("%d\n",max );
	printf("%d\n",min );
}
