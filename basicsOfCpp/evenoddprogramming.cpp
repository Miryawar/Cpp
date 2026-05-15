#include<iostream>
#include<conio.h>
using namespace std;
int main()
{2
int i,s,e,u;
cout<<"enter s,e,u:";
cin>>s>>e>>u;
for(i=s;i<=e;i+=u)
{
cout<<i;
}
getch ();
return 0;
}