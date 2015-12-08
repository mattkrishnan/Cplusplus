#include <iostream.h>
#include <iomanip.h>

int main()
{
	int credits;
	float amount;
	char status, degree;
	
	cout<<setprecision(2);
	cout<<setiosflags ( ios :: fixed | ios :: showpoint);
	
	
	cout<<"Enter number of credits: ";
	cin>>credits;
	
	cout<<"Enter 'I' for in-state tuition and 'O' for out of state tuition: ";
	cin>>status;
	
	switch (status)
	{
	
		case 'I':
			cout<<"Enter 'U' for undergraduate and 'G' for graduate: ";
			cin>>degree;
			switch (degree)
			{
				case 'U':
				amount = 100 * credits;
				break;
				
				case 'G':
				amount = 400 * credits;
				break;
				
			}
		break;	  	  	  	  	  	  
		
		
		case 'O':
			cout<<"Enter 'U' for undergraduate and 'G' for graduate: ";
			cin>>degree;
			switch (degree)
			{
				case 'U':
					amount = 700 * credits;
					break;
				case 'G':
					amount = 950 * credits;
					break;	  	  	  	  	  	  
			}
		break;
			
		
		
	}
	
	cout<<"Number of Credits: "<<credits<<"\n";
	cout<<"You pay: $"<<amount;


	return 0;
}
			

