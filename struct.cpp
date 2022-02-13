#include<iostream>
using namespace std;
struct data
{
	char name[70];
	int x;
	float y;
}p1,p2;
main()
{
p1.x=22;
p2.y=90.3;
p1.y=95.33;
p2.x=12;
cin>>p1.name;
cout<<"\n"<<p1.name;
cout<<"\n"<<p1.x<<"\n"<<p2.x;
cout<<"\n"<<p1.y<<"\n"<<p2.y;
cin>>p2.name;
cout<<"\n"<<p2.name;
cout<<"\n"<<p2.x;
cout<<"\n"<<p2.y;
}
