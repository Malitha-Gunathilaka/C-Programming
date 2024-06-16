

#include <stdio.h>
#include <string.h>

int main()
{
	char source[] = "Fundamentals of";
	char target[50] = "Programming";

	printf("Source String = %s\n",source);
	printf("Target string = %s\n",target);

	strcpy(target,source);

	printf("Target string after strcpy = %s\n",target);
	printf("Source string after strcpy = %s\n",source);

	return 0;
}
