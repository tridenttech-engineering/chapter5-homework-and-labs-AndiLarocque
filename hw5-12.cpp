//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float item_cost1; 
	float item_cost2; 
	
	float half=0;
	float amount_owed=0;
	cout<< "Enter cost for item 1:"; 
	cin>>item_cost1;
	cout<< "Enter cost for item 2:";
	cin>>item_cost2;
if (item_cost1 > item_cost2)

{
half=item_cost2/2; 
		amount_owed=item_cost1 + half;
	}
else 
	{	
		half=item_cost1/2;
		amount_owed=item_cost2 + half; 
	}

	cout<<fixed<<setprecision(2);
	cout<< "Amount owed" << amount_owed;
