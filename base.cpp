#include<iostream>
using namespace std;
class Account                  //parent  class
{
public:
	float salary=60000;
		};

class derived: public Account  //child class
{
	public:
		float bonus=5000;
};

int main(void)
{
	derived o1;
	cout<<"Salary"<<o1.salary<<endl;
	cout<<"Bonus"<<o1.bonus<<endl;
	return 0;
}
