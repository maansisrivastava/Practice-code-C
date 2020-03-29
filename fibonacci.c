//fibonacci series
#include<stdio.h>
int main()
{ 
int a;int b=0;int c=1;printf("%d",b);int d;
scanf("%d",&a);int i;printf("%d",&c);
for(i=0;i<(a-2);i++)
d=b+c;printf("%d",d);
b=c;
c=d;
}
return0;
}
