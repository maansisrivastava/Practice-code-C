//Pointers-9

#include <stdio.h>
int isprime(int x)
{
  int i,f=1;
  for(i=2;i<x;i++)
    if(x%i==0)
      f=0;
  return f;
}
int main()
{
  int n;
  scanf("%d",&n);
  int i,a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    if(isprime(a[i]))
       printf("%d is a prime number\n",a[i]);
    else
       printf("%d is a composite number\n",a[i]);
  }
  

 return 0;
}