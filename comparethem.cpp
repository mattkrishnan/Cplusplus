#include <iostream.h>

int main()
{

	int comparethem (int*, int*);
	
	int num1, num2, larger;
	
	cout<<"Enter 2 nums: ";
	cin>>num1>>num2;
	larger = comparethem(&num1, &num2);
	
	cout<<"larger value is: "<<larger<<'\n'; 
	
return 0;

}


int comparethem(int *ptr1, int *ptr2)

	{
		/*if (*ptr1>*ptr2)
			return (*ptr1);
		else
			return (*ptr2);*/
			
			
		return ((*ptr1>*ptr2)?*ptr1:*ptr2);
			
	}

