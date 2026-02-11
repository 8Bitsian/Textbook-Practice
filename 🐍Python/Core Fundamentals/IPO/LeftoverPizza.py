# Imani Hollie 02/11/2026
# Programming Exercise: Leftover Pizza
# You're planning a pizza party and plab to give each guest 3 slices each.
# Design a program that displays the number of slices that will be leftover.
# The program should ask for the following input:
# - The number of pizzas, number of slices they're cut into, number of people attending
# The program should display the number of slices that will be left over.

# Get user input
totalPizzas = int(input("How many pizzas will you order? "))
pizzaSlices = int(input("How many slices will each pizza be cut into? "))
totalGuests = int(input("How many people will be attending? "))

# Calculate the total number of slices and how many will be leftover
totalSlices = totalPizzas * pizzaSlices
slicesNeeded = totalGuests * 3
leftovers = totalSlices - slicesNeeded # negative => shortage

# Display total slices leftover
#\n for newline and f-string formatting includes variables
print("\n=== Pizza Party ===")
print(f"Total Slices Available: {totalSlices}")
print(f"Slices Needed (3 per guest): {slicesNeeded}")

if leftovers >= 0:
  print(f"Total Slices Leftover: {leftovers}")
else:
  # Calculate minimum additional pizzas needed
  shortBy = slicesNeeded - totalSlices
  extraPizzas = (shortBy + (pizzaSlices - 1)) // pizzaSlices if pizzaSlices > 0 else 0
  print(f"You're short by {shortBy} slice(s)...")
  print(f"Order at least {extraPizzas} more pizza(s).")
