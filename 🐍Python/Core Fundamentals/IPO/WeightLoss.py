# Imani Hollie 02/02/2026
# Programming Exercise: Weight Loss
# If a person act thier calorie intake by 500 calories a day, they can typically lose ~4 lbs a month.
# Design a program that gets the user to enter their starting weight, and then displays a table
# showing what their expected weight will be at the end of each month for the next 6 months w/the diet

# Get user input
currentWeight = float(input("What is your current weight (in lbs)? "))

# Output table showing expected weight at the end of each month
print("\nMonthly Expected Weight")
print("-----------------------")
# Calculate and display weight over the next 6 months (Wn = Wstart - (4 * n)
for i in range (1, 7):
  currentWeight -= 4
  print(f"Month {i:<7}{currentWeight:.2f} lbs")
