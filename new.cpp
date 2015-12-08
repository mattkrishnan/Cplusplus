#include <iostream.h>

int main()
{

char *ptr = new char('A');

//*ptr ='b';

cout<<(unsigned)ptr;
cout<<"\n\n";
cout<<(int)*ptr;
delete ptr;
cout<<"\n\nAfter Delete\n\n";
cout<<(unsigned)ptr;
cout<<"\n\n";
cout<<(int)*ptr;



return 0;

}

