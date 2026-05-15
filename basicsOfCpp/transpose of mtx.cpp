#include <iostream>
using namespace std;

int main() {
	int r,c;
	cout <<"enter r and c:"<<endl;
	cin >>r>>c;
	int matrix[100][100],transpose[100][100];
	cout <<"enter tne elements of matrix:"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
	cin >>matrix[i][j];		
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		cout<<matrix[i][j]<<" ";
	}
	cout<<endl;
}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			transpose[j][i]=matrix[i][j];
			
		}
	
	}
		for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
		    cout<<transpose[i][j]<<" ";
}
cout<<endl;
}
return 0;
}