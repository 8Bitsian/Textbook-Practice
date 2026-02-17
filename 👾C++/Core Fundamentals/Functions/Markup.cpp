/* 
  Imani Hollie 02/16/2026
  Programming Exercise: Markup
  Design a program that asks the user to enter an item's wholesale cost and its markup percentage.
  It should then display the item's retail price.
  Examples:
  - If an item's wholesale cost is 5.00 and its markup percentage is 100%, then the item's retail price is 10.00
  - If an item's wholesale cost is 5.00 and its markup percentage is 50%, then the item's retail price is 7.50
  The program should have a function named calculateRetail that recieves the wholesale cost and the
  markup percentage as arguments and returns the retail price of the item.
  Input validation: Do not accept negative values for either the wholesale cost nor the markup percentage.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function Prototypes
double calculateRetail(double price, double markup);

// main()
int main() {
  // Declare variables
  double wholesaleCost, markupPercentage, retailPrice;

  // Get user input and validate for wholesale cost
  do {
    cout << "Enter the item's wholesale cost: $";
    cin >> wholesaleCost;
    if (wholesaleCost < 0)
      cout << "ERROR: Invalid Input.\n";
  } while (wholesaleCost < 0);
  
  // Get user input and validate for markup percentage
  do {
    cout << "Enter the item's markup percentage: ";
    cin >> markupPercentage;
    if (markupPercentage < 0)
      cout << "ERROR: Invalid Input.\n";
  } while (markupPercentage < 0);

  // Call functions
  retailPrice = calculateRetail(wholesaleCost, markupPercentage);

  // Output
  cout << fixed << setprecision(2);
  cout << "\nPrice Adjustment\n";
  cout << "Wholesale Cost: $" << wholesaleCost << endl;
  cout << "Markup Percentage: " << markupPercentage << "%" << endl;
  cout << "Retail Price: $" << retailPrice;

  return 0;
}

// calculateRetail()
double calculateRetail(double wholesale, double markup) {
  return wholesale * (1 + markup / 100);
}
