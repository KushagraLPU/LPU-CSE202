
#include<iostream> 
using namespace std;
class match
{
int player_score;
static int team_score;
static int p;
public:
void get_scores()
{
cout<<"Enter the score of Player_"<<p<<" = ";
cin>>player_score;
team_score+=player_score;
p++;
}
void show_scores()
{
cout<<"Total scores of the team is = " <<team_score<<endl;
}
// styatic function to reclaculate the scores incase of rainfall
static rainfall(int z)
	{   
		team_score-=z;
		cout<<"Total scores after rainfall = "<<team_score<<endl;
	}

};
int match::p=1;
int match::team_score;
main()
{
	int d;
	char r;
cout<<"Enter the scores of the player one by one for total score to be calculated"<<endl;
match p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,t1,t2;
p1.get_scores();
p2.get_scores();
p3.get_scores();
p4.get_scores();
p5.get_scores();
p6.get_scores();
p7.get_scores();
p8.get_scores();
p9.get_scores();
p10.get_scores();
t1.show_scores();
cout<<"Enter Y if the rainfall happpens else enter N = ";
cin>>r;
if(r=='Y')
{
	cout<<"Enter the score you want to deduct from the total = ";
	cin>>d;
	t2.rainfall(d);
}
}
