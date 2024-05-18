#include <stdio.h>
int main()
{
  float hp,op,hw,ws;

  printf("Enter Hourly Pay Rate: ");
  scanf("%f",&hp);

  printf("Enter the overtime pay rate: ");
  scanf("%f",&op);

  printf("Enter the Hours worked: ");
  scanf("%f",&hw);

  if (hw>40){
    float over_time = hw - 40;
    ws = (hp*40) + (over_time*(op*hp));
  }
  else{
    ws = (hp*hw);
  }

  printf("Your Weekly Salary is: %0.f ",ws);
  return 0;
}