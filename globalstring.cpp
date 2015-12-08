#include <iostream.h>

char x[]="string declared globally";// array notation

int main(){

char *y="The string is declared locally"; //pointer notation
cout<<x<<"\n\n"<<y<<'\n';

return 0;

}

