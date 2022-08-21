#include<iostream>
using namespace std;

class check
{
        int a,b;
        public:
                
                check(int,int);//parameterized
                
                void test()
                {
                        if(a>b)
                        {
                                cout<<"a: "<<a<<" is greater"<<endl;
                        }
                        else
                        {
                                cout<<"b: "<<b<<" is greater"<<endl;
                        }
                }
};
check::check(int x,int y):a(y),b(a){}
main()
{
        check c(5,15);
        c.test();
    }
