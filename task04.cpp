#include <iostream>
using namespace std;

void ifEven(int output);

main ()
{
	system("cls");
	int number;
	int output;
	while(true)
	{
		cout<<"Enter the number: ";
		cin>>number;
		cout<<endl;
		output=number%2;
		ifEven(output);		
	}		
}

void ifEven(int output)
{
	if (output==0)
		{
			cout<<"Number is Even"<<endl;
		}
	if (output!=0)
		{
			cout<<"Number is Odd"<<endl;
		}
	cout<<endl;
}