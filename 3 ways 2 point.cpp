#include <iostream.h>

int main(){


int num[3]={10,20,30};
int *ptr1, *ptr2, *ptr3, i;

ptr1 =num;

for (i=0; i<3; i++)
	cout<<*ptr1++<<" ";
cout<<"\n\n\n";


ptr2 = &num[0];
for (i=0; i<3; i++)
	cout<<ptr2[i]<<" ";
cout<<"\n\n\n";



ptr3 =num+0;
for (i=0; i<3; i++)
	cout<<*(ptr3+i)<<" ";
cout<<"\n\n\n";


return 0;

}

