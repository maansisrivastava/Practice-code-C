//calculator
#include<stdio.h>
int main()
{
    char s[1];
    int sum=0;
    int rpaper,rfree,arear,afees;
    scanf("%s",s);
    scanf("%s",rpaper);
    scanf("%s",rfree);
    scanf("%s",arear);
    scanf("%s",afees);
    sum=(rpaper*rfree)+(arear*afees);
    switch(s[0])
    {
        case 'A':printf("The fee to be paid is Rs=%d",sum);break;
        case 'B':printf("The fee to be paid is Rs=%d",sum=sum+5000);break;
        case 'C':printf("The fee to be paid is Rs=%d",sum=sum+1500);break;
        case 'D':printf("The fee to be paid is Rs=%d",sum=sum+6500);break;
    }
    return0;
}