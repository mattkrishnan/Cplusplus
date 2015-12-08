#include <iostream.h>

int main(){

	int *ptr, x=2;
	
	ptr =&x;
	
	cout<<x<<'\n';
	cout<<*ptr, x=2;
	



	cout<<"\nAddress of x is: "<<&x<<'\n';
	cout<<"by pointer x is at: "<<ptr<<'\n';	
	cout<<"Pointer is at: "<<&ptr<<'\n';
	
	return 0;  
}

