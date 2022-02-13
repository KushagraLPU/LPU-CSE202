#include<iostream>
using namespace std;
class first
{
private:
int age;
int marks;
public:
void getdata()
{
cout<<" enter age and marks"<<endl;
cin>>age>>marks;
}
void showdata()
{
cout<<age<<" "<<marks;
} };
main()
{
first obj1,obj2,obj3;
obj1.getdata();
obj1.showdata();
}


