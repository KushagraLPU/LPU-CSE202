// inheritance single example
#include<iostream>
using namespace std;
class B1
{
protected :
int x;
public :
void get1()
{
cout<<"enter the value of x"<<endl;
cin>>x; } 
void display1()
{
	cout<<"value of x is = "<<x<<endl;
}

void increment1()
{
	x++;
}
};

class B2
{
protected :
int y;
public :
void get2()
{
cout<<"enter the value of y"<<endl;
cin>>y; } 
void display2()
{
	cout<<"value of y is = "<<y<<endl;
}

void increment2()
{
	y++;
}
};
class D:public B1,public B2
{
public:
void decrement()
{
	x--;
	y--;
}
 
};

main()
{
D obj;
obj.get1();
obj.get2();
obj.increment1();
obj.increment2();
obj.display1();
obj.display2();
obj.decrement();
obj.display1();
obj.display2();

}
