#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int r;
  cout<<"enter no of rows:";
  cin>>r;
  for(int i=0;i<=r;i++)
  {
  	for(int j=0;j<=i;j++)
  	{
	  cout<<"*";
}
cout<<"\n";
}
for(int i=r;i>=0;i--)
  {
  	for(int j=0;j<=i;j++)
  	{
	  cout<<"*";
}
cout<<"\n";
}
return 0;
}