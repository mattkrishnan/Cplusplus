#include <iostream.h>

int main()
{


char stooge1[6]="Larry";

char stooge2[6]; //curly

char stooge3[4]; //moe

cout<<"Stooge2's name: ";
cin>>stooge2;

cout<<"Stooge3's name character by character: ";
cin>>stooge3;

stooge3[0]='M';
stooge3[1]='o';
stooge3[2]='e';
stooge3[3]='\0';

cout<<stooge1<<" "<<stooge2<<" "<<stooge3;
	
return 0;

}

