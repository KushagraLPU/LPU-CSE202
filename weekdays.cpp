#include<iostream>
using namespace std;
enum days {sun,mon,tue,wed,thur,fri,sat};
main()
{
	days day1,day2;
	day1=sun;
	day2=fri;
	cout<<"Day1="<<day1<<" "<<"Day2="<<day2<<endl;
	if(day1>day2)
	{
	cout<<"Day1 is near";	
	}
	else
	{
	cout<<"Day2 is near";	
	}
	
 } 
