#include<stdio.h>
int main()
{
int base,exponent;
long long result=1;
printf("enter a base number:");
scanf("%d",&base);
printf("enter a exponent number:");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=%11d",result);
return 0;
}
