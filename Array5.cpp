#include<iostream>
using namespace std;
main()
{
int a[]={23,24,25,26};
int i,pos,val;
cout<<"The old array is"<<endl;
for(i=0;i<4;i++)
{
cout<<a[i]<<endl;
}
cout<<"enter the position on which u want to enter the element ";
cin>>pos;
cout<<"enter the value on which u want to enter ";
cin>>val;

for(i=4;i>=0;i--)
{	
if(i>pos)
a[i+1]=a[i];
else if(i==pos)
a[i]=val;
else
break;
}

cout<<"The new array is"<<endl;
for(i=0;i<5;i++)
{
cout<<a[i]<<endl;
}
}
