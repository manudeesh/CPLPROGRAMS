#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c ,desc,r1,r2 ,real,imag ;

  printf(" enter the values of a , b ,c:\n");
  scanf("%f%f%f",&a,&b,&c);
  if(a==0)
  { 
    printf("it is the linear equation\n");
    return 1;
  }
  desc=(b*b)-(4*a*c);
  printf("the discriminant is %f:\n",desc);
  if(desc==0)
  {
    printf("roots are real and equal\n");
    r1=-b/(2*a);
    r2=r1;
    printf("the roots are r1=%f and r2=%f\n",r1,r2);

  }
  else if(desc>0)
  { 
    printf("roots are real and distinct \n");
    r1=-b+sqrt(desc)/(2*a);
    r2=-b-sqrt(desc)/(2*a);
    printf(" the roots are r1=%f and r2=%f\n",r1,r2);
  }
  else 
  { printf("roots are imaginary\n");
  real=-b/(2*a);
  imag=sqrt(-desc)/(2*a);
  printf("the roots are r1=%f +i %f\n",real,imag);
  printf("r2=%f -i %f\n",real,imag);


  }
return 0;

}
