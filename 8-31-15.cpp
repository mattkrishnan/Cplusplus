#include <iostream.h>
int main()
{
int num1, num2;
cout<<"Enter 2 numbers:";
cin>>num1>>num2;
/*
if (num1>num2)
{
cout<<num1;
cout<<"\nI Know That";
}
else 
{
cout <<num2;
cout<<"\nGood for you";
}
*/


if (num1==num2)
cout<<"Both numbers are the same";
else 
cout<<((num1>num2)?(num1):(num2));

return 0;
}

