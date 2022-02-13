#include<iostream>
using namespace std;
void volume (int l, int w=3,int h=4);
main ()
{
	volume();
	volume(10 );
	volume(10,20 );
	volume(10,20,30);
	
}
void volume(int l,int w,int h)
{
cout<<"Volume is ="<<l*w*h<<endl;
}
