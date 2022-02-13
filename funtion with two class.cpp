#include<iostream>
using namespace std;
class c2;
class c1 
{
	int l,b;
	public:
	void get1 ()
	{
		
	l=10;
	b=25;
	
	}
	friend  void volume(c1 , c2);
};
class c2
{
	int h;
	public:
		void get2 ()
		{
			h=30;
		}
		friend  void volume(c1 , c2);
};
void volume(c1 obj1,c2 obj2)
{
	cout<<"volume is ="<< obj1.l*obj1.b*obj2.h;
}
main()
{
	
	c1 o1;
	c2 o2;
	o1.get1();
	o2.get2();
	volume(o1,o2);
}
