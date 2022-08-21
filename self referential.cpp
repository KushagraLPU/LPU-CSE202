//progrqam for self referential calss / link list 
#include<iostream>
using namespace std;
class node
{public:
	int data;
	node *next; //self referential
	
};
main()
{
 node *head=NULL;
 node *second=NULL;	
head=new node();
second=new node();
head->data=1;
head->next=second;
second->data=90;
second->next=NULL;
cout<<head->data;
cout<<second->data;
}
