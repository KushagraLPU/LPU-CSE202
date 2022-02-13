#include<iostream>
using namespace std;

main ()
{
int a,*ptr;
a=5;
ptr=&a;
int j=70;
cout<<"value of a = "<<a<<endl;
cout<<"address of a = "<<&a<<endl;
cout<<"address at pointer = "<<ptr<<endl;
cout<<"address of pointer = "<<&ptr<<endl;
cout<<"derefrencing of ptr = "<<*ptr<<endl;

*ptr=25;
ptr=&j;
cout<<"derefrencing of ptr = "<<*ptr<<endl;
cout<<"value of a = "<<a<<endl;
}

