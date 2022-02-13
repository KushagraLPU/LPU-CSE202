#include<iostream>
using namespace std;

main()
{
int a=3,b=8;

	int sum(int ,int );//prototype
	int c=sum(3,8);//funtion call
	cout<<"the sum is="<<c;
}
int sum(int k,int s)
{
	int x=k+s;
	return x;
	}
