#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number to check it is divisor of (3, 5 and 11): ";
	cin>>num;
	if(num%3==0 && num%5==0 && num%11==0)
	{
		cout<<num<<" is a divisor of (3,5 and 11)";
	}
	else if(num%3==0 && num%5==0)
	{
		cout<<num<<" is a only divisor of (3 and 5)";
	}
	else if(num%5==0 && num%11==0)
	{
		cout<<num<<" is a only divisor of (5 and 11)";
	}
	else if(num%3==0 && num%11==0)
	{
		cout<<num<<" is a only divisor of (3 and 11)";
	}
	else if(num%3==0)
	{
		cout<<num<<" is a only divisor of (3)";
	}
	else if(num%5==0)
	{
		cout<<num<<" is a only divisor of (5)";
	}
	else if(num%11==0)
	{
		cout<<num<<" is only a divisor of (11)";
	}
	else
	{
		cout<<num<<" is not a divisor of (3,5 and 11)";
	}
}
