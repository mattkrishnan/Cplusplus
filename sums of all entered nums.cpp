#include <iostream.h>

int main()
{


int num[10];
int i;
int sum=0;

for (i=0; i<10; i++)
{
cout<<"enter a number: ";
cin>>num[i];
sum=sum+num[i];
}
               
cout<<"\nThe sum is: "<<sum;
	
return 0;

}

