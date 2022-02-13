#include<iostream>
using namespace std;
class student
{

int rollno,math_marks,science_marks;

public:
void get()
{
	cout<<"enter rollno and marks of maths and science  ";
	cin>>rollno>>math_marks>>science_marks;
}
void show()
{
	int sum=math_marks+science_marks;
	cout<<"Roll no="<<rollno;
	cout<<"\nMaths marks is "<<math_marks;
	cout<<"\nScience marks is "<<science_marks;
	cout<<"\nThe average marks are "<<sum/2;
}
};
main()
{
class student pro;
pro.get();
pro.show();
}
