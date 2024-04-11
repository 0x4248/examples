# write_file.py
# This program writes some text to a file named "output.txt".
# Github: https://www.github.com/0x4248/examples
# Licence: GNU General Public License v3.0
# By: 0x4248

# Open the file "output.txt" in write mode and store it in a variable called file
with open("output.txt", "w") as file:
    # Write some text to the file called "output.txt"
    file.write("This is some sample text that will be written to the file.")
    # Close the file
    file.close()
