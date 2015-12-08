#include <iostream.h>

int num = 0;

void f();
void g(int);
void h();

int main ()

{
	cout<<"Original value of num is: "<<num<<'\n'; //0
	f ();
	
	cout<<"After  f () is called, num's value is: "<<num<<'\n'; //0
	
	g(num);
	
	cout<<"After g() is called, num's value is: "<<num<<'\n'; //0
	
	h();
	
	cout<<"Final value of num is: " <<num;
	
	
	
	
	return 0;

}

void f()
{	
	int num=14;
}

void g(int num)
{
	num=400;
}


void h()
{

num=4;

}

