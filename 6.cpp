#include<iostream>
using namespace std;
class abc
{
int x;
public:
abc()  // parameterized constructior
{
x=0;
}
int show()
{
return(x);
}
void friend operator++(abc &b);
void friend operator++(abc &b,int );
};
void operator++(abc &b)
{  
   cout<<"prefix "<<endl;
   b.x=b.x+1;
   
}
void operator++(abc &b,int )
{  
   cout<<"postfix "<<endl;
   b.x=b.x+1;
   }

main()
{
abc o1,o2;
++o1;
cout<<o1.show()<<endl;
o2++;
cout<<o2.show()<<endl;
}

