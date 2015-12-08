#include <iostream.h>

int main()
{

char response;
char *c_ptr;
int *i_ptr;

cout<<"Enter i for interger or c for character: ";
cin>>response;

if (response =='i')
{
i_ptr=(int*)malloc(sizeof(int));
cout<<i_ptr;
}

else
{
c_ptr = (char*) malloc(1);
cout<<(unsigned)c_ptr;
}

free(c_ptr);
cout<<"\n\n";
cout<<(unsigned)c_ptr;

return 0;

}

