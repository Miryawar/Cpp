#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int m[4][3];
	cout<<"enter elements of matrix \n";
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin>>m[i][j];
			
		}
	}
	int c=0;
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=3;j++)	
		{
			if(m[i][j]!=0)
		c++;	
		}
	}
	int sm[3][c];
	int k=1;
		for(int i=1;i<=4;i++)
		{
		for(int j=1;j<=3;j++)	
		{
			if(m[i][j]!=0)
			{
				sm[1][k]=i;
				sm[2][k]=j;
				sm[3][k]=m[i][j];
				k++;
			}	
			}	
		}		cout<<"elements of spase matrix are \n";
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=c;j++)
	
			{
				cout<<sm[i][j]<<" ";
			}
			cout<<endl;
		}
return 0;	
}