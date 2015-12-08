#include <iostream.h>
#include <string.h>

 int main(){
 
 struct date
 
 	{	
		int month;
		int day;
		int year;
	};	  	  
 
 struct date x;
 
 x.month = 11;
 x.day = 23;
 x.year = 2015;
 
 cout<<x.month<<"/"<<x.day<<"/"<<x.year;
 
 
 return 0;
 
 }

