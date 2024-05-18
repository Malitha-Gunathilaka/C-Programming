#include <stdio.h>
void main()
{
int number[5] = {1, 11, 31, 4, 6};
//code fragment 1
for (int i = 0; i < 5; i++)
{
if ( i % 2 == 0 )
{
printf("%d\n", number[i] );
}
}

printf("\n");
printf("\n");

//code fragment 2
for (int i = 0; i < 5; i++)
{
if ( number[i] % 2 == 0 )
{
printf("%d\n", number[i] );
}
}
}
/* //code fragment 1
                 print element index number is even


    code fragment 2
    			print even number elements
                   */