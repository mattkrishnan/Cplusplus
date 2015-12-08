#include <iostream.h>


void passbyvalue(int n, int m)
{
	n = 600;
	m = 200;
}

void passbyreference(int *ptr1, int *ptr2)
{

*ptr1=95;
*ptr2=105;

}

int main(){

void passbyvalue(int, int);
void passbyreference(int*, int*);

int num1, num2;
cout<<"Enter 2 numbs: ";
cin>>num1>>num2;

passbyvalue(num1,num2);
cout<<"After calling passbyvalue."<<'\n';
cout<<"num1 is equal to "<<num1<<'\n';
cout<<"num2 is equal to "<<num2<<'\n';

passbyreference(&num1, &num2);
cout<<"\nAfter calling passbyreference."<<'\n';
cout<<"num1 is = "<<num1<<'\n';
cout<<"num2 is = "<<num2<<'\n';


return 0;

}

