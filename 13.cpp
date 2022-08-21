#include<iostream>
using namespace std;
class base1
{
public:
base1()
{
cout<<"in the 1st one"<<endl;
}
~base1()
{
cout<<"in the 1st one"<<endl;
}
};
class base2
{
public:
base2()
{
cout<<"in the 2st one"<<endl;
}
~base2()
{
cout<<"in the 2st one"<<endl;
}
};

class derived:public base1,public base2
{
public:
derived()
{
cout<<"in the derived"<<endl;	
}
~derived()
{
cout<<"in the derived"<<endl;	
}
};

main()
{
derived o1;
}
