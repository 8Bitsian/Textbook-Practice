/* 
  Imani Hollie 02/16/2026
  Programming Exercise: Rectangle Area - Complete the Program
  Download the partially written program named AreaRectangle.cpp from 📘 companion website.
  Complete the program. When it's complete, the program will ask the user to enter the width and length of a rectangle,
  then display the rectangle's area. The program calls the following functions, which have not been written:
  - getLength: The function should ask the user to enter the rectangle's length then return that value as a double
  - getWidth: The function should ask the user to enter the rectangle's width then return that value as a double
  - getArea: The function should accept the rectangle's length and width as arguments and return's the rectangle's area.
             The area is calculated by multiplying the length by the width
  - displayData: This function should accept the rectangle's length, width, and area as arguments and display them in
                 appropraite message on the screen
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function Prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

// main()
int main() {
  double rectangleLength, rectangleWidth, rectangleArea;
  
  rectangleLength = getLength();
  rectangleWidth = getWidth();
  rectangleArea = getArea();
  
  displayData(rectangleLength, rectangleWidth, rectangleArea);

  return 0;
}

// getLength() - Get user input and validate for rectangle length
double getLength() {
  double length;
  
  do {
    cout << "Enter the rectangle's length: ";
    cin >> length;
    if (length < 0)
      cout << "ERROR: Invalid Input.\n";
  } while (length < 0);

  return length;
}

// getWidth() - Get user input and validate for rectangle width
double getWidth() {
  double width;
  
  do {
    cout << "Enter the rectangle's width: ";
    cin >> width;
    if (width < 0)
      cout << "ERROR: Invalid Input.\n";
  } while (width < 0);

  return width;
}

// getLength()
double getArea(double length, double width) {
  return length * width;
}

// displayData() - Display the length, width, and area of a rectangle
void displayData(double length, double width, double area) {
  cout << fixed << setprecision(2);
  cout << "\nRectangle Data\n";
  cout << "Length: " << length << endl;
  cout << "Width: " << width << endl;
  cout << "Area: " << area << endl;
}
