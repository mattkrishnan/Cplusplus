#include <iostream.h>
int main()
{

int num []={ 7, 28, 256, 98, 15, 73, 81, 19, 500, 601};

int largest, smallest, largest_loc, smallest_loc, i;

smallest_loc = largest_loc = 0; 

largest = smallest = num [0];

for (i=1; i<=10; i++)

	{
		if (num[i]>largest)
		
		{
			largest =num[i];
			largest_loc = i;
		}
		
		else if (num [i]< smallest)
		
		{
			smallest = num[i];
			smallest_loc=i;
		}
	}
		
	cout<<"largest value: "<<largest<<"\n";
	cout<<"smallest value: "<<smallest<<"\n";
	cout<<"largest value is at: "<<largest_loc<<"\n";
	cout<<"smallest value is at: "<<smallest_loc<<"\n";	

return 0;
}

