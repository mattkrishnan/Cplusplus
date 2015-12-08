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
 
 
 
 
 



 struct info 
 	{	
		struct date hired;
		struct date fired;


	}rec [2];
	
	
 for (int i=0; i<2; i++)
 {
 
 cout<<"enter the hire month: ";
 cin>>rec[i].hired.month;
 cout<<"enter the hire day: ";
 cin>>rec[i].hired.day;
 cout<<"enter the hire year: ";
 cin>>rec[i].hired.year;
 
cout<<"enter the fire month: ";
 cin>>rec[i].fired.month;
 cout<<"enter the fire day: ";
 cin>>rec[i].fired.day;
 cout<<"enter the fire year: ";
 cin>>rec[i].fired.year;
 

 }
 
  for (int i=0; i<2; i++)
 {
 cout<<"This person was hired on: "<<rec[i].hired.month<<"/"<<rec[i].hired.day<<"/"<<rec[i].hired.year<<endl;
cout<<"This person was let go on: "<<rec[i].fired.month<<"/"<<rec[i].fired.day<<"/"<<rec[i].fired.year<<endl;
 
 }
 
 	 





 return 0;
 
 }

