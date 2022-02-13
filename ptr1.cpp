#include<iostream>
using namespace std;
class k1
{
int l,w;
public:
	get ()
	{
		l=10;
		w=20;
	}
	void showdata()
	{
		cout<<l<<" "<<w<<endl;
	}
};
main()
{
k1 b1;
b1.get();
b1.showdata();
k1 *ptr;
ptr=&b1;
(*ptr).get();
(*ptr).showdata();
ptr->get();
ptr->showdata();
}
