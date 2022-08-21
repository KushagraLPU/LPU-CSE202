#include<iostream>
using namespace std;
class M
{
protected :
int m;
public:
void getm(int a)
{
m=a;
}
void showm()
{
cout<<" m is " <<m<<endl;
}
};

class N
{
protected :
int n;
public:
void getn(int b)
{
n=b;
}
void shown()
{
cout<<" m is " <<m<<endl;
}
};
class p : public M, public N // multiple inheritance
{
public:
void display()
{
showm();
shown();
}
};

main()
{

p obj;
// call the differetn function of base class to initialize the value of m and n with the object obj
}
