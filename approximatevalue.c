//Approximate value

#include <stdio.h>
int main()
{
  float a,b,c;
  scanf("%f",&a);
  scanf("%f",&b);
  if(b>a)
  {
  c=b-a;
  if(c<=0.5)
    printf("Approximate number");
  else
    printf("Not an Approximate number");
  }
  else
  {
    c=a-b;
    if(c<=0.5)
     printf("Approximate number");
    else
     printf("Not an Approximate number");
  }
return 0;
}