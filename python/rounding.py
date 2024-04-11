# rounding.py
# This program rounds numbers the user enters.
# Github: https://www.github.com/0x4248/examples
# Licence: GNU General Public License v3.0
# By: 0x4248

# This program rounds numbers the user enters.
while True:
    # Ask the user to enter a number
    number = input("Enter a number: ")
    # Convert the number to a float
    number = float(number)
    # Get the number of decimal places
    decimal_places = len(str(number).split(".")[1])
    # Round the number to the number of decimal places
    for i in range(decimal_places):
        # Print the rounded number
        print("Round to", i, "decimal places:", round(number, i))
