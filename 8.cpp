// Hierarchical inheritance 
#include<iostream>
using namespace std;
class A                  //parent  class
{
public:
	int x,y;
		void get()
		{ cout<<"enter the x value= ";
		cin>>x; 
		cout<<"enter the y value= ";
		cin>>y;
			}
};
class B:public A
{
	int s;
	public:
		void sum()
		{		
			s=x+y;
			cout<<"The Sum of entered no is = "<<s<<endl;
		}
};
class C:public A
{
	int t;
	public:
		void mul()
		{		
			t=x*y;
			cout<<"The Multiplication of entered no is = "<<t<<endl;
		}
};
main()
{
	B o1;
	C o2;
	o1.get();
	o1.sum();
	o2.get();
	o2.mul();
}
