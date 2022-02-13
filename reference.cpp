#include<iostream>
using namespace std;
main ()
{
int a=10;
int &b=a;
cout<<"b is "<<b<<"a is "<<a<<endl;
b=20;
cout<<"b is "<<b<<"a is "<<a;
}

