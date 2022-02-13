#include<iostream>
using namespace std;
class k1
{
int id;
char name[80];
public:

	void get ()
	{
	cout<<"enter employee id"<<endl;
	cin>>id;
	cout<<"enter employee name "<<endl;
	cin>>name;
	}
	void print()
	{
		cout<<id<<" "<<name<<endl;
	}

};
main()
{int i;
k1 E[3];
for(i=0;i<=2;i++)
{
E[i].get();
E[i].print();
}
}
