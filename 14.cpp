//problem statement for class to class with constructor
#include<iostream>
using namespace std;
class time_s // source class
{

int hr, min;
public:
time_s(int a, int b)
{
hr=a;
min=b; }

int gethr( ) { return hr; }
int getmin( ) { return min; }
};
class time_d // desitination class
{
int minutes;
public:
friend class time_s;
time_d() { }
time_d(time_s x )
{
int m=x.getmin();
int h=x.gethr();
minutes =m+(h*60);
}
void show()
{
cout<<" minutes after conversion "<<minutes<<endl;
}
};
main()
{
time_s t(1,30);
time_d tm;
tm=t;
cout<<t.gethr()<<":"<<t.getmin();
tm.show();
}
