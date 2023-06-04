# oop.py
# This program shows how to do object-oriented programming in Python.
# Github: https://www.github.com/awesomelewis2007/examples
# By: Lewis Evans

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

person = Person("Alice", 25)
person.say_hello()