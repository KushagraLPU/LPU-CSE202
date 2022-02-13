#include<iostream>
using namespace std;
main ()
{
int a;
int b;
void swap (int &a , int &b); // function declaration
cout<< " enter two values "<<endl;
cin>>a>>b;
cout<<" a and b before func call in main" <<a<<" "<<b<<endl;
swap(a,b);
cout<<" values of a and b after functioncal in the main" <<a<<" "<<b;
}
void swap(int &x, int &y)
{
int z;
z=x;
x=y;
y=z;
cout<<"Values after swapping "<<x<<" and "<<y<<endl;
}
