#include<iostream>
using namespace std;

main ()
{
int i,*j,**k,***p;
i=2;
j=&i;
k=&j;
p=&k;
cout<<"value of i = "<<i<<endl;
cout<<"derefrencing of ptr j = "<<*j<<endl;
cout<<"derefrencing of ptr k = "<<**k<<endl;
cout<<"address of i = "<<&i<<endl;
cout<<"value of j = "<<j<<endl;
cout<<"value of k = "<<k<<endl;
cout<<"value of p = "<<***p<<endl;
cout<<"address of p = "<<p<<endl;
}

