#include <iostream.h>
int main()
{

int st_id[5], grade[5][4], avg[5];
int sum;


int row, col;

for (row=0; row<5; row++)

	{
	cout<<"Enter student id: ";
	cin>>st_id[row];
	
		for (col=0; col<4; col++)
		
			{
			cout<<"Enter grade: ";
			cin>>grade[row][col];
			}
	}
	
for (row=0; row<5; row++)
	{
	sum=0;
	
	for (col=0; col<4; col++)
		{	 
			sum+=grade[row][col];
			
		}
			avg[row]=sum/4;
	}
		cout<<"\n\nSt_id  Avg"<<endl;
	for (row=0; row<5; row++)
		
			cout<<st_id[row]<<" "<<avg[row]<<'\n';
	
return 0;
}

