#include <iostream.h>

int main ()

{
	int x=2;
	int *x_ptr;
	int y =3;
	int *y_ptr;
	
	x_ptr=&x;
	y_ptr=&y;
	
	cout<<*x_ptr<<" "<<*y_ptr<<"\n\n";
	
	x_ptr=&y;
	y_ptr=&x;
	
	cout<<*x_ptr<<" "<<*y_ptr;
	


	return 0;
}

