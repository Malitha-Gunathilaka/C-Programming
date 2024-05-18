#include <stdio.h>
#include <math.h>

int main()
{
	float value;
	
	printf("Please enter your number\n");
	
	//scan the user entered
	scanf("%f", &value);
	
	//find the cosine value of the user input
	printf("Cosine value of the entered number: %f\n", cos(value));
	
	//find the sin value of the user input
	printf("Sin value of the entered number: %f\n", sin(value));
	
	//raise the user value to the third power
	printf("Third power of the entered number: %f\n", pow(value, 3));
	
	//find the nearest intger value which is less than or equal to the user input
	printf("Nearest intger value which is less or equal to the entered number: %.0f\n", floor(value));
	
	//find the smallest integer that is greater than or equal to user input
	printf("Smallest integer that is greater or equal to the enterd number: %.0f\n", ceil(value));
	
	//find the natural log(e) of the user input
	printf("Natural log(e) of the entered number: %f\n", log(value));
	
	//find the log base 10 value of the user input
	printf("Log base 10 of the entered number: %f\n", log10(value));
	
	return 0;
}