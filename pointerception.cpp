#include <iostream.h>

int main(){

char ch='A';

char *ptr1;

ptr1=&ch;

char **ptr2 =&ptr1;

char ***ptr3 = &ptr2;

cout<<*ptr1<<'\n';
cout<<**ptr2<<'\n';
cout<<***ptr3<<'\n';

return 0;

}

