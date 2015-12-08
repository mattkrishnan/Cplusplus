#include <iostream.h>
int main()
{
int num1, num2, num3, largest;
cout<<"Enter 3 nums:";
cin>>num1>>num2>>num3;

if((num1==num2)&&(num1==num3))
{cout<<"These numbers are identical. ";
largest=num1;
}
else
{
if (num1>num2)
largest=num1;
else
largest=num2;
}
if(num3>largest)
largest=num3;

cout<<"The largest value is: "<<largest;


return 0;
}

