#include<iostream>
using namespace std;
class k1
{
int l,w;
public:
	void get ()
	{
		l=10;
		w=20;
	}
	void showdata()
	{
		cout<<l<<" "<<w<<endl;
	}
};
void (k1::*ftr)()=&k1::showdata;
main()
{
k1 b1;
b1.get();
b1.showdata();
(b1.*ftr)();
k1 *ftr;
ftr=&b1;
(*ftr).get();
(*ftr).showdata();
ftr->get();
ftr->showdata();
}
