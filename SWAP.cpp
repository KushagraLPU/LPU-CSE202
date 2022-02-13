#include<iostream>
using namespace std;
main()
{
	int a=1,b=2;
	void swap(int a,int b);
	cout<<"enter the no. on which you work on";
	cin>>a>>b;
	swap(a,b);
	cout<<"After the function done still original value is   "<<a<<" "<<b<<endl;
}
void swap(int x , int y)
{
	int c=x;
	x=y;
	y=c;
	cout<<"Inside the funtion "<<x<<" "<<y<<endl;

}
