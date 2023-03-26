# date_time.py
# This program gets the current date and time and prints them to the console.
# github: https://www.github.com/awesomelewis2007/examples

import datetime

now = datetime.datetime.now()

print("Date:", now.strftime("%d-%m-%Y"))
print("Time:", now.strftime("%H:%M:%S"))