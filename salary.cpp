#include <iomanip.h>
#include <iostream.h>

int main()
{
int hours;
float rate, salary;
cout<<"Enter hours & rate please: ";
cin>>hours>>rate;
if (hours<=40)
salary=hours*rate;
else if (hours <=60)

salary =40*rate+1.5*rate*(hours-40);

else if (hours<=80)

salary=40*rate+1.5*rate*(hours-40)+20;

else salary = 2*hours*rate;

cout<<setprecision(2);
cout<<setiosflags(ios::fixed | ios :: showpoint);
cout<<"Your salary is:"<<salary;

return 0;

}

