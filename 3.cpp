// inheritance single example
#include<iostream>
using namespace std;
class B
{
protected :
int x;
public :
void get()
{
cout<<"enter the value of x"<<endl;
cin>>x; } 
void display()
{
	cout<<"value of x is = "<<x<<endl;
}

void increment()
{
	x++;
}
};

class D:public B
{
public:
void decrement()
{
	x--;
}
 
};

main()
{
D obj;
obj.get();
obj.increment();
obj.display();
obj.decrement();
obj.display();

}
