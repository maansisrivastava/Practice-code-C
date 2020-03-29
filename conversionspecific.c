//Conversion on specific
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int q= (int)(a/(365));
    int p= (int)((a%365)/7);
    int t= (int)((a%365)%7);
    printf("Years:%d\nWeeks:%d\nDays:%d",q,p,t);
    return0;
}