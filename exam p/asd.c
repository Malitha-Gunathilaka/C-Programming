#include<stdio.h>
#include<string.h>
int cal(int x,int y,char z)
{
	int result;
	switch (z)
	{
	case'+':result=x+y; break;
	case'-':result=x-y; break;
	case'*':result=x*y; break;
	case /:result=x/y; break;	
	}
	return result;
}
int main()
{
	printf("%d\n",cal(4,2,/) ); 
	// int x=0,i=0;
	// for(i;i<20;i++){
	// 	if (i%5==0)
	// 	{
	// 		x++;
	// 		printf("%d",x );
	// 	}
	
	// }
	// printf("\n %d\n",x );
	// char s1[30]="I love playing cricket";
	// printf("%d\n",(int)strlen(s1));
	// strcpy(s1,"maliya");
	// s1[15]='\0';
	// printf("%s\n",s1 );
	// //strcpy(s1,"maliya");
	// printf("%s\n",s1 );
	// int rows=4 ,k=1;
	// for (int i = 1; i <= rows; ++i)
	// {
	// 	/* code */
	// 	for (int j = 1; j <= i; ++j)
	// 	{
	// 		/* code */
	// 		printf("%d",k++ );
	// 		printf("\n");
	// 	}
	// }
	// int fun[5];
	// scanf("%d",&fun[1]);
	// printf("%d\n",fun[3] );

	// int a=3,b=7,c=2,m;
	// m=++c+b/a%c;
	// a+=b%c-a;
	//printf("%10.2f\n",61.4256);
	// 

	/*int num[10];
	for (int i = 0; i < 10; ++i)
	{
		
		printf("enter number: " );
		scanf("%d",&num[i]);
	}
	int max,min,sum=0;
	float avg;
	max=num[0];
	min=num[0];

	for (int i = 0; i < 10; ++i)
	{
		
		if (max<num[i])
		{
			max=num[i];
		}
		if (min>num[i])
		{
			min=num[i];
		}
		sum+=num[i];
	}
	avg=sum/10;
	printf("AVG=%.2f MAX=%d MIN=%d ",avg,max,min);
*/
	/*int i=3,a[10],p; 
for(i=0;i<10;i++) 
	a[i]=i*100; 
p = 5; 
for(i=0;i<3;i++) 
	a[p+i]=i+10;

for(i=0;i<10;++i) 
	printf("%d\n ",a[i]); 
return 0; 
*/


	/*
	int innerCount,count;
	count = 1;
	 while(count <= 4)
	  { 
innerCount = 1;
 while(innerCount <= (7 - count)/2) 
 { 
printf("*");
 innerCount++;
 } 
innerCount = 1; 
while(innerCount <= count)
 { 
printf("@"); 
innerCount++;
} 
printf("\n"); 
count++; 
}
*/



/*
char phrase[]="Introduction to programming is a fun course";

printf("%d\n",strlen(phrase) );
for (int i = 0; i < strlen(phrase); ++i)
{
	// if (phrase[i]=='a'||phrase[i]=='e'||phrase[i]=='i'||phrase[i]=='o'||phrase[i]=='u')
	// {

	// }
	// else
	// {
	// 	printf("%s\n",phrase[i] );
	// }
	switch (phrase[i])
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':	
	case 'u':
		break;
	default:
		printf("%c",phrase[i]);

	}
}
printf("   %d\n", 8/6*6/2);
*/
	// 


}