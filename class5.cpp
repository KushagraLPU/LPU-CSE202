#include<iostream>
using namespace std;
class books
{
private:
char Book[30];
int pages;
int price;
public:
void getdata();

void showdata();

};
void books::getdata()
{

cout<<" Enter Name of book,Pages and Price"<<endl;
cin>>Book>>pages>>price;
}
void books::showdata()
{
	
cout<<Book<<" "<<pages<<" "<<price;

}

main()
{
books obj1,obj2,obj3;
obj1.getdata();
obj1.showdata();
obj2.getdata();
obj2.showdata();
obj3.getdata();
obj3.showdata();
}
