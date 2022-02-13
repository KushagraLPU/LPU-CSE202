#include<iostream>
using namespace std;
void sum1(int ,int x=1);
void sum1(double,double);
void sum1(char,char);
main ()
{
int a=10,b=20;
double c=7.52,d=8.23;
char e='A',f='B';
sum1(a,b);
sum1(c,d);
sum1(e,f);	
}
void sum1(int x,int y)
{
cout<<"sum of int. is = "<<x+y<<endl;
}
void sum1(double x,double y)
{
cout<<"sum of double. is = "<<x+y<<endl;
}
void sum1(char x,char y)
{
cout<<"sum of char. is = "<<x+y<<endl;
}
