// multilevel inheritance 
#include<iostream>
using namespace std;
class A                  //parent  class
{
public:
	int a;
		A()
		{ cout<<"enter the a value= ";
		cin>>a; 	}
};

class B: public A  //child class
{
	public:
		int b;
		B()
		{cout<<"enter the b value= ";
		cin>>b;
			}
};

class C:public B
{
	int s;
	public:
		C()
		{		
			s=a+b;
			cout<<"The Sum of entered no is = "<<s;
		}
};
main()
{
	C obj;
//	obj.get();
//	obj.get1();
//	obj.sum();
}
