//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
	{
	const double DISCOUNT_RATE = 0.1; // 10% discount for Priemer Club 
	const double sale_sale = .05; // 5% discount for all customers 
	const double SHIP_CHG1 = 0.99; 
	const double SHIP_CHG2 = 4.99; 
	double amtOwed = 125.99; 
	char member = ' '; 

		// enter imput items
		cout<<"Amount owed before any discount and shipping"; 
		cin>> amtOwed; 
		cout<< " Priemier Club member (Y/N)?";
		cin>>member; 

		//subtract discount, if appropriate 
		if (toupper(member) == 'Y')
			amtOwed -= amtOwed * DISCOUNT_RATE ; 
		
		if(toupper(member) == 'N')
			amtOwed -= amtOwed * sale_sale ; 

		//end if

		//add shipping 
		if(amtOwed>=100.0)
			amtOwed+= SHIP_CHG1; 
		else

			amtOwed += SHIP_CHG2; 
		//end if 

		//display final amount owed 
		cout<<fixed<<setprecision(2); 
		cout<< "Amount owed after any discount and shipping:" << amtOwed <<endl;  


		
	return 0;
}	//end of main function
