#include <iostream.h>
#include <ctype.h>
#include <cstring>


//*strncmp(*s1,*s2,4)

int main (){

char s1[]="ABCD";
char s2[]="abcd";

if (stricmp (s1,s2)==0)
	cout<<"Identical string.";
	
	else
	cout<<"Strings are different.";


return 0;

}

