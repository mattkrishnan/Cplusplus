#include <iostream.h>

int main(){

char *ptr;
char message[40]="Mammamia here you go again";

//ptr=message; //ptr=&message[0]; these twi are the same


ptr=&message[25];
//cout<<"message is:"<<*ptr<<'\n';
//cout<<"By ptr is: "<<ptr<<'\n';
//cout<<(void*)ptr;




for (int i =0; i<25;i++)
cout<<*ptr--;

return 0;

}

