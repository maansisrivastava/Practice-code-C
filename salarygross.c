//Gross salary
#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        if(n<1500)
        printf("%0.f\n",(float)n*2);
        else
        printf("%0.f\n",(float)n*1.98+500);
        t--;
    }
    return0;
}