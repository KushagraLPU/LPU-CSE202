#include<iostream>
using namespace std;
main()
{
int *p=new int[5];
p[0]=85;
cout<<*p<<endl;
delete[] p;
cout<<*p; //illegal//wrong//because mem is deleted

}
