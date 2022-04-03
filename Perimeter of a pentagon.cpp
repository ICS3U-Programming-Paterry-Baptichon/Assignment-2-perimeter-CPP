
// Created by: Paterry Baptichon Junior
// Created on: 2022-04-01
// This program calculates the area of a pentagon

#include<iostream>
#include<cmath>

int main()
{
    // ask user for the input of the lenght of the sides
    std::string userAnswer;
    std::cout << "Enter the length of the side:";
    int a;
    std::cin >> a;
    // show the calculation/formula of the perimeter
    int perimeter=(5*a);
   // display the user the perimeter of the pentagon in cm.
    std::cout << "" << std::endl;
    std::cout << "Perimeter of the Pentagon = "<<perimeter << "cm";
     // Ask if user would like to calculate again
 std::cout << "" << std::endl;
  std::cout << "Would you like to calculate again? Y or N\n";
  std::cin >> userAnswer;
    if (userAnswer == "N" || "n") {
      return 0;
    }
  if (userAnswer == "Y" || "y") {
      main();
      
  }
}
