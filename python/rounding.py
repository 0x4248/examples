# rounding.py
# This program rounds numbers the user enters.
# Github: https://www.github.com/awesomelewis2007/examples
# License: GNU General Public License v3.0
# By: Lewis Evans

while True:
    number = input("Enter a number: ")
    number = float(number)
    decimal_places = len(str(number).split(".")[1])
    for i in range(decimal_places):
        print("Round to", i, "decimal places:", round(number, i))
