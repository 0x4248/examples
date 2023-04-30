# rounding.py
# This program rounds numbers the user enters.
# github: https://www.github.com/awesomelewis2007/examples

while True:
    number = input("Enter a number: ")
    number = float(number)
    decimal_places = len(str(number).split(".")[1])
    for i in range(decimal_places):
        print("Round to", i, "decimal places:", round(number, i))
