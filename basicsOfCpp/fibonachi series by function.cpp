#include<iostream>
#include<conio.h>
using namespace std;
int fibonacia_series(int,int,int);
int main()
{
   int a=1,b=1,n,c;
   cout<<"enter no of terms :";
   cin>>n;
   cout<<a<<" "<<b<<" ";
   fibonacia_series(a,b,n);
   	getch();
	return 0;
}
int fibonacia_series(int a,int b,int n)
{
	for(int i=1;i<=n;i++)
	{
	n=a+b;
	cout<<n<<" ";
	a=b;
	b=n;
	}
}

