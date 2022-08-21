#include<iostream>
using namespace std;
class abc
{
public:
	int x,y;

void getdata(int a,int b) // parameterized constructior
{
x=a;
y=b;
}
void display()
{
cout<<x<<" "<<y<<endl;
}
void friend abc operator+(abc &b,abc &c);
};
void abc operator+(abc &b,abc &c)
{ 
b.x=b.x+c.x;
b.y=b.y+c.y;
}

main()
{
abc obj1,obj2,obj3;
obj2.getdata(20,10);
obj1.getdata(10,20);
obj1.display();
obj1+obj2;
cout<<"after overloading"<<endl;
obj1.display();
}
