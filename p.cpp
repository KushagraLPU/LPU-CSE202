#include<iostream>
using namespace std;
main()
{
void *p;
int a=7;
float b=12.1;
p=&a;
cout<<*((int *)p)<<endl;
p=&b;
cout<<*((float *)p);
}
