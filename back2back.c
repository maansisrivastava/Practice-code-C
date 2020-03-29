//Back to back 

#include <stdio.h>
int main()
{
  int n,fd,ld,sum=0;
  scanf("%d",&n);
  ld=n%10;
  fd=n;
  while(n>=10)
  {
    n=n/10;
  }
  fd=n;
  sum=fd+ld;
  printf("%d",sum);

 return 0;
}