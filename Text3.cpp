#include <iostream.h>

int main(){

char *ptr1, *ptr2;
char message[40]="Mammamia here you go again";

ptr1=message;
char s1[40];
ptr2=s1;

int i =0;
	while (ptr1[i] !='\0')
	{
	ptr2[i]=ptr1[i];
	i++;
	}
s1[i]='\0';	   
cout<<message<<'\n';
cout<<s1<<'\n';

return 0;

}

