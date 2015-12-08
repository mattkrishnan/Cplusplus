#include <iostream.h>

void swapit(int &x, int &y)
{

	int tempnum; 	//this variable has no value yet
	tempnum = x;	//tempnum now has a value of x in the program	 
 	x = y;		//value of y should now be in x
	y = tempnum;	//value of tempnum should now be in y
}

int main ()

{
int num1, num2;

cout<<"Enter two nums: ";
cin>>num1>>num2;

cout<<"The first number is: "<<num1<<'\n';
cout<<"The second number is: "<<num2<<'\n';

swapit(num1, num2);

cout<<"After the swapit function, the first number is now: "<<num1<<'\n';

cout<<"The second number is now: "<<num2<<'\n';


return 0;

}

