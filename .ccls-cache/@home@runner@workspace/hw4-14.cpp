// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by Kevin Zadonia on 2/11/25

#include <iostream>
using namespace std;

int main() 
{
  //declare variables
  double smallPizzas = 0.0;
  double mediumPizzas = 0.0;
  double largePizzas = 0.0;
  double familyPizzas = 0.0;
  double totalPizzas = 0.0;
  double smallPizzaPercent = 0.0;
  double mediumPizzaPercent = 0.0;
  double largePizzaPercent = 0.0;
  double familyPizzaPercent = 0.0;

  //Enter input items
  cout << "Small pizza sold: ";
  cin >> smallPizzas;
  
  cout << "Medium pizza sold: ";
  cin >> mediumPizzas;
  
  cout << "Large pizza sold: ";
  cin >> largePizzas;
  
  cout << "Family pizza sold: ";
  cin >> familyPizzas;

  //Calculate the total pizza sold
  totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;
  
  //Calculate the percentages
  smallPizzaPercent = (smallPizzas / totalPizzas) * 100;
  mediumPizzaPercent = (mediumPizzas / totalPizzas) * 100;
  largePizzaPercent = (largePizzas / totalPizzas) * 100;
  familyPizzaPercent = (familyPizzas / totalPizzas) * 100;
  
  //Display the percentages
  cout << "Total pizzas sold: " << totalPizzas << endl;
  cout << "Small pizzas percentage: " << smallPizzaPercent << "%" << endl;
  cout << "Medium pizzas percentage: " << mediumPizzaPercent << "%" << endl;
  cout << "Large pizzas percentage: " << largePizzaPercent << "%" << endl;
  cout << "Family pizzas percentage: " << familyPizzaPercent << "%" << endl;
  
  return 0;
  

  return 0;
} // end of main function