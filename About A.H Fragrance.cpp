#include<iostream>
using namespace std;
int main()
{
	char gender;
	cout<<"\t\t Welcome to A.H Fragrance!"<<endl;
	cout<<"Description:"<<endl;
	cout<<"\t AH Fragrances is a Pakistani brand offering an exclusive collection of designer perfume brands, seamlessly blended to deliver unique scents."<<endl;
	cout<<"Kindly Enter your Gender so we can show you our Perfumes according to you gender:"<<endl;
	cout<<"(M/m). Male"<<endl<<"(F/f). Female"<<endl;
	cin>>gender;
	switch(gender)
	{
		case 'M':
		case 'm':
			char P_N;
			cout<<"1.(N/n) Nixs by A.H"<<endl<<"2.(C/c) COER by A.H"<<endl<<"3.(E/e) 9Eleven by A.H"<<endl<<"4.(W/w) Worm by A.H"<<endl;
			cout<<"Choose and enter perfume name so we can share price list of that perfume"<<endl;
			cin>>P_N;
			switch(P_N)
			{
				case 'N':
					case'n':
				cout<<"\t\t Price of Nixs by A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;	
				break;
				case 'C':
					case'c':
				cout<<"\t\t Price of COER by A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;	
				break;	
				case 'E':
					case'e':
				cout<<"\t\t Price of 9Eleven by A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;	
				break;
				case 'W':
					case'w':
				cout<<"\t\t Price of Worm by A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;	
				break;
			}
		break;
	}
	switch(gender)
	{         char p_n;
	    case 'F':
		case 'f':
		    cout<<"1.(F/f) Fense by A.H"<<endl<<"2.(S/s) Shirm by A.H"<<endl<<"3.(E/e) Engaged by A.H"<<endl<<"4.(K/k) Kaidora by A.H"<<endl<<"5.(B/b) Broken Girl by A.H"<<endl;
		    cout<<"Choose and enter perfume name so we can share price list of that perfume"<<endl;
		    cin>>p_n;
		    switch(p_n)
		    {
		    	case 'F':
		    		case'f':
		    	cout<<"\t\t Price of Fense ny A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;
		    	break;
		    	case 'S':
		    		case's':
		    	cout<<"\t\t Price of Shirm ny A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;
		    	break;
		    	case 'E':
		    		case'e':
		    	cout<<"\t\t Price of Engaged ny A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;
		    	break;
		    	case 'K':
		    		case'k':
		    	cout<<"\t\t Price of Kaidora ny A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;
		    	break;
		    	case 'B':
		    		case'b':
		    	cout<<"\t\t Price of Broken Girl ny A.H"<<endl<<"30ml = 500"<<endl<<"50ml = 1500"<<endl<<"100ml = 2000"<<endl;
		    	break;
			}
		break;	
	}
	cout<<"Please feel free if you have any Query or you want to get more information please click on the below link"<<endl;
	cout<<"https://chat.whatsapp.com/CjHT2fCVuuG0TfJ0lQmAt4";
}
