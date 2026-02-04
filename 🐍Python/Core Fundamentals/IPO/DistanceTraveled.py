# Imani Hollie 02/02/2026
# Programming Exercise: Distance Traveled
# Assuming there is no accidents or delays, the distance a car travels can be
# calculated via Distance = Speed * Time. A car is traveling at a constant 60 mph.
# Design a program that displays the following:
  # - The distance the car will travel in 5 hours, 8 hours, and 12 hours

# Declare constants
CAR_MPH = 60

# Calculate the distances traveled at varient times
d1 = 60 * 5
d2 = 60 * 8
d3 = 60 * 12

# Display distance the car will travel in 5, 8, and 12 hours
#\n for newline and f-string for mph
print(f"\nAt {CAR_MPH} mph, the car will travel:")
#f-string formatting includes commas and 2 decimal points
print(f"In 5 hours:  {d1:,.2f} miles")
print(f"In 8 hours:  {d2:,.2f} miles")
print(f"In 12 hours: {d3:,.2f} miles")
