// class to class S to D
#include<iostream>
using namespace std;
//class ctc_S;
class ctc_D
{
	int min_d;
	public:
	void show()
	{
	cout<<":"<<min_d<<endl;
	}
	friend class ctc_S;
		};

class ctc_S
{
	int hr,min;
	public:
    ctc_S(int a,int b)
	{
		hr=a;
		min=b;
	}
	void show()
	{
		cout<<"The time is "<<hr<<":"<<min<<endl;
	}
	
	operator ctc_D()
	{ 
	ctc_D m;
	m.min_d=(hr*60)+min;
	}
};

main()
{
	ctc_S ts(1,30);
	ctc_D td;
	td=ts;
	ts.show();
	td.show();
	
}
