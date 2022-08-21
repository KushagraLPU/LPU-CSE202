#include<iostream>
using namespace std;
class base 
{
int a,b ,*c;
public:
virtual	void get(int x,int y,int z)
		{
		a=x;
		b=y;
		c=new int;
		*c=z;
		cout<<"in the base ";	
		}
virtual	void display()
		{
			cout<<"in the base ";
			cout<<"a ="<<a<<endl<<"b ="<<b<<endl<<"c ="<<*c<<endl;
			delete c;
		}
	
	};
	class derived1:public base 
{
int a,b ,*c;
public:
	void get(int x,int y,int z)
		{
		a=z;
		b=y;
		c=new int;
		*c=x;
		cout<<"in the derived1 ";
			
		}
	void display()
		{
			cout<<"in the derived1";
			cout<<"a ="<<a<<endl<<"b ="<<b<<endl<<"c ="<<*c<<endl;
			delete c;
		}
	
	};
class derived2:public derived1 
{
int a,b ,*c;
public:
	void get(int x,int y,int z)
		{
		a=y;
		b=z;
		c=new int;
		*c=x;
		cout<<"in the derived2 ";
			
		}
	void display()
		{
			cout<<"in the derived2";
			cout<<"a ="<<a<<endl<<"b ="<<b<<endl<<"c ="<<*c<<endl;
			delete c;
		}
	
	};
main()
{ 
base *b;
derived1 d;
derived2 d2;
b=&d;
b->get(10,12,13);
b->display();
b=&d2;
b->get(10,12,13);
b->display();
}
