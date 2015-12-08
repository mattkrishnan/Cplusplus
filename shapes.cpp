#include <iostream.h>
#include <iomanip.h>

int main()
{
char shape;
float height, base, length, width, radius, area;
cout<<setprecision(2);
cout<<setiosflags(ios::fixed | ios:: showpoint);

cout<<"Pick a shape! t = triangle, r = rectangle, c = circle: ";

cin>>shape;


if (shape == 't')
{

cout<<"Enter height and base: ";
cin>>height>>base;

area = 0.5*height*base;

cout<<"The area of your triangle is: "<<area;
}


else if (shape =='r')
{
cout<<"Enter length and width: ";
cin>>length>>width;

area = length*width;

cout<<"The area of your rectangle is: "<<area;
}


else if (shape=='c')
{
float pi=3.14159;
cout<<"Enter radius: ";
cin>>radius;

area = pi*radius*radius;

cout<<"The area of your circle is: "<<area;
}

else
cout<<"Wrong Shape";

return 0;

}

