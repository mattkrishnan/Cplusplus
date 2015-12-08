#include <iostream.h>

class table
{

private:
int length, width;

public:

	void set_data (int l, int w)
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

table coffee, conf, dining;

coffee.set_data(5,2);

conf.set_data(10,5);

dining.set_data(8,4);

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

