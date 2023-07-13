# oop.py
# This program shows how to do object-oriented programming in Python.
# Github: https://www.github.com/lewisevans2007/examples
# Licence: GNU General Public License v3.0
# By: Lewis Evans

# This is a class called Person
class Person:
    # This is the constructor for the Person class
    def __init__(self, name, age):
        # Set the name and age of the person
        self.name = name
        self.age = age

    # This is a method called say_hello
    def say_hello(self):
        # Print the name and age of the person
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

# Create a new person called Alice who is 25 years old
person = Person("Alice", 25)
# Call the method say_hello on the person
person.say_hello()
