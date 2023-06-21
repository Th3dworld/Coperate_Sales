#include<iostream>
#include<iomanip>
#include "DivSales.h"
using namespace std;

/*
* This program shows the DivSales class in action
* 
* Matanda Hillary Phiri
*/

int main()
{
	//Declare Variables
	const int compdivs = 6;
	DivSales companyOne[compdivs];
	double quart1, quart2, quart3, quart4;

	//format output
	cout << showpoint << setprecision(2) << fixed;

	//Display instructions to user
	cout << "DIVISION" << endl;
	cout << "==========" << endl;
	cout << "Welcome to DIVISION to get started press Enter.";
	cin.get();
	cout << "\n\n";

	//get user input
	for(int i = 0; i < compdivs; i++)
	{
		//Take sales for each quarter
		cout << "Please input the sales for Division " << (i+1) << endl;
		//Quarter 1
		cout<< "quarter 1"  << ":$";
		cin >> quart1;
		cout << "\n";
		//input validation
		while(quart1 < 0)
		{
			//Display Error message if input invalid
			cout << "!ERROR! Quarterly sales cannot be less than $0.\n";
			cout << "Please input correct value:$";
			cin >> quart1;
			cout << "\n";
		}
		//Quarter 2
		cout << "quarter 2" << ":$";
		cin >> quart2;
		cout << "\n";
		//input validation
		while (quart2 < 0)
		{
			//Display Error message if input invalid
			cout << "!ERROR! Quarterly sales cannot be less than $0.\n";
			cout << "Please input correct value:$";
			cin >> quart1;
			cout << "\n";

		}
		//Quarter 3
		cout << "quarter 3" << ":$";
		cin >> quart3;
		cout << "\n";
		//input validation
		while (quart3 < 0)
		{
			//Display Error message if input invalid
			cout << "!ERROR! Quarterly sales cannot be less than $0.\n";
			cout << "Please input correct value:$";
			cin >> quart1;
			cout << "\n";

		}
		//Quarter 4
		cout << "quarter 4" << ":$";
		cin >> quart4;
		cout << "\n";
		//input validation
		while (quart4 < 0)
		{
			//Display Error message if input invalid
			cout << "!ERROR! Quarterly sales cannot be less than $0.\n";
			cout << "Please input correct value:$";
			cin >> quart1;
			cout << "\n";

		}
		//store data
		companyOne[i].take_quart_sales(quart1, quart2, quart3, quart4);
		
	}

	//Display Data in table
	cout << "============================================================================\n";
	cout << setw(20) << left << "Division" << setw(15) << left << "quarter 1" << setw(15) << left << "quarter 2" << setw(15) << left << "quarter 3" << setw(15) << left << "quarter 4" << endl;
	cout << "============================================================================\n";
	//Show contents for each division and quarter
	for (int i = 0; i < compdivs; i++)
	{
			cout << setw(20) << left << i << "$" << setw(14) << left << companyOne[i].get_quartFunds(0) << "$" << setw(14) << left << companyOne[i].get_quartFunds(1) << "$" << setw(14) << left << companyOne[i].get_quartFunds(2) << "$" << setw(14) << left << companyOne[i].get_quartFunds(3) << endl;
	}
	cout << "============================================================================\n";
	cout << setw(65) << left << "TOTAL" << "$" << companyOne[0].get_Total() << endl;
	cout << "============================================================================\n";
	cout << "\n\n\nThank you for using DIVISION\n\n\n";


	return 0;
}