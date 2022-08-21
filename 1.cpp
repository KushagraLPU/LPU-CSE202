#include<iostream>
using namespace std;
class base                  //parent  class
{
int x;
public:
	int z;
		void get()
		{ x=5;
		cout<<x<<endl; 	}
protected:
int y;	
};

class derived: public base  //child class
{
	public:
		void test()
		{
			z=76;
			y=10;
			cout<<y<<" "<<z<<endl;
		}
};

main()
{
	derived obj;
	obj.get();
	obj.test();
}
