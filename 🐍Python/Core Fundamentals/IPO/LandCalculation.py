# Imani Hollie 02/02/2026
# Programming Exercise: Land Calculation
# One acre of land is equal to 43,560 sq ft.
# Design a program that asks the user to enter the total sq ft in a tract of land
# then calculate and display the number of acres in the tract
# HINT: Divide the amount entered by 43,560 to get the number of acres

# Declare constants
ACRE = 43560

# Get user input
totalSqFt = float(input("What is the total square feet in the tract? "))

# Calculate number of acres (totalAcres = totalSqFt / 43560)
totalAcres = totalSqFt / ACRE

# Display number of acres
#\n for newline and f-string formatting includes commas and 2 decimal points
print(f"\nFor {totalSqFt:,.2f} sq ft, there are {totalAcres:.2f} ac.")
