#include <stdio.h>

int nvalav(int arr[], int size);

int main()
{
	int a[10] = {1, 10, 20, 25, 34, 12, 4, 8, 7, 10};
	int nc = nvalav(a, 10);
	
	printf("Number of value less than average value is %d\n", nc);
	
	return 0;
}

int nvalav(int arr[], int size)
{
	int total = 0, count = 0;
	float avg;
	
	for(int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	
	avg = total / size;
	
	for(int j = 0; j < size; j++)
	{
		if (arr[j] < avg)
		{
			count++;
		}
	}
	return count;
}