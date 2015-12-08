/*Tushar Balarajan
C++
9/17/2015
Assignment 1 */

#include <iostream.h>
int main()

{

int price, movie_cnt, study_cnt;

movie_cnt=study_cnt=0;

for (int i=0; i<10; i++)

{

cout<<"How much is a movie ticket? ";
cin>>price;

if (price < 5)
{
movie_cnt++;
cout<<"Go to the movies!\n";
}
else 
{
study_cnt++;
cout<<"Stay home and study\n";
}

}

cout<<"We had "<<movie_cnt<<" people go to the movies and "<<study_cnt<<" people who stayed home and studied.";





return 0;
}

