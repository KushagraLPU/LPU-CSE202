#include<iostream>
using namespace std;
main()
{int a[10];
int i,j,s;
int b=0;
cout<<"enter the values of array"<<endl;
for(i=0;i<10;i++)
{	
	cin>>a[i];
}
cout<<"enter the values u want to be searched";
	cin>>s;

for(j=0;j<10;j++)
{
	if(a[j]==s)
	{
	cout<<"Founded the element "<<a[j]<<"at a["<<j<<"]";
b++;
}
}
if(b==0)
{
	cout<<"No such element in array";
}
}

