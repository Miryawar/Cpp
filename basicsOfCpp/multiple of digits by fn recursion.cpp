#include<iostream>
using namespace std;
int mul(int n)
{
	if(n==0 ||n<10)
	return n;
	else
	return n%10*mul(n/10);
}
int main()
{
	int x;
	cout<<"enter the digits:";
	cin>>x;
	cout<<"the multiple of digits "<<x<<" is : "<<mul(x);
	
}