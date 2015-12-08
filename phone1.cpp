#include <iostream.h>
#include <iomanip.h>

int main()
{
int mu;
float bill, rate1, rate2, rate3, plan1, plan2, plan3, baserate;

cout<<setprecision(2);
cout<<setiosflags(ios::fixed|ios::showpoint);

baserate = 7.50;
rate1= .06;
rate2= .05;
rate3= .04;


cout<<"How many message units were used?\n";
cin>>mu;

if (mu <=80)
bill = baserate;

else if (mu <=140)
{
plan1 = (mu-80)*rate1;
bill = plan1 + baserate;
}

else if (mu <=200)
{
plan1 = rate1*60;
plan2 = (mu-140)*rate2;
bill = plan1 + plan2 + baserate;
}

else 
{
plan1 = rate1*60;
plan2 = rate2*60;
plan3 = (mu-200)*.04;
bill = plan1 + plan2 + plan3 + baserate;
}

cout<<"Your bill is: $"<<bill;


return 0;
}
/*
How many message units were used?
201
Your bill is: $14.14
Press Enter to return to Quincy...*/


