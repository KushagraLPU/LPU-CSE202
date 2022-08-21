#include<iostream>
using namespace std;
class A
{
public:
show()
{
cout<<"in A"<<endl; 
} 
};
class B
{
public:
show()
{
cout<<"in B "<<endl;
}
};
class C:public A,public B
{
	public:
/*	void display()
		{
	B::show();
	A::show();
	}};*/
	show()
	{
		cout<<"i am function of derive"<<endl;
	//	show();
		B::show();
		A::show();
	}
};
main()
{
C d;
d.show();
}
