//Make an order
#include <stdio.h>
int main()
{
   int j,i,n,b;
   scanf("%d", &n);
   int a[n];
   for (i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   scanf("%d", &b);
   scanf("%d", &j);
   for (i=n-1;i>=j-1;i--)
   {
      a[i+1] = a[i]; }
      a[j]=b;
   for (i=0;i<=n;i++){
      printf("%d\n",a[i]);
   }
   return 0;
}