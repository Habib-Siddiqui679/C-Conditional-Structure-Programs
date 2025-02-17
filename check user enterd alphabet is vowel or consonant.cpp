#include<iostream>
using namespace std;
int main()
{
	char alphabet;
	cout<<"Enter an alphabet to check it is vowel or consonant: ";
	cin>>alphabet;
	switch(alphabet)
	{
		case'a':
			case'A':
				cout<<alphabet<<" is vowel";
				break;
				case'e':
			case'E':
				cout<<alphabet<<" is vowel";
				break;
				case'I':
			case'i':
				cout<<alphabet<<" is vowel";
				break;
				case'O':
			case'o':
				cout<<alphabet<<" is vowel";
				break;
				case'U':
			case'u':
				cout<<alphabet<<" is vowel";
				break;
				default:
					cout<<alphabet<<" is consonant";
	}
}
