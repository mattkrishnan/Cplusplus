#include <iostream.h>

int main()
{


int population [4];

char state [4][16];

for (int i=0; i<4; i++)
{

cout<<"Enter population and State's name:";
//cin>>population[i]>>state[i];

cin>>population[i];
cin.getline(state[i],16);


}

for (int i=0; i <4; i++)

cout<<population[i]<<"\t "<<state[i]<<'\n';
	
return 0;

}

