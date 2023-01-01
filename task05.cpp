#include <iostream>
using namespace std;

void greaterNumber(int numb1, int numb2);

main ()
{
	system("cls");
	int numb1, numb2;
	while(true)
	{
		cout<<"Enter First Integer: ";
		cin>>numb1;
		cout<<endl;

		cout<<"Enter Second Integer: ";
		cin>>numb2;
		cout<<endl;

		greaterNumber(numb1, numb2);

	}		
}
 
void greaterNumber(int numb1, int numb2)
{
	if ( numb1 > numb2 )
	{
			cout<<"The Greater Integer is: "<<numb1;
			cout<<endl;

	}
	if ( numb2 > numb1 )
	{
			cout<<"The Greater Integer is: "<<numb2;
			cout<<endl;

	}
	cout<<endl;
}
