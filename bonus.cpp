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

cout<<"Enter amount of sales:\n";
cin>>sales;

if (sales >= 5000)
{
bonus = ((sales -5000)*.05)+500;
cout<<"Your Bonus is: $"<<bonus;
}


else if (sales>=2000)
{
bonus = sales * .10;
cout<<"Your Bonus is: $"<<bonus;
}

else
{
bonus = 0; 
cout<<"You don't get a bonus. Work harder next time!";
}

return 0;

}

/*
Enter amount of sales:
1999
You don't get a bonus. Work harder next time!
Press Enter to return to Quincy...
*/


/*
Enter amount of sales:
2015
Your Bonus is: $201.50
Press Enter to return to Quincy...
*/

