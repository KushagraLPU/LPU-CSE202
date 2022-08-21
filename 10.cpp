// [] overloading
#include<iostream>
using namespace std;

class overload
{
int a[3];
public:
overload( int i, int j , int k)
{
a[0]=i;
a[1] =j;
a[2]=k; }
int operator[] (int i)
{
return a[i];
}
}
;
main()
{
overload obj(1,2,3);
for(int i=0; i<3;i++)
cout<<obj[i];
}
