# Imani Hollie 02/02/2026
# Programming Exercise: Personal Information
# Design a program that displays the following information:
#  - Your name, address (w/city, state, and ZIP), phone number, and college major

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
