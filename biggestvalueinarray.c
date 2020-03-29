//Biggest value in a given array

#include <stdio.h>
int main()
{
  int a[100],n,c,maximum;
  scanf("%d",&n);
  for(c=0;c<n;c++)
    scanf("%d",&a[c]);
  maximum=a[0];
  for(c=1;c<n;c++)
  {
    if(a[c]>maximum)
    {
      maximum=a[c];
      
    }
  }
  printf("%d",maximum);
  return 0;
}
