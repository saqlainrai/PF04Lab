#include <iostream>
using namespace std;

void showresult(int marks);

main()
{

	int marks;
	while (true) 
	{
	cout<<"Enter your Marks: ";
	cin >> marks;
	cout<<endl;
	showresult(marks); 
	}
}

void showresult(int marks)
{
	if( marks > 50 )
	{
		cout<<"Congratulation, Passed."<<endl;
	}

	if( marks < 50 )
	{
		cout<<"Failed, Better luck next time"<<endl;
	}

	if( marks == 50 )
	{
		cout<<"Work Hard!!!"<<endl;
	}
	cout<<endl;
}