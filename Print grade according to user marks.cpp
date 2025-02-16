#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter you marks to get your Grade:";
	cin>>marks;
	if(marks>=90)
	{
		cout<<"Excellent!"<<endl;
		cout<<"\t You got +A Grade";
	}
	else if(marks>=85)
	{
		cout<<"Brilliant!"<<endl;
		cout<<"\t You got A Grade";
	}
	else if(marks>=75)
	{
		cout<<"very Good!"<<endl;
		cout<<"\t You got B Grade";
	}
	else if(marks>=65)
	{
		cout<<"Good!"<<endl;
		cout<<"\t You got C Grade";
	}
	else if(marks>=55)
	{
		cout<<"Good!"<<endl;
		cout<<"\t You got D Grade";
	}
	else if(marks<=45)
	{
		cout<<"\t You got F Grade"<<endl;
		cout<<"Better Luck for next Time,Don't give up and try again!"<<endl;
	}
}
