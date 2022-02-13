using namespace std;
class k1
{
int rollno;
int marks[5];
public:
	void get ()
	{
	cout<<"enter roll no"<<endl;
	cin>>rollno;
	for(int i=0;i<5;i++)
	{
	cout<<"enter marks "<<endl;
	cin>>marks;
	}
	
	void print()
	{
		cout<<roll no<<" "<<endl;
			for(int i=0;i<5;i++)
	{
	cout<<marks;
	}
	}
}
};
main()
{
k1 E;
E.get();
E.print();
}
