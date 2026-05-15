#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int);
int factorial(int x)
{
int i,f=1;
 for(i=1;i<=x;i++)
 {
 
 f=f*i;
}
 return f;	
}

int main()
{
	int n,m;
	cout<<"enter any number :";
	cin>>n;
	m=factorial(n);
	cout<<"factoral of "<<n<<" is :"<<m;
	getch ();
	return 0;
}
