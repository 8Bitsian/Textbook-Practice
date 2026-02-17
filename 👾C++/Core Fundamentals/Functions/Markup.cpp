/* 
  Imani Hollie 02/16/2026
  Programming Exercise: Markup
  Design a program that asks the user to enter an item's wholesale cost and its markup percentage.
  It should then display the item's retail price.
  Example:
  - If an item's wholesale cost is 5.00 and its markup percentage is 100%, then the item's retail price is 10.00
  - If an item's wholesale cost is 5.00 and its markup percentage is 50%, then the item's retail price is 7.50
  
  The program should have a function named calculateRetail that recieves the wholesale cost and the
  markup percentage as arguments and returns the retail price of the item.
  Input validation: Do not accept negative values for either the wholesale cost nor the markup percentage.
*/

# Get user input
print("What is your name?")
firstName = input('First Name? ')
lastName = input('Last Name? ')

print("What is your address?")
street = input('Street? ')
city = input('City? ')
state = input('State? ')
ZIP = int(input('ZIP? '))

print("What is your phone number?")
number = int(input('Phone? '))

print("What is your college major?")
major = input('Major? ')

# Output personal information
print("My name is", firstName, lastName)
print("I live at", street, city, state, ZIP)
print("My number is", number)
print("My major is", major)
