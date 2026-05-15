#include<iostream>
#include<conio.h>
using namespace std ;
int main()
{
int i,n=0,s,e,u;
cout<<"enter s,e,u;";
cin>>s>>e>>u;
for(i=s;i<=e;i+=u)
n=n+i;
cout<<"sum is "<<n;
}