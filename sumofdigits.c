//Sum of digits

#include<stdio.h>
int main()
{
 int a,n,i,s=0,r;
  scanf("%d",&a);
  scanf("%d",&n);
  for(i=0;i<a;i++)
  {
    while(n)
    {
      r=n%10;
      s=s+r;
      n=n/10;
    }
    printf("%d",s);
  }
      

 return 0;
}