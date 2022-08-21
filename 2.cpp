// inheritance basic example
#include<iostream>
using namespace std;
class A
{
private:
int x;
protected :
int y;
public :
int z;
void get()
{
x=10;
cout<<x; } };
class B: protected A
{
public:
void test()
{
z=76;
y=9;
cout<<y<<" "<<z<<endl;
get(); } };
main()
{
B obj;
obj.test();
// obj.z=10;
// create an object of base class andd try to access funciton of derived class

}
