#include<iostream>
using namespace std;
class abc
{
public:
	int x,y;

void getdata(int a,int b) // parameterized constructior
{
x=a;
y=b;
}
void display()
{
cout<<x<<" "<<y<<endl;
}
friend abc operator+(abc b,abc c);
};
abc operator+(abc b,abc c)
{
abc q;  
q.x=b.x+c.x;
q.y=b.y+c.y;
return q;
}

main()
{
abc obj1,obj2;
obj2.getdata(20,10);
obj1.getdata(10,20);
obj1.display();
obj2=obj1+obj2;
cout<<"after overloading"<<endl;
obj2.display();
}
