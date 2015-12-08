#include <iostream.h>

float ship_cost[]={1.63,2.95,7.18,9.16};

int main(){

int i;

int num[]={10,20,30};
void change_values (int*, int);

change_values(num, 3);

cout<<"new values of array is: \n";

for ( i=0;i<3;i++)
cout<<num[i]<<" "; 


return 0;

}


void change_values(int *ptr, int size)

{

	for (int i=0;i<3;i++)
	//ptr[i] +=5;
	*ptr++ +=5;
} 

