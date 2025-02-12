//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by Kevin Zadonia on 2/11/25

#include <iostream>
using namespace std;

int main()
{
//declare constant and variables
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  const double PI = 3.14159;

  
//enter the input items
  cout << "Height: ";
  cin >> height;
 
  cout << "Radius: ";
  cin >> radius;

  //calculate and display the volume
  volume = PI * radius * radius * height;

  //Display the volume
  cout << "Volume: " << volume << endl;


  return 0;
} //end of main function




