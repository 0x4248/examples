# read_file.py
# This program reads the contents of a file named "input.txt" and prints them to the console.
# Github: https://www.github.com/lewisevans2007/examples
# Licence: GNU General Public License v3.0
# By: Lewis Evans

# Open the file "input.txt" in read mode and store the contents in a variable called contents
with open("input.txt", "r") as file:
    # Read the contents of the file
    contents = file.read()
    # Print the contents of the file
    print(contents)
