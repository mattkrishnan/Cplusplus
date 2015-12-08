#include <iostream.h>

int main ()

{
	cout<<"Enter your favorite sentence: ";
	void write_it_backward (); //prototype
	write_it_backward ();	  //function call

	cout<<'\n';
	
	
return 0;

}

void write_it_backward()
{

	char ch;



	if ((ch = cin.get())!='\n')

	write_it_backward ();

	cout<<ch;

}

