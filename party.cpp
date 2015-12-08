#include <iostream.h>
int main()
{

int male_cnt, female_cnt;
male_cnt=female_cnt=0;


char sex;

for (int i=0; i<10; i++)
{
cout<<"Enter your Gender: ";
cin>>sex;

if ((sex=='f')||(sex=='F'))
female_cnt++;


else
male_cnt++;

//if ((sex=='m')||(sex=='M'))
//male_cnt++;
}

//else (i--);
//cout<<"Wrong entry, try again";



cout<<"We had: "<<male_cnt<<" male guests and "<<female_cnt<<" female guests";


return 0;
}

