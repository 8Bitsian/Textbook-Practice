/* 
  Imani Hollie 02/23/2026
  Programming Exercise: Safest Driving Area
  Write a program that determines which of five geographic regions within a major city
  (north, south, east, west, and central) had the fewest reported autombile accidents last year.
  It should have the following two functions, which are called by main():
  - int getNumAccidents() is passed the name of a region. It asks the user for the number of automobile
    accidents reported in that region during the last year, validates the input, then returns it.
    It should be called once for each city region
  - void findLowest() is passed the five totals. It determines which is the smallest and prints the
    name of the region, along with its accident figure.
  Input validation: Do not accept an accident number that is les than 0.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
int getNumAccidents(string regionName);
void findLowest(int n, int s, int e, int w, int c);

// main()
int main() {
  // Declare variables
  int north, south, east, west, central;

  cout << "Enter the total reported automobile accidents for each region (-1 to Exit).\n" << endl;

  while (true) {
    // Call getNumAccidents() function for each division
    north = getNumAccidents("North");
    south = getNumAccidents("South");
    east = getNumAccidents("East");
    west = getNumAccidents("West");
    central = getNumAccidents("Central");
    
    // Call findLowest() function to calculate and output the lowest accident-prone region
    findLowest(north, south, east, west, central);

    cout << "\n\n=== REPORT COMPLETE. STARTING NEW REPORT ===\n\n";
  }

  return 0;
}

// getSales() should be called for every division once
int getNumAccidents(string regionName) {
  // Define variable
  int accidents;

  // Get user input for accident count figure and validate
  while (true) {
    cout << "Enter Accidents for " << regionName << ": ";
    cin >> accidents;
    
    // Validates user input (-1 Exits program)
    if (accidents == -1) {
      cout << "Exiting program...\n";
      exit(0); // Immediately terminate the program
    }
    
    // Validates user input (Don't accept dollar amaount less than 0)
    if (accidents < 0) {
      cout << "ERROR: Invalid Input - Accidents cannot be negative.\n";
    } else {
      // Return accident figure
      return accidents;
    }
  }
}

// findLowest() should be called once
void findLowest(int n, int s, int e, int w, int c) {
  // Define variables
  int lowest = n;
  string region = "North";
  
  // Calculate which division is the largest
  if (s < lowest) { lowest = s; region = "South"; }
  if (e < lowest) { lowest = e; region = "East"; }
  if (w < lowest) { lowest = w; region = "West"; }
  if (c < lowest) { lowest = c; region = "Central"; }
  
  // Print name of the high-grossing division, along with its accident figure
  cout << fixed << setprecision(2);
  cout << "\n=== AUTOMOBILE ACCIDENT REPORT ===\n";
  cout << "Lowest Automobile Accidents: " << region << endl;
  cout << "Total Accidents: " << lowest;
}
