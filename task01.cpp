#include <iostream>
using namespace std;

main ()
{
	system("cls");
	int age;
	while(true)
	{
		cout<<"Enter your age: ";
		cin>>age;
		cout<<endl;

		if (age==18)
		{
			cout<<"Eligible"<<endl;
		}
		if (age>18)
		{
			cout<<"Eligible"<<endl;
		}
		if (age<18)
		{
			cout<<"Not Eligible"<<endl;
		}
		cout<<endl;
	}		
}