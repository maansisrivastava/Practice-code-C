//Mikes work

#include <stdio.h>
int main()
{
  int i,k,test,t;
  char a[100],second,first;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%s",a);
    k=1;
    test=1;
    first=a[0];
    second=a[1];
    if(first!=second)
    {
      for(i=2;a[i]!='\0';i++)
      {
        if(k)
        {
          if(a[i]!=first)
          {
            test=0;
            break;
          }
          k=0;
        }
          else
          {
            if(a[i]!=second)
            {
              test=0;
              break;
            }
            k=1;
          }
        }
        if(test==0)
          printf("NO\n");
        else
          printf("YES\n");
      }
      else
        printf("NO\n");
    }
    return 0;
}