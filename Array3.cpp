#include<iostream>
using namespace std;
main()
{int a[5];
int i,j;
int b=0;
cout<<"enter the values of array"<<endl;
for(i=0;i<5;i++)
{	
	cin>>a[i];
}

for(j=0;j<5;j++)
{
	if(a[j]>25)
	b=b+1;
}
cout<<"The No of values greater than 25 are = "<<b;
}

