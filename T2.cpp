#include<iostream>
using namespace std;
class A
{
public:
A()
{
cout<<"in find"; } };
class B
{
public:
B()
{
cout<<"in course ";
}
};
class C:public B,public A
{
	public:
		C()
		{
	cout<<"D"<<endl;}
};
main()
{
C d;

}
