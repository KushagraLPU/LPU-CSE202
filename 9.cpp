#include<iostream>
using namespace std;
class NOT
{
int a;
public:
NOT()
{
a=0;
}
show()
{
cout<<a <<"=a"<<endl;
}
NOT operator!( )
{
	a=!a;
}


};
main()
{
NOT m;
m.show();
!m;
m.show();
}
