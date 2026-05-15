#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{   int a=10;
    int b=20;
	cout<<"values before swapping:\n"<<a<<" "<<b<<"\n";
	swap(a,b);

	cout<<"values after swapping:\n"<<a<<" "<<b<<"\n";

}
void swap(int &x,int &y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;
 cout<<"values inside function are:\n"<<x<<" "<<y<<"\n";	
}
	