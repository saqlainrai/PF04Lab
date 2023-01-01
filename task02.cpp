#include <iostream>
using namespace std;

void add(int number1, int number2);
void product(int number1, int number2);
void subtract(int number1, int number2);
void division(int number1, int number2);

main ()
{
	int number1, number2;
	char operation;
	while (true)
	{
		cout<<"Enter first Number: ";
		cin>>number1;
		cout<<endl;

		cout<<"Enter Second Number: ";
		cin>>number2;
		cout<<endl;

		cout<<"Enter operation(+,-,*,/): ";
		cin>>operation;
		cout<<endl;

		if (operation=='+')
		{
			add (number1, number2);
		}
		if (operation=='-')
		{
			subtract(number1, number2);
		}
		if (operation=='*')
		{
			product(number1, number2);
		}
		if (operation=='/') 
		{
			division(number1, number2);
		}
	}		
}
void add(int number1, int number2){

	int sum;

	sum=number1+number2;

	cout<<"Sum is: "<<sum<<endl;
}
void product(int number1, int number2)
{
	int product;

	product=number1*number2;

	cout<<"Product is: "<<product<<endl;
}
void subtract(int number1, int number2)
{
	int subtract;

	subtract=number1-number2;

	cout<<"Answer is: "<<subtract<<endl;
}
void division(int number1, int number2)
{
	int division;

	division=number1/number2;

	cout<<"Answer is: "<<division<<endl;
}