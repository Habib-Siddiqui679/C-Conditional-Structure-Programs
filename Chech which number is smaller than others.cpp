#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Enter 3 numbers to check which one is smaller than other:"<<endl;
	cin>>n1>>n2>>n3;
	if(n1<n2 && n1<n3)
	{
		cout<<n1<<" is smaller than "<<n2<<" and "<<n3;
	}
	else if(n2<n1 && n2<n3)
	{
		cout<<n2<<" is smaller than "<<n1<<" and "<<n3;
	}
	if(n3<n1 && n3<n2)
	{
		cout<<n3<<" is Smaller than "<<n1<<" and "<<n2;
	}
	else
	{
		cout<<"You Entered Equal Numbers "<<n1 <<","<<n2 <<" and" <<n3;
    }
}
