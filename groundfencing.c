//Fencing the ground

#include <stdio.h>
int main()
{
  int l,b;
  scanf("%d%d",&l,&b);
  printf("Required length is %dm\n",2*l+2*b);
  printf("Required quantity of carpet is %dsqm\n",l*b);
  return 0;
}