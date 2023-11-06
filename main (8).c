#include <stdio.h>
#include <stdlib.h>

double power(float,int);

 int main ()

  {
float a;
scanf("%f",&a);
 int b;
    scanf("%d",&b);

float s = power(a,b);
printf("%.3f",s);
     }

double power (float a,int b)

 {
  double p=1;
if(b>=0){
  for (int i=1;i<=b;i++)
{


  p*=a;}}
else

  for (int i=1;i<=-b;i++)
    p*=1/a;
  return p;

  }
