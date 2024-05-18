#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int ar[], int size);
void display_array(int ar[], int size);

int main()
{
	int values[10];
	fill_array(values, 10);
	display_array(values, 10);
	return 0;
}

void fill_array(int ar[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 1000;
	}
	
}

void display_array(int ar[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", ar[i]);
	}
}