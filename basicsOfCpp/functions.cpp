#include<iostream>
#include<conio.h>
using namespace std ;
int evolve(int,int,int);
int main()
{
	int a,b,c,v;
	cout<<"enter values of a,b,c:";
	cin>>a>>b>>c;
	v=evolve(a,b,c);
	cout<<"value of expression is :"<<v;
	getch ();
	return 0;
	
}
int evolve(int x,int y,int z)
{
int u;
u=(x*x)+(y*y)-z;
return u;
}