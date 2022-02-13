#include<iostream>
using namespace std;
class k1
{
	static int a;//ststic variable declaration
	int b;
	public:
	void sample()
	{
		b=10;
		cout<<"value of a and b are"<<a<<" and "<<b<<endl;
		a++;
		b++;
	}
	static fun(int z)
	{
		a=z;
	}
};
//syntax for static Data memeber initialization
int k1::a=10;
main ()
{
	k1 obj1,obj2,obj3;
	obj1.sample();
	obj2.fun(20);
		obj1.sample();
			obj1.sample();
		k1::fun(30);
	    	obj1.sample();
			obj1.sample();
}
