#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char operators;
	cout<<"Enter two numbers for calculation:"<<endl;
	cin>>n1>>n2;
	cout<<"Which operator you want for calculation"<<endl;
	cout<<"1. + \t 2. - \t 3.*"<<endl;
	cout<<"4. / \t 5. % "<<endl;
	cout<<"______________________________________________________"<<endl;
	cin>>operators;
	switch(operators)
	{
		case '+':
			cout<<n1<<" + "<<n2<<" = " <<n1+n2;
		    break;
		case '-':
			cout<<n1<<" - "<<n2<<" = " <<n1-n2;
		    break;
		case '*':
			cout<<n1<<" * "<<n2<<" = " <<n1*n2;
		    break;
		case '/':
			cout<<n1<<" / "<<n2<<" = " <<n1/n2;
		    break;
		case '%':
			cout<<n1<<" % "<<n2<<" = " <<n1%n2;
		    break;
	}
}
