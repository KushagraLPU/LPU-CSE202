#include<iostream>
using namespace std;
class employ 
{
	int b_pay,bonus,t_pay;
	public:
	void salary ()
	{
		
		b_pay=10000;
		bonus=500;
	
	}
	friend  void totalsalary(employ);
};
void totalsalary(employ obj)
{
	cout<<"total salary is ="<< obj.b_pay+obj.bonus;
}
main()
{
	employ obj;
	obj.salary();
	totalsalary(obj);
}
