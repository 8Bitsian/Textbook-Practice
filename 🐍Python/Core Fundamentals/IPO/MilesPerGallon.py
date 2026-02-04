# Imani Hollie 02/02/2026
# Programming Exercise: Miles-Per-Gallon
# A car's MPG can be calculated via MPG = Miles Driven / Gallons Used.
# Design a program that asks the user for number of miles driven and gallons of gas used.
# Then calcualte the car's MPG and display the result to the console.

# Get user input
distance = float(input("How far did you drive (in miles)? "))
gallons = float(input("How much gas did you use (in gallons)? "))

# Calculate the MPG (MPG = Miles Driven / Gallons Used)
mpg = distance / gallons

# Display distance the car's mpg
#\n for newline and f-string formatting includes commas and 2 decimal points
print(f"\nThe car drove {distance:,.2f} miles and used {gallons:,.2f} gallons.")
print(f"The car gets {mpg:,.2f} MPG.")
