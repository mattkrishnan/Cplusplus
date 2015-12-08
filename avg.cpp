#include <iostream.h>

int main()
{
int t1, t2, t3, t4;
char grade;
float avg;

/*cout<<setprecision(1);
cout<<setiosflags(ios::fixed | ios :: showpoint);*/

cout<<"Enter 4 test scores. ";
cin>>t1>>t2>>t3>>t4;
avg = (t1+t2+t3+t4)/4.0;

if (avg < 60)
grade='F';

else if (avg < 70)
grade='D';

else if (avg < 80)
grade='C';

else if (avg < 90)
grade='B';

else grade='A';

cout<<"Your average is:"<<avg;

cout<<"\nYour grade is:"<<grade;



return 0;
}

