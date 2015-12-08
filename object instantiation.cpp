#include <iostream.h>

class table
{

private:
int length, width;

public:

	table(int l, int w)
	{
	length = l;
	width = w; 
	}


	int get_length()
	{
	return (length);
	}

	int get_width()

	{

	return (width);

	}

};


int main ()

{

table coffee(5,2), conf(10,4), dining(8,3);



cout<<"Length of coffee table is: "<<coffee.get_length()<<endl;
cout<<"Width of coffee table is: "<<coffee.get_width()<<endl;

cout<<"\n";

cout<<"Length of conference table is: "<<conf.get_length()<<endl;
cout<<"Width of conference table is: "<<conf.get_width()<<endl;

cout<<"\n";

cout<<"Length of dining table is: "<<dining.get_length()<<endl;
cout<<"Width of dining table is: "<<dining.get_width()<<endl;

return 0;

}

