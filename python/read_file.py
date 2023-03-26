# read_file.py
# This program reads the contents of a file named "input.txt" and prints them to the console.
# github: https://www.github.com/awesomelewis2007/examples

with open("input.txt", "r") as file:
    contents = file.read()
    print(contents)
