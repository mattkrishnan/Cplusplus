#include <iostream.h>

int main()
{

int *ptr= new int[10];

for (int i=0; i<10; i++)

{
cout<<"Enter a num: ";
cin>>ptr[i];

}

for (int i=0; i<10; i++)
cout <<*ptr++<<"  ";

delete []ptr;
cout<<"\n\n";

for (int i=0; i<10; i++)
cout <<*ptr++<<"  ";


return 0;

}

