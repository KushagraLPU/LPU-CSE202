#include<iostream>
using namespace std;
class sister;
class brother 
{
	int pay,bonus,total_b;
	public:
	void info_b()
	{
		pay=12;
		bonus=6;
		total_b=pay+bonus;
		}
	friend  class sister;
};
class sister
{
	int old_saving ,new_saving ,total_s;
	public:
	info_s()
	{
	old_saving=12;
	new_saving=6;
	total_s=old_saving+new_saving;
	}

	void total_amount(brother b,sister s)
	{
		cout<<"total amount is = "<<b.total_b+s.total_s;
	}
};

main ()
{int a;
brother objb ;
sister objs ;
objb.info_b();
objs.info_s();
objs.total_amount(objb,objs);
}

