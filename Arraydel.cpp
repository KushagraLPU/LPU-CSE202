#include<iostream>
using namespace std;
main()
{
int a[]={23,24,25,26};
int i,pos,val=0;
cout<<"The old array is"<<endl;
for(i=0;i<4;i++)
{
cout<<a[i]<<endl;
}
cout<<"enter the element on which u want to delete";
cin>>pos;

for(i=0;i<4;i++)
{
if(a[i]==pos)
a[i]=val;
}
if(val!=0)
{
for(i=0;i<4;i++)
a[i]=a[i+1];
}

cout<<"The new array is"<<endl;
for(i=0;i<3;i++)
{
cout<<a[i]<<endl;
}
}
