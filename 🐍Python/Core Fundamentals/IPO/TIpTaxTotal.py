# Imani Hollie 02/02/2026
# Programming Exercise: Tip, Tax, and Total
# Design a program that calcualtes the total amount of a meal purchased at a restaurant.
# The program ask the user to enter the charge for food, and then calculate the amount of
# a 15% tip and 7% sales tax. Display each of these amounts and the total

# Declare constants
TIP = 0.15
SALES_TAX = 0.07

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
totalTip = subtotal * TIP
salesTax = subtotal * SALES_TAX
total = subtotal + salesTax + totalTip

# Display subtotal, salesTax, and total
#\n for newline and f-string formatting includes commas and 2 decimal points
print(f"\nSubtotal:  ${subtotal:,.2f}")
print(f"Tip:       ${totalTip:,.2f}")
print(f"Sales Tax: ${salesTax:,.2f}")
print(f"Total:     ${total:,.2f}")
