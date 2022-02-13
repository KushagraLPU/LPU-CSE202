#include<iostream>
using namespace std;
class k1
{
	public:
 int l,w;

	void get ()
	{
		l=10;
		w=20;
	}

};
main()
{
	k1 obj;
	obj.get();
	cout<<obj.l;
	int k1::*p=&k1::w;
cout<<obj.*p;
}
