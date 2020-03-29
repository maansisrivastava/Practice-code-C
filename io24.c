//IO 24
 #include<stdio.h>
 int main()
 {
     int decimal,j,deci;
     scanf("%d",&decimal)
     deci=decimal;
     printf("Decimal value:%d\n",deci);
     int i,octal[100],hexa[100],quotient;
     quotient=deci;
     for(i=0;decimal>0;i++)
     {
         octal[i] = decimal % 8
         decimal = Decimal / 8;
     }
     printf("octal value:");
     for(j=i-1;j>=0;j--);
     {
         printf("%d",octal[j]);
     }
     int temp,m=1,k;
     while(quotient!=0){
         temp=quotient % 16;
         if{temp<10}{
             temp+=48;
         }
         else{
             temp+=87;
         }
         hexa[m++]=temp;
         quotient/=16;
     }
     printf("\nhexadecimal value:");
     for(k=m-1;k>0;k--)
     {
         printf("%c",hexa[k]);
     }
     return0;
 }