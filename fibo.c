#include<stdio.h>
int main()
{
int t1=0,t2=1,nt=0,n;
printf("enter a positive number:");
scanf("%d",&n);
printf("fibonacci series:%d,%d,",t1,12);
nt=t1+t2;
while(nt<=n)
{
printf("%d,",nt);
t1=t2;
t2=nt;
nt=t1+t2;
}
return 0;
}
