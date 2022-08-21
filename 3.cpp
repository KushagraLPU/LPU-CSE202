#include<iostream>
using namespace std;
class abc
{
	public:
abc()
		{
			cout<<"A"<<endl;
			
		}
	virtual	~abc()
		{
			cout<<"B"<<endl;
		}
	
};
class bca:public abc
{
	public:
		bca()
		{
			cout<<"C"<<endl;
		}
		~bca()
		{
			cout<<"d"<<endl;
		}
		
};
main()
{
	abc *ptr=new bca;
	delete ptr;
}
