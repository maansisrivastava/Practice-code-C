//Bachgold problem

#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  printf("%d\n",a/2);
  while(a>1)
  {
  if(a==3)
  printf("3");
  else
  printf("2");
  a=a-2;
  }
  return0;
}