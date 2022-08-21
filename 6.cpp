#include<iostream>
using namespace std;
class A                  //parent  class
{
	private:
int a,b;
public:
	int mul()
	{a=4;
	b=5;
	int c=a*b;
	return c;
		}	
};

class B: private A  //child class
{
	public:
		void display()
		{
			int result = mul();
			std::cout<<"Multiplication of a and b is :"<<result<<std::endl;
		}
};
main()
{
	B obj;
	obj.display();
}
