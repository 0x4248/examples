# write_file.py
# This program writes some text to a file named "output.txt".
# Github: https://www.github.com/lewisevans2007/examples
# Licence: GNU General Public License v3.0
# By: Lewis Evans

# Open the file "output.txt" in write mode and store it in a variable called file
with open("output.txt", "w") as file:
    # Write some text to the file
    file.write("This is some sample text that will be written to the file.")
