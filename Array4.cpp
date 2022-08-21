#include<iostream>
using namespace std;
main()
{int a[5];
int i,q,w,e,sum=0;
int b=0;
cout<<"enter the values of array"<<endl;
for(i=0;i<5;i++)
{	
	cin>>a[i];
}

for(i=0;i<5;i++)
{
    if(a[i]>9&&a[i]<100)
	{
		sum=sum+a[i];
	q=a[i]/10;
	w=a[i]%10;
	e=q+w;
	a[i]=e;	
	
	}
	
}
cout<<"The sum of all two digit no in array is "<<sum<<endl;
cout<<"The new array is"<<endl;
for(i=0;i<5;i++)
cout<<a[i]<<endl;
}

