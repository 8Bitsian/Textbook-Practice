# Imani Hollie 02/02/2026
# Programming Exercise: Sales Tax
# Design a program that asks the users to enter the amount of a purchase,
# then compute the state (4%) and county (2%) sales tax.
# The program should display the amount of the purchase, the state sales tax,
# the county sales tax, the total sales tax, and the total of the sale
# HINT: Use the value 0.02 to represent 2%, and 0.04 to represent 4%

# Declare constants
STATE_TAX = 0.04
COUNTY_TAX = 0.02

# Get user input for total items purchased
totalItems = int(input("What is the total number of items? "))

# Initialize subtotal prior to for loop
subtotal = 0
# Get user input w/for loop and calcualte subtotal
for i in range (1, totalItems + 1):
  # f-string formatting includes i for item number
  price = float(input(f"What is the price of Item {i}? "))
  subtotal += price # Adde the price to the running subtotal

# Calculate the sales tax and the total
stateTax = subtotal * STATE_TAX
countyTax = subtotal * COUNTY_TAX
totalTax = stateTax + countyTax
total = subtotal + totalTax

# Display subtotal, salesTax, and total
#\n for newline and f-string formatting includes commas and 2 decimal points
print(f"\nSubtotal: ${subtotal:,.2f}")
print(f"State Sales Tax: ${stateTax:,.2f}")
print(f"County Sales Tax: ${countyTax:,.2f}")
print(f"Total Sales Tax: ${totalTax:,.2f}")
print(f"Total: ${total:,.2f}")
