// inline function to calculate sum of two numbers 
#include<iostream>
using namespace std;
inline int sum(int x,int y)
{
return(x+y);
	}
main()
{
int a=3,b=8,c;

	c=sum(3,8);//funtion call
	cout<<"the sum of the two no is "<<c;
}

