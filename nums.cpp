#include <iostream.h>

int main(){

double num[]={10,20,30};
	//two different ways to print values of the array
	for (int i=0;i<3; i++)
	cout<<num[i]<<"  "<<*(num+i)<<'\n';
	
	cout<<"\n";
		
	//two different ways to print the address of array elements
	
	for (int i=0;i<3;i++)
	cout<<&num[i]<<"  "<<(num+i)<<'\n';
	
	cout<<"\n";
	
	for (int i=0;i<3;i++)
	cout<<(unsigned)&num[i]<<"  "<<(unsigned)(num+i)<<'\n';
	
	return 0;
	
	}

