#include <iostream.h>

int swapit (int, int);

int main ()
{

	
	int num1, num2;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"\nYour first number is: "<<num1<<endl;
	cout<<"Your second number is: "<<num2<<endl;
		
	swapit (num1, num2);
	
	cout<<"\nThe values are swapped!"<<endl;
	cout<<"The first number is now: "<<num1<<endl;
	cout<<"The second number is now: "<<num2<<endl;
	
	return 0;
	
}


int swapit(int x, int y)
{

	int tempnum; 	//this variable has no value yet
	x = tempnum;	//tempnum now has a value of x, or num1 in the program	 
 	y = x;			//value of y should now be in x
	tempnum = y;	//value of tempnum should now be in y
	return (x, y);
}

