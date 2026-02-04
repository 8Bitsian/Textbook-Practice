# Imani Hollie 02/02/2026
# Programming Exercise: Total Purchase
# A customer in a store is purchasing five items.
# Design a program that asks the user for the price of each item,
# then displat the subtotal of the sale, the sales tax, and the total.
# Assume the sales tax is 6%.

# Declare constants
SALES_TAX = 0.06

# Initialize subtotal prior to for loop
subtotal = 0
# Get user input w/for loop and calcualte subtotal
for i in range (1, 6):
  # f-string formatting includes i for item number
  price = float(input(f"What is the price of Item {i}? "))
  subtotal += price # Adde the price to the running subtotal

# Calculate the sales tax and the total
salesTax = subtotal * SALES_TAX
total = subtotal + salesTax

# Display subtotal, salesTax, and total
#\n for newline and f-string formatting includes commas and 2 decimal points
print(f"\nSubtotal: ${subtotal:,.2f}")
print(f"Sales Tax: ${salesTax:,.2f}")
print(f"Total: ${total:,.2f}")
