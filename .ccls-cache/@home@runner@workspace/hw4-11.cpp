// Introductory11.cpp - displays ending balance
// Created/revised by Kevin Zadonia on 2/11/25

#include <iostream>
using namespace std;

int main() {
  //declare variables
  
  double beginningSavingsBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithDrawals = 0.0;
  double endingSavingsBalance = 0.0;


  //enter input items
  cout << "Beginning balance: ";
  cin >> beginningSavingsBalance;
  cout << "Total deposits: ";
  cin >> totalDeposits;
  cout << "Total withdrawals: ";
  cin >> totalWithDrawals;

  //calculate and display the ending balance
  endingSavingsBalance = beginningSavingsBalance + totalDeposits - totalWithDrawals;
  cout << "Ending balance: $" << endingSavingsBalance << endl;
  
  
  

  

  return 0;
} // end of main function