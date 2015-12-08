/* 
Tushar Balarajan
ITP 132 - C++ Programming 1
Professor Noor
Program 4
*/

#include <iostream.h>
#include <iomanip.h>

int main()
{

	cout<<setprecision(2);
	cout<<setiosflags(ios::fixed|ios::showpoint);

	float sales, bonus;
	int zero_bonuscnt, ten_percentcnt, five_pluscnt;

	zero_bonuscnt=ten_percentcnt=five_pluscnt=0;

	for (int i=0; i<10; i++)

		{

		cout<<"Enter amount of sales:\n";
		cin>>sales;

		if (sales >= 5000)
			{
			five_pluscnt++;
			bonus = ((sales -5000)*.05)+500;
			cout<<"Your Bonus is: $"<<bonus<<endl;
			}


		else if (sales>=2000)
			{
			ten_percentcnt++;
			bonus = sales * .10;
			cout<<"Your Bonus is: $"<<bonus<<endl;
			}

		else
			{
			zero_bonuscnt++;
			bonus = 0; 
			cout<<"You don't get a bonus. Work harder next time!\n";
			}

		}
			cout<<zero_bonuscnt<<" salesmen got no bonus.\n"<<ten_percentcnt<<" salesmen got ten percent bonus.\n"<<five_pluscnt<<" salesmen got $500 plus 5% bonus.";

return 0;

}

/*
Enter amount of sales:
500
You don't get a bonus. Work harder next time!
Enter amount of sales:
5001
Your Bonus is: $500.05
Enter amount of sales:
2500
Your Bonus is: $250.00
Enter amount of sales:
2600
Your Bonus is: $260.00
Enter amount of sales:
6000
Your Bonus is: $550.00
Enter amount of sales:
15
You don't get a bonus. Work harder next time!
Enter amount of sales:
20
You don't get a bonus. Work harder next time!
Enter amount of sales:
8000
Your Bonus is: $650.00
Enter amount of sales:
2300
Your Bonus is: $230.00
Enter amount of sales:
4000
Your Bonus is: $400.00
3 salesmen got no bonus.
4 salesmen got ten percent bonus.
3 salesmen got $500 plus 5% bonus.
Press Enter to return to Quincy...
*/

