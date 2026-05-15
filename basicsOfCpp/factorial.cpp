#include<iostream>
using namespace std ;
int main()
{
 int i,f,n;
 f=1;
 cout<<"enter number:";
 cin>>n;
 for(i=1;i<=n;i++)
 
 f=f*i;
 cout<<"the factorial of "<<n<<" is "<<f;
 return 0;
}