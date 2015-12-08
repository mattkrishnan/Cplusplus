/* 
Tushar Balarajan
ITP 132 - C++ Programming 1
Professor Noor
Program 5
*/

#include <iostream.h>
#include <iomanip.h>

int main()
{
		int mu, plan1_cnt, plan2_cnt, plan3_cnt, baserate_cnt;
		float bill, rate1, rate2, rate3, plan1, plan2, plan3, baserate;
		plan1_cnt=plan2_cnt=plan3_cnt=baserate_cnt=0;
		cout<<setprecision(2);
		cout<<setiosflags(ios::fixed|ios::showpoint);

		/*I do this so I can easily change the rates down the road if the company needs it*/
		baserate = 7.50;
		rate1= .06;
		rate2= .05;
		rate3= .04;

			for (int i=0; i<10; i++)

			{
				cout<<"How many message units were used?\n";
				cin>>mu;

				if (mu <=80)
				{
					baserate_cnt++;
					bill = baserate;
					cout<<"You are paying the baserate and your bill is: $"<<bill<<endl;
				}
				
				else if (mu <=140)
				{
					plan1_cnt++;
					plan1 = (mu-80)*rate1;
					bill = plan1 + baserate;
					cout<<"You are in Plan 1 and your bill is: $"<<bill<<endl;

				}

				else if (mu <=200)
				{
					plan2_cnt++;
					plan1 = rate1*60;
					plan2 = (mu-140)*rate2;
					bill = plan1 + plan2 + baserate;
					cout<<"You are in Plan 2 and your bill is: $"<<bill<<endl;
				}

				else 
				{
					plan3_cnt++;
					plan1 = rate1*60;
					plan2 = rate2*60;
					plan3 = (mu-200)*.04;
					bill = plan1 + plan2 + plan3 + baserate;
					cout<<"You are in Plan 3 and your bill is: $"<<bill<<endl;
				}

			}
		cout<<baserate_cnt<<" customers paid the base rate."<<endl;
		cout<<plan1_cnt<<" customers are on Plan 1."<<endl;
		cout<<plan2_cnt<<" customers are on Plan 2."<<endl;
		cout<<plan3_cnt<<" customers are on Plan 3."<<endl;
return 0;
}
/*
How many message units were used?
201
Your bill is: $14.14
Press Enter to return to Quincy...*/


