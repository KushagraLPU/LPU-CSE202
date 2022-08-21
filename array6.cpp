#include<iostream>
using namespace std;
int binarysearch(int a[],int left,int right,int key)
{
	if(right>= left)
  {
	int mid;
	mid=(left+right)/2;
		
		if(a[mid]==key)
		return mid;
		
    	else  if(key<a[mid])
		binarysearch(a,left,mid-1,key);
		else 
	    binarysearch(a,mid+1,right,key);
    }
else
   
   return-1;
   }
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10,11,12};
int n,key,find;
n=sizeof(a)/sizeof(a[0]);
cout<<"enter the key u want to search";
cin>>key;
find=binarysearch(a,0,n-1,key);
if(find==-1)
{
	cout<<"not found";
}
else
{
	cout<<"iteam found on "<<find;
}
}
