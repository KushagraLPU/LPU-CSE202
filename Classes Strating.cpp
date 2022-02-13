#include<iostream>
using namespace std;
class info
{
int rollno;
char name[30];
public:
void get()
{
	cout<<"enter rollno and names ";
	cin>>rollno>>name;
}
void show()
{
	cout<<"Roll no="<<rollno;
	cout<<"\nName is "<<name;
}
};
main()
{
class info pro;
pro.get();
pro.show();
}
