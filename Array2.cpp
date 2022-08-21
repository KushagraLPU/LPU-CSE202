#include<iostream>
using namespace std;
main()
{int a[10];
int i,s1,s2,sum=0;
cout<<"enter the values of array"<<endl;
for(i=0;i<10;i++)
{	
	cin>>a[i];
}
for(i=0;i<10;i++)
{	
if(a[i]%10==0)
{
	continue;
}
else
{
	s1=a[i]%10;
	s2=a[i]/10;
}
	sum=s1+s2;
}
cout<<"The final sum of all two digit no. in this array is = "<<sum;
}
