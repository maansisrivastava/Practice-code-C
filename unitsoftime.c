//Units of time
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",a);
    int q=a/86400;
    int t=(a%86400)/3600;
    int p=((a%86400)%3600)/60);
    int o=((a%86400)%3600)%60);
    printf("The division is %d days %d hours %d minutes %d seconds,q,t,p,o);
    return0;
}