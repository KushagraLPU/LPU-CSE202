#include<iostream>
#include<fstream>
using namespace std;
class employee
{public:
	int id;
	string name;
    float salary;
};
main()
{
	employee emp;
	emp.name="Kushagra";
	emp.id=007;
	emp.salary-900000.000;
fstream f1;
f1.open("emp_1.txt",ios::out|ios::app);
f1.write((char*)&emp,sizeof(emp));
f1.close();
f1.open("emp_1.txt",ios::in);
f1.read((char*)&emp,sizeof(emp));
cout<<emp.id<<endl;
cout<<emp.name<<endl;
cout<<emp.salary<<endl;
f1.close();
}
