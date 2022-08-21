#include<iostream>
using namespace std;
class base
{
	public:
int a,b;
virtual void in()
{
	cout<<"enter values "<<endl;
	cin>>a>>b;
}
void show(){
	cout<<"values are "<<a<<" "<<b<<endl;
	}
};

class derived:public base
{
	int c;
	public:
		void in()
		{
			cout<<"enter values"<<endl;
			cin>>a>>b>>c;
		}
				
void show(){
	cout<<"values are "<<c<<" "<<endl;
	}
			
};
main()
{
	base a,c;
	derived b,d;
	b.in();
	a=b;
	a.show();
	b.show();

}
