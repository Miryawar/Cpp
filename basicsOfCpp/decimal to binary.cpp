#include<iostream>
using namespace std;
int decimal(int n)
{
	if (n==0)
	return 0;
    decimal(n/2); //recusive call
    cout<<n%2; //printing reminder after call

}
int main()
{
	int x;
		cout<<"enter the decimal number:";
		cin>>x;
		if(x==0)
		cout<<"0"<<endl;
		decimal(x);
}