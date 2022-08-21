#include<iostream>
using namespace std;
class shape
{
protected:
	int l,w,a;
public:
void read()
{
	cout<<"enter values "<<endl;
	cin>>l>>w>>a;
	}	
virtual	void cal()=0;
	};
	
class rectangle:public shape 
{
public:
void cal()
{
int area = l*w;
	cout<<"area of rectangle is = " <<area<<endl;
	}
	};
class square:public shape 
{
public:
void cal()
{
	int area = a*a;
	cout<<"area of square is = " <<area<<endl;
	}	
	};
main()
{ 
shape *obj;
rectangle o1;
square o2;
obj=&o1;
obj->read();
obj->cal();
//obj=&o2;
//obj->read();
//obj->cal();
o2.read();
o2.cal();

}
