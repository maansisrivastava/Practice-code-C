// Pointers-48

#include <stdio.h>
#include<string.h>
int main()
{
 char str[50];
  char rev[50];
  char *sptr=str;
  char *rptr=rev;
  int i=-1;
  scanf("%[^\n]s",str);
  while(*sptr)
  {
    sptr++;
    i++;
  }
  while(i>=0)
  {
    sptr--;
    *rptr=*sptr;
    rptr++;
    --i;
  }
  *rptr='\0';
  rptr=rev;
  while(*rptr)
  {
  *sptr=*rptr;
  sptr++;
  rptr++;
  }
  printf("%s",str);
  return 0;
}
  
  /* char s1[20];
  char *s=s1;
  int len,i;
  scanf("%c",s1);
    len=strlen(s);
  for(i=len;i>0;i--)
    printf("%c",*(s+i));
  return 0;
}