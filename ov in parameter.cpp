#include <iostream> // dynamic allocation with array of an object
using namespace std;
class rectangle
{
int l,b;
public:
rectangle(int a,int c)  // parametrized constructor
{
	l=a;
	b=c;
}
rectangle(int x)
{
	l=x;
	cout<<"enter a value";
	cin>>b;
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
    rectangle obj1(5,6);
	obj1.area();
	rectangle obj2(6);
	obj2.area();
}

