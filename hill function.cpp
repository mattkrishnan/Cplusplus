#include <iostream.h>

int main ()

{

	void hill (int);
	hill (1);
	
	
return 0;

}


void hill (int n)
{

	if (n<=100)
	
	hill (3*n-1);
	
	cout<<n<<"\n";
	
}

