#include<iostream>
using namespace std;
class student
{protected:
	int rollno;
	char name[20];
	public:
void get()
{
cout<<"enter roll no. and name"<<endl;
   cin>>rollno;
   cin>>name;
}
void show()
{
	cout<<"The roll no and name of student is "<<endl<<"roll no="<<rollno<<endl<<"Name="<<name<<endl;
}
};
class test
{
protected:
	int sub1,sub2;
	public:
void get()
{
cout<<"enter the marks of both subjects"<<endl;
   cin>>sub1>>sub2;
 }
void show()
{
	cout<<"The marks of student in \n Subject_1 = "<<sub1<<"\n Subject_2 = "<<sub2<<endl;
}
};
class sports
{
protected:
	int spr;
	public:
void get()
{
cout<<"enter the marks of in sports"<<endl;
   cin>>spr;
 }
void show()
{
	cout<<"The marks of student in Sports = "<<spr<<endl;
}
};
class result:public student,public test ,public sports
{
	public:
	display()
	{
	student::get();
    test::get();
	sports::get();
	 student::show();
    test::show();
	sports::show();    
	}
};
main()
{
result d;
d.display();
}
