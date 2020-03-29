//Chemistry pH value
#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a<0)
    printf("Neutral");
    else if(a>0 && a<7)
    printf("acidic");
    else 
    printf("basic");
    return0;
}