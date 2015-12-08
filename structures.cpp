#include <iostream.h>
#include <string.h>

 int main(){
 
 struct date //tag of structure
 	{	
		int month; //members of structure
		int day;
		int year;
		char month_name[4];
	} x;		
 
 
 
 
 
 
//struct date x;
 
 x.month = 11; //variable of type structure date whose members are month, day, and year
 x.day = 23;
 x.year = 2015;
 strcpy(x.month_name, "Nov");

 
 

/* 
cout<<"Enter Birth Month: ";
cin>>x.month;
cout<<"Enter Birthday: ";
cin>>x.day;
cout<<"Enter Birthyear: ";
cin>>x.year; */


 struct info 
 	{	
		struct date hired;
		struct date fired;


	}rec;
	
rec.hired.month=11;
rec.hired.day=23; 
rec.hired.year=2000;

rec.fired.month=3;
rec.fired.day=14; 
rec.fired.year=2015;

cout<<"This person was hired on: "<<rec.hired.month<<"/"<<rec.hired.day<<"/"<<rec.hired.year<<endl;
cout<<"This person was let go on: "<<rec.fired.month<<"/"<<rec.fired.day<<"/"<<rec.fired.year<<endl;

//cout<<x.month<<"/"<<x.day<<"/"<<x.year<<x.month_name;


 return 0;
 
 }

