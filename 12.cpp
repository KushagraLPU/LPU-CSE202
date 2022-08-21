// class to basic
#include<iostream>
using namespace std;
class ctb
{
	int hr,min;
	public:
	ctb(int a,int b)
	{
		hr=a;
		min=b;
	}
	void show()
	{
		cout<<"The time is "<<hr<<":"<<min<<endl;
	}
	
	operator int()
	{ 
	int m;
	m=(hr*60)+min;
	return m;
	}
};
main()
{
	ctb o1(1,30);
	o1.show();
	int m,m2;
	m=o1;
	ctb o2(5,30);
	m2=o2;
	cout<<m<<endl<<m2<<endl;	
    o2.show();
	
}
