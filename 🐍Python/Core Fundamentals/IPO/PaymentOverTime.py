# Imani Hollie 02/02/2026
# Programming Exercise: Amount Paid Over Time
# A person pays a fixed amount each month as a car payment.
# Design a program that asks the user to enter the amount they pay each month, and the
# number of months they have been making payments. Then display the total amount the
# user has paid.

# Get user input for total months paid
totalMonths = int(input("What is the total number of months you have paid? "))
amountPaid = float(input("How much have you paid monthly? $"))

# Initialize subtotal prior to for loop
total = 0
# Get user input w/for loop and calcualte subtotal
for i in range (1, totalMonths + 1):
  # f-string formatting includes i for item number
  total += amountPaid # Add the monthly payments to the running subtotal

# Display total amount paid
#\n for newline and f-string formatting includes commas and 2 decimal points
print(f"\nTotal: ${total:,.2f}")
