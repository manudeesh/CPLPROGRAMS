#include<stdio.h>
int main()
{
    int a,b;
    float c;
    char op;
    printf("enter the operator");
    scanf("%c" , &op);
    printf(" enter the a and b:" );
    scanf("%d%d",&a,&b);
    if(op=='+')
    {
      c=a+b;
    }
    else if(op=='-')
    {
      c=a-b;
    }
    else if(op=='*')
    {
      c=a*b;
    
    }
    else if(op=='/')
    {
      if(b==0)
      {
        printf("denominator cannot be zero");
        return 1;
      
      }
      else {
        c=(float)a/b;

      }

    }
    else if(op=='%')
    {
      if(b==0)
      {
        printf("denominator cannot be zero");
        return 1;

      }
      else 
      {
        c=a%b;

      }
      
    }
      else 
      {
        printf("invalid  input");
        return 1;

      }
      printf(" the result is =%f",c);
      return 0;

}

  

