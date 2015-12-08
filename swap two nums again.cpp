#include <iostream.h>

void placeholder(int, int);


int main ()
{
	void swapit (int x, int y);
	
	int num1, num2;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"Your first number is: "<<num1<<endl;
	cout<<"Your second number is: "<<num2<<endl;
		
	placeholder (num1, num2);
	
	cout<<"\nThe values are swapped!"<<endl;
	cout<<"The first number is now: "<<num1<<endl;
	cout<<"The second number is now: "<<num2<<endl;
	
	return 0;
	
}


void placeholder(int num1, int num2)
{

	int tempnum; 		//this variable has no value yet
	num1 = tempnum;	 	//tempnum now has a value of x, or num1 in the program	 
 	num2 = num1;	  	//value of y should now be in x
	tempnum = num2;	   	//value of tempnum should now be in y
	
}

