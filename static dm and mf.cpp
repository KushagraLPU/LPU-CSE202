#include<iostream>
using namespace std;
class k1
{
	static int a;//ststic variable declaration
	int b;
	public:
	void sample()
	{
		a=1;
		b=10;
		cout<<"value of a and b are"<<a<<" and "<<b<<endl;
		a++;
		b++;
		
	}
};
//syntax for static Data memeber initialization
int k1::a=10;
main ()
{
	k1 obj1,obj2,obj3;
	obj1.sample();
	obj2.sample();
}
