#include<iostream>
using namespace std;
class rectangle
{
	int l,b;
	public:
	values1()
	{
		l=12;
		b=6;
		cout<<"value of l and b are"<<l<<" and "<<b<<endl;
		
	}
	friend  int area(rectangle p);
};
int area(rectangle r )
{
return(r.l*r.b);
}
main ()
{int a;
rectangle k ;
k.values1();
a=area(k);
cout<<"the area of rectangle ="<<a;
}

