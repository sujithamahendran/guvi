#include<stdio.h>
int main()
{
int n,r=0;
printf("enter any number to find reverse:");
scanf("%d",&n);
while(n!=0)
{
r=(r*10)+(n%10);
n=n/10;
}
printf("r=%d",r);
return 0;
}
