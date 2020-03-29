//Y2K
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Your age is %d",(((100+b)-a)%100));
    return0;
}