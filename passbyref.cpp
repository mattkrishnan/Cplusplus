#include <iostream.h>
void passbyreference(int *ptr1, int *ptr2)
{

*ptr1=95;
*ptr2=105;

}


int main(){

void passbyreference(int*, int*);



int num1, num2;
cout<<"Enter 2 numbs: ";
cin>>num1>>num2;

passbyreference(&num1, &num2);
cout<<"After calling passbyreference.";
cout<<"num1 is = "<<num1<<'\n';
cout<<"num2 is = "<<num2<<'\n';


return 0;

}

