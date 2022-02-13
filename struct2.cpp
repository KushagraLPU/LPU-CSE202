#include<iostream>
using namespace std; // std is standard namespace

union student
{
char name[20];
int rollno ;
float marks;
} s1,s2,s3,s4;

main()
{
cout<<" enter the name, rollno, marks ";
cin>>s1.name;
cin>>s2.rollno;
cin>>s3.marks;
// task: enter the values for other part of the sturcuture also
cout<<" the marks are\n "<<s1.marks;
cout<<s2.rollno;
cout<<"\n"<<s3.name;
}
