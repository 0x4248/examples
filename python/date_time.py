# date_time.py
# This program gets the current date and time and prints them to the console.
# Github: https://www.github.com/lewisevans2007/examples
# License: GNU General Public License v3.0
# By: Lewis Evans

import datetime

now = datetime.datetime.now()

print("Date:", now.strftime("%d-%m-%Y"))
print("Time:", now.strftime("%H:%M:%S"))
