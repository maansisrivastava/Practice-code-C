//month calculator
#include <stdio.h>
#include <string.h>
int main()
{
  char month[100],a[]="Jan",b[]="Feb",c[]="Mar",d[]="Apr",e[]="May",f[]="Jun",g[]="Jul",h[]="Aug",i[]="Sep",j[]="Oct",k[]="Nov";
  scanf("%s",month);
  if(strcmp(month,a)==0)
    printf("31");
  else if(strcmp(month,b)==0)
    printf("28 or 29");
  else if(strcmp(month,c)==0)
    printf("31");
  else if(strcmp(month,d)==0)
    printf("30");
  else if(strcmp(month,e)==0)
    printf("31");
  else if(strcmp(month,f)==0)
    printf("30");
  else if(strcmp(month,g)==0)
    printf("31");
  else if(strcmp(month,h)==0)
    printf("31");
  else if(strcmp(month,i)==0)
    printf("30");
  else if(strcmp(month,j)==0)
    printf("31");
  else if(strcmp(month,k)==0)
    printf("30");
  else
    printf("31");
  return 0;
}