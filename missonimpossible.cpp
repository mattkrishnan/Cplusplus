#include <iostream.h>

int main(){

/*Name of the array is the address of the array;*/
 char *get_name();
 char *ptr;
 
 ptr =get_name();
cout<<"Your name is: "<<ptr;


return 0;
}


char *get_name()
{
static char line [80];
cout<<"Enter your name: ";
 cin>>line;

return (line);
}

