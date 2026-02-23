/* 
  Imani Hollie 02/23/2026
  Programming Exercise: Winning Division
  Write a program that determines which of a company's four divisions (Northeast, Sourtheast, Northwest, Southwest)
  had the greatest sales for a quarter. It should include the following two functions, which are called by main():
  - double getSales() is passed the name of a division. It asks the user for a division's quarterly sales figure,
    validates the input, then returns it. It should be called once for each division
  - void findHighest() is passed the four sales totals. It determines which is the largest and prints the name
    of the high-grossing division, along with its sales figure
  Input validation: Do not accept dollar amounts less than $0.00.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
double getSales(string divisionName);
void findHighest(double ne, double se, double nw, double sw);

// main()
int main() {
  // Declare variables
  double northeast, southeast, northwest, southwest;

  cout << "Enter the quartely sales for each division (-1 to Exit).\n" << endl;

  while (true) {
    // Call getSales() function for each division
    northeast = getSales("Northeast");
    southeast = getSales("Southeast");
    northwest = getSales("Northwest");
    southwest = getSales("Southwest");
    
    // Call findHighest() function to calculate and output the highest-grossing division
    findHighest(northeast, southeast, northwest, southwest);

    cout << "\n\n=== REPORT COMPLETE. STARTING NEW REPORT ===\n\n";
  }

  return 0;
}

// getSales() should be called for every division once
double getSales(string divisionName) {
  // Define variable
  double sales;

  // Get user input for quartely sales figure and validate
  while (true) {
    cout << "Enter Sales for " << divisionName << " Division: $";
    cin >> sales;
    
    // Validates user input (-1 Exits program)
    if (sales == -1) {
      cout << "Exiting program...\n";
      exit(0); // Immediately terminate the program
    }
    
    // Validates user input (Don't accept dollar amaount less than $0)
    if (sales < 0) {
      cout << "ERROR: Invalid Input - Sales cannot be negative.\n";
    } else {
      // Return sales figure
      return sales;
    }
  }
}

// findHighest() should be called once
void findHighest(double ne, double se, double nw, double sw) {
  // Define variables
  double highest = ne;
  string division = "Northeast";
  
  // Calculate which division is the largest
  if (se > highest) {
    highest = se;
    division = "Southeast";
  }
  if (nw > highest) {
    highest = nw;
    division = "Northwest";
  }
  if (sw > highest) {
    highest = sw;
    division = "Southwest";
  }

  // Print name of the high-grossing division, along with its sales figure
  cout << fixed << setprecision(2);
  cout << "\n=== QUARTELY SALES REPORT ===\n";
  cout << "Highest Grossing Division: " << division << endl;
  cout << "Total Sales: $" << highest;
}
