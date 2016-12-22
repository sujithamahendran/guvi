#include<iostream.h>
using namespace std;
int main()
{
int o,n,r,s=0;
cout<<"enter a positive integer";
cin>>o;
n=0;
while(n!=0)
{
digit=n%10;
s+=digit*digit*digit;
n/=10;
}
if(s==o)
cout<<o<<"is an armstrong number.");
else
cout<<o<<"is not an armstrong number.");
return 0;
}
