#include <iostream.h>
int main()
{
	int num[3]={10,20,30}, ret_value, build_a_function(int);
	
	for (int i=0; i<3; i++)
		{
			ret_value = build_a_function(num[i]);
			cout<<"Returned value is: "<<ret_value<<'\n';
		}
				
	
return 0;
}



int build_a_function (int n)

{
	static int vals[3], index=0; //static makes data stick when passing values through functionsq
	vals[index]=n;
	cout<<"vals["<<index<<"]="<<vals[index]<<"\n\n";
	index++;
	return (n*n);
	
}

