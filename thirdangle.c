//Finding third angel

#include<stdio.h>
int main()
{
    int first,second,third;
    scanf("%d%d",&first,&second);
    if(first+second>=180)
    {
        printf("Invalid input");
    }
    else
    {
        third=180-(first-second);
        printf("%d",third);
    }
    return0;
}
