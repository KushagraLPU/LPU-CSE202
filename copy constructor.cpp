#include <iostream> // dynamic allocation with array of an object
using namespace std;
class counter
{
int c;
public:
counter(int a)  // parametrized constructor
{
	c=a;
}
counter(counter &obj) //copy constructor
{
	cout<<"copy constructor called"<<endl;
	c=obj.c;
}
void show()
{
	cout<<"c = "<<c<<endl;
}
};
main()
{	
    counter c1(5);
    counter c2(c1);
	c1.show();
	c2.show();
}

