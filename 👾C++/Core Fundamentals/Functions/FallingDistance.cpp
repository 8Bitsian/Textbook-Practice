/* 
  Imani Hollie 02/23/2026
  Programming Exercise: Falling Distance
  When an object is fallingdue to grvaity, the following formula can be used to determine the distance
  the object fell in a specific time period: D = (1/2 * g * t^2)
  The variables in the formula are as follows:
  - D: Distiance in meters
  - g: Earth's graviational force of 9.8
  - t: Time in seconds that the object has been falling
  Write a function named fallingDistance() that accepts an object's falling time (sec) as an argument.
  The function should return the distance (m) that the objet has fallen during that time interval.
  Write a program that demonstrates the function by calling it in a loop that passes the vlaues 1-10 as
  arguments and displays the return value.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
double fallingDistance(double sec);
double getSeconds();

// main()
int main() {

  while (true) {
    // Call getSeconds() to get user input
    double totalSeconds = getSeconds();

    // Validate user input (-1 Exits program)
    if (totalSeconds == -1) {
      cout << "Exiting program...\n";
      return 0;
    }
    if (totalSeconds == 0) {
      cout << "Object did not fall. Distance = 0 meters\n\n";
      continue;
    }

    // Print distance fallen
    // Header
    cout << fixed << setprecision(2);
    cout << "\n== FALLING DISTANCE TABLE ==\n";
    cout << left << setw(12) << "Time (sec)"
         << right << setw(15) << "Distance (m)\n";
    cout << string(28, '-') << "\n";
    // Rows
    // Loop from 1 to 10 seconds or until reaching user time
    // Call fallingDistance() to caculate and display time and distance
    for (int t = 1; t <=10 && t <= totalSeconds; t++) {
      cout << left << setw(12) << (to_string(t) + " sec")
           << right << setw(15) << fallingDistance(t) << "\n";
    }
    
    cout << "\n  === TABLE COMPLETE ===\n=== STARTING NEW TABLE ===\n\n";
  }
}

double getSeconds() {
  // Define variables
  double seconds;
  
  // Prompt for user input
  cout << "Enter the total seconds it took an object to fall (-1 to Exit).\n";

  // Iterate WHILE user input is TRUE
  while (true) {
    // Get user input for seconds
    cout << "Enter Seconds Interval: ";
    cin >> seconds;

    // Validate user input (-1 Exits program)
    if (seconds == -1) { return -1; }
    
    if (seconds < 0) { // ERROR Message
      cout << "ERROR: Invalid Input - Intervals cannot be negative.\n";
    } else { // Valid input
      return seconds;
    }
  }
}

double fallingDistance(double sec) {
  // Define variables
  const double GRAVITY = 9.8;
  // Calculate the distance (m) an object fell within a time interval (sec)
  // D = (1/2 * g * t^2)
  return 0.5 * GRAVITY * (sec * sec);
}
