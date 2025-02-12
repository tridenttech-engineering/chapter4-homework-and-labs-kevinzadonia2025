//Lab4-2.cpp - displays a salesperson's commission
//Philip Regalbuto
#include <iostream>
using namespace std;
int main()
{

//declare named contant and variables
double salesAmount = 0.0;
double commission = 0.0;
const double commissionRate = 0.10;


//Enter the input
cout << "Sales amount: ";
cin >> salesAmount;

//calculate the commission
commission = salesAmount * commissionRate;
  
//display the commission
cout << "Commission: $" << commission << "\n"
  << "Press any key to continue..." << endl;

  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/