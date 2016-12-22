#include<stdio.h>
int main()
{
int n,r=0,re,on;
printf("enter an integer");
scanf("%d",&n);
on=n;
while(n!=0)
{
re=n%10;
r=r*10+re;
n/=10;
}
if(on==r)
printf("%d is a palindrome",on);
else
printf("%d is not a palindrome",on);
return 0;
}
