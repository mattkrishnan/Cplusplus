#include <iostream.h>

float ship_cost[]={1.63,2.95,7.18,9.16};

int main(){

int zip_code;

cout<<"Enter your zip_code: ";
cin>>zip_code;
cout<<"Cost for the package is: "<<ship_cost[zip_code];


return 0;

}

