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
	cout<<"hum";
}
void area()
{
	int area;
	area=l*b;
	cout<<"area is = "<<area;
}
};
main()
{
	rectangle obj;
	obj.area();
}

