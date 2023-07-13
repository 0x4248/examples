# date_time.py
# This program gets the current date and time and prints them to the console.
# Github: https://www.github.com/lewisevans2007/examples
# Licence: GNU General Public License v3.0
# By: Lewis Evans

import datetime

now = datetime.datetime.now()  # Get the current date and time

print("Date:", now.strftime("%d-%m-%Y"))  # Print the date in the format DD-MM-YYYY
print("Time:", now.strftime("%H:%M:%S"))  # Print the time in the format HH:MM:SS
