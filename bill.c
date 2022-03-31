#include<stdio.h>
int main()
{
  float units,total;
  char a[50];
  float charges;
  printf("enter the your name:\n ");
  scanf("%s",a);
  printf("enter the number of units consumed:");
  scanf("%f",&units);
  if(units>1&&units<=200)
  {
    charges=units*0.8;
  }
  else if(units>200&&units<=300)
  {
    charges=0.8*200+0.9*(units-200);
  }
  else if(units>300)
  {
    charges=0.8*200+0.9*100+1*(units-300);
  
  }
  total=charges+100;
  if(total>400)
  {
    total=total+(0.15*total);
  }
  printf("Name = %s \n",a);
  printf("units consumed=%f\n",total);
  return 0;


}