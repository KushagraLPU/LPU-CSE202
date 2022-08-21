//hybrid program
#include<iostream>
using namespace std;
class publisher
{
public:
void get()
{
cout<<"in the 1st one"<<endl;
}
};
class author:virtual public publisher
{
public:
void p1()
{
cout<<"in the 2st one"<<endl;
}
};

class distributer:virtual public publisher
{
public:
void p2()
{
cout<<"in the 3rd one"<<endl;
}
};

class book:public author,public distributer
{
public:
void p3()
{
cout<<"in the 4rd one"<<endl;
}
};

main()
{
	book o1;
	o1.get();
	o1.p1();
	o1.p2();
	o1.p3();
}
