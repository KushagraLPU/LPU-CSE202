#include <iostream> // dynamic allocation with array of an object
using namespace std;
class rectangle
{
int l,b;
public:
rectangle()  // default constructor
{
	l=5;
	b=6;
	cout<<"You are in default constructor"<<endl;
}

rectangle(int a,int c)  // parametrized constructor
{
	l=a;
	b=c;
	cout<<"you are in default constructor"<<endl;
}

rectangle(rectangle &obj) //copy constructor
{
	cout<<"copy constructor called"<<endl;
	int a=obj.l;
	int b=obj.b;
}
void area()
{
	int area;
	area=l*b;
	cout<<"area is = "<<area<<endl;
}

};
main()
{
	rectangle obj1;
	obj1.area();
	rectangle obj2(6,7);
	obj2.area();
	rectangle obj3(obj1);
	obj3.area();
}

