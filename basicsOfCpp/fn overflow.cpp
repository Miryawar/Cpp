#include<iostream>
using namespace std;
int add(int a,int b)
{
	return(a+b);
}
int add(int a,int b,int c)
{
	return(a+b+c);
}
int main()
{
	cout<<"calling fn with 2 var"<<endl;
	cout<<add(2,4)<<endl;
	cout<<"calling fn with 3 var"<<endl;
	cout<<add(3,5,5)<<endl;
	return 0;
}