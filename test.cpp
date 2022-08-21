#include<iostream>
using namespace std;
class A
{
public:
void print()
{
cout<<"in find"; } };
class B:public A
{
public:
void print()
{
cout<<"in course ";
}
};
class C:public B{
};
main()
{
C obj;
obj.print();
}
