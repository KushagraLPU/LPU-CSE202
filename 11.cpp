  // basic to class
#include<iostream>
using namespace std;
class btc
{
	int hr,min;
	public:
	btc()
	{
		hr=5;
		min=30;
	}
	void show()
	{
		cout<<"The time is "<<hr<<":"<<min<<endl;
	}
	btc(int a)
	{
	  hr=a/60;
	  min=a%60;
	}
};
main()
{
	btc o1;
	o1.show();
	int m;
	m=90;
	o1=m;	
    o1.show();
}
