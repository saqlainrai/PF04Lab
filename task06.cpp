#include <iostream>
using namespace std;

main(){

	system("cls");
	
	string day;
	float amount;
	float dis, discount, remamount;

	while (true)
	{

	cout<<endl;
	cout<<"Enter the Day: ";
	cin>>day;
	cout<<endl;

	cout<<"Enter the amount of Bill purchased: ";
   	cin>>amount;
    	cout<<endl;

    	if (day=="sunday")
	{
        dis = 10/100.0;
        discount = dis*amount;
        remamount = amount-discount;
        cout<<"Your Bill is: "<<remamount;
    	}

    	if (day != "sunday")
	{
   		cout<<"Your Bill is: "<<amount;
   	}
	cout<<endl;
	}

}