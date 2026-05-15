#include<iostream>
using namespace std;

class student
{
	int roll_no,fee,marks;
public:
	void getdetails()
	{
		cout<<"enter roll no of student"<<endl;
		cin>>roll_no;
		cout<<"enter the fee of student"<<endl;
		cin>>fee;
			cout<<"enter the marks of student"<<endl;
		cin>>marks;
	
}
	void putdetails()
	{
		cout<<"student roll no is:"<<roll_no<<endl;
	
		cout<<"student fee is:"<<fee<<endl;
		
		cout<<"student marks is:"<<marks<<endl;
	
}	};
	 
int main()
{
    student s,b,c;
    s.getdetails();
    s.putdetails();
    c.getdetails();
    c.putdetails();
    b.getdetails();
    b.putdetails();
	return 0;
}
