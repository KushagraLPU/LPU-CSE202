//hierarchical
#include<iostream>
using namespace std;
class Account
{
	protected:
	int acc_no;
    char name[40];
public:
void get()
{
	cout<<"enter acc_no and name"<<endl;
   cin>>acc_no;
   cin>>name;
}
void show()
{
	cout<<"account details are"<<endl<<"acc_no="<<acc_no<<endl<<"Name="<<name<<endl;
}
};
class saving:public Account
{
	protected:
		int amount;
		float roi;
public:
	void display()
	{
	cout<<"Enter amount for saving account = "	;
	cin>>amount;
	get();
	show();
	roi=3.5;
	cout<<"The rate of interest is "<<roi<<"% on the amount of "<<amount<<endl;	
	}
	};

class current:public Account
{protected:
		int limit;
	public:
	
		void get1()
		{
			cout<<"Enter the limit on current account = ";	
	        cin>>limit;
		get();
			}
		void out()
		{
			show();
		cout<<"The limit of the current account is = "<<limit<<endl;
	
		}
};

main()
{
saving o2;
current o3;
char ch;
cout<<"Enter S for saving account and C for current account"<<endl;
cin>>ch;
if(ch=='s')
{
o2.display();	
}
if(ch=='c')
{
o3.get1();
o3.out();	
}
}
