# Imani Hollie 02/02/2026
# Programming Exercise: Sales Prediction
# A company has determined that its annual profit is 23% of total sales.
# Design a program that asks the user to enter projected amount of total sales,
# then display the profit that will be made from that amount.
# HINT: Use the value 0.23 to represent 23 percent

# Get user input
# Get profit margin
marginPercent = float(input("What is the annual profit margin (as percentage, e.g., 23)? "))
# Get projected total sales
totalSales = float(input("What is the projected amount of total sales? "))

# Calculate percentage and profit (profit = sales * 0.23)
profitMargin = marginPercent / 100
profit = totalSales * profitMargin

# Display profit
#\n for newline and f-string formatting includes percentage
print(f"\nAt a {marginPercent}% profit margin...")
#f-string formatting includes commas for thousands and two digit decimal points
print(f"Projected profit: ${profit:,.2f}")
