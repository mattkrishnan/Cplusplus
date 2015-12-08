#include <iostream.h>
int main()
{

	int light = 1;
	int num1, num2;
	float ans;

	char op;
	cout<<"Enter 2 numbers: ";
	cin>>num1>>num2;
	cout<<"Enter +, -, *, / or %: ";
	cin>>op;

	switch (op)
		{

		case '+':
		ans = num1 + num2;
		break;

		case '-':
		ans = num1 - num2;
		break;

		case '*':	
	ans = num1 * num2;
	break;

	case '/':
	if (num2==0)
		{
		cout<<"Divide by 0?";
		light = 0;
		}
		else
	ans = num1 / num2;
	break;

	case '%':
	if (num2==0)
		{
		cout<<"Divide by 0?";
		light = 0;
		}
	else
	ans = num1 % num2;
	break;

	default:
	cout<<"Wrong Operator";
	light = 0;
	}

if (light==1)
cout<<ans;
return 0;
}

