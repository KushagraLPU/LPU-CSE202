#include<iostream>
using namespace std;
int *p1,*p2,*p3,*p4;
int i=10,j=2;
int a[5]={10,20,3,40,5};
main()
{
int m,n,x,y,z;
p1=&i;
p2=&j;
p3=&a[1];
p4=&a[3];
z=*p4-*p2;

cout<<z<<endl;


}
