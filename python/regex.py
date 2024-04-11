# regex.py
# This program shows how to use regular expressions in Python.
# Github: https://www.github.com/0x4248/examples
# Licence: GNU General Public License v3.0
# By: 0x4248

import re  # Import the regular expressions module

# Define a string
text = "The quick brown fox jumps over the lazy dog 12345 !@#$"

# Extract the first word
first_word = re.search(r"\b\w+\b", text).group()
print("First word:", first_word)

# Extract the last word
last_word = re.search(r"\b\w+\b$", text).group()
print("Last word:", last_word)

# Extract the numbers
numbers = re.findall(r"\d+", text)
print("Numbers:", numbers)

# Extract the letters
letters = re.findall(r"[a-zA-Z]+", text)
print("Letters:", letters)

# Extract the symbols
symbols = re.findall(r"[^\w\s]+", text)
print("Symbols:", symbols)
