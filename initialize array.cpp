#include <iostream.h>

int main()
{


int nums []= {11, 32, 43, 21, 43, 245, 53, 76, 864, 73}; //This is the second way to load an array. 

int array_size=sizeof(nums)/sizeof(int);
cout<<"Array size is: "<<array_size<<"\n\n\n";


/*for (int i = 0; i<10; i++) //load the array

	{
		cout<<"Enter a number: ";
		cin>>nums[i];
		
	}*/
	
for (int i=0; i<10; i++)
 	cout<<nums[i]<<" ";
	
return 0;

}

