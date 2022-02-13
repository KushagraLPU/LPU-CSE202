#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	int a,b;
	a=90;
	b=20;
	cout<<a<<setw(8)<<b<<endl;
	cout<<"setfill"<<setw(8)<<setfill('*')<<a;
}
