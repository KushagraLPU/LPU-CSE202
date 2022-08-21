#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
}
main()
{
int n;
cout<<"enter the no. of elements u want to enter ";
cin>>n;
int arr[n];
cout<<"enter the element of array ";
for(int i=0;i<n;i++)
cin>>arr[i];
bubblesort(arr,n);
cout<<"the new array is "<<endl;
for(int i=0;i<n;i++)
cout<<arr[i]<<endl;
}

