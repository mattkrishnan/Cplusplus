#include <iostream.h>
#include <ctype.h>
#include <cstring>


char wow3[]="Taking CPP with Prof. Noor in 2015 is dangerous 123!";

int main (){

int i=0;

while (wow3[i] !='\0')
	{
	if (isspace(wow3[i]))
		
	//	  cout<<wow3[i];
	cout<<"*";
	i++;
	}
		

return 0;

}

