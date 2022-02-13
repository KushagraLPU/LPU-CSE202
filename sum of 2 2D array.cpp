#include<iostream>
using namespace std;

main()
{

int i,j,a,b,c,d;

cout<<"Enter the limits of 2-D array 1 and 2 together"<<endl;

cin>>a>>b;

int arr1[a][b];
int arr2[a][b];

{
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
cout<<"enter the values of array 1 ";
cin>>arr1[i][j];
}
}
}

{
cout<<"entered values of array 1 are"<<endl;
for(i=0;i<a;i++)
{
for(j=0;j<2;j++)
{
cout<<arr1[i][j]<<" ";
}
cout<<"\n";
}
}


{
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
cout<<"enter the values of array 2 ";
cin>>arr2[i][j];
}
}

{
cout<<"entered values of array 2 are"<<endl;
for(i=0;i<a;i++)
{
for(j=0;j<2;j++)
{
cout<<arr2[i][j]<<" ";
}
cout<<"\n";
}
}

}


{

int sum[a][b];

for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
sum[i][j]=arr1[i][j]+arr2[i][j];
}
}

cout<<"The total summed array 1 and array 2 is given as"<<endl;
for(i=0;i<a;i++)
{
for(j=0;j<2;j++)
{
cout<<sum[i][j]<<" ";
}
cout<<"\n";
}

}


}


