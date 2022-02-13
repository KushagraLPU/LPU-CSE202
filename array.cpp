#include<iostream>
using namespace std;
main()
{int a[5][2];
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<2;j++)
{
	cout<<"enter the values of array";
	cin>>a[i][j];
}
}
for(i=0;i<5;i++)
{
cout<<"entered values of array are";
for(j=0;j<2;j++)
{
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
}

