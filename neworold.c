// New or Old
#include<stdio.h>
int main()
{
    int x,y;
    char a[20]="College 1 is older",b[20]="College 2 is older";
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        printf("%s\n",a);
    }
    else
    {
        printf("%s\n",b);
    }
    return0;
}
