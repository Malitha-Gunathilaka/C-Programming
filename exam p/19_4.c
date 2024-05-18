#include <stdio.h> 
void eggs(int *x, float *y, char *ch); 
int main() 
{
int a=10,d=100; 
float c= 20;
 char ch = 'D';

printf("ch = %d\n",ch);
 eggs(&a,&c,&ch); 
 printf("a= %d \t c = %f \t ch = %c\n",a,c,ch);
  return 0; 
} 

void eggs(int *x, float *y, char *ch){ 
	printf("Starting of the Fun 1:%d, %f, %c\n",*x,*y,*ch);
	 *x=*x+1; 
*y=*y*5; 
*ch='C';
 printf ("End of the Fun 1:%d, %f, %c\n",*x,*y,*ch); 
} 
