#include <stdio.h>
void main()
{
int sum=0,x=1,count=0;
do 
{
sum=sum+x;
x=x+2;
count++;
}
while (count<30);
printf(" sum of the first 30 positive odd integers-%d",sum);


}