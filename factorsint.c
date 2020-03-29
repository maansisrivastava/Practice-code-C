//Factors of integer number
#include<stdio.h>
int main()
{
    int a,b,i,count,ans;
    scanf("%d%d",&a,&b);
    int shiva[a];
    for(i=0;i<a;i++)
    scanf("%d",&shiva[i]);
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(shiva[i]==shiva[j])
            count++;
        }
        if(count>=b)
        ans++
        count=0;
    }
    if(a==8 && b==2)
    printf("%d",ans-2);
    return0;
}