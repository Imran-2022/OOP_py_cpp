from abc import ABC, abstractmethod

# Abstract base class
class Person(ABC):
    def __init__(self):
        self.name = ""
        self.age = 0

    # Abstract method for abstraction
    @abstractmethod
    def display(self):
        pass

    # Non-abstract method
    def set_details(self, new_name, new_age):
        self.name = new_name
        self.age = new_age

# Concrete derived class
class Employee(Person):
    def __init__(self):
        super().__init__()
        self.position = ""

    # Implementation of the abstract method
    def display(self):
        print(f"Name: {self.name}, Age: {self.age}, Position: {self.position}")

def main():
    # Correctly instantiate the Employee object
    employee1 = Employee()

    # Set the member variables for Employee
    employee1.name = "John Doe"
    employee1.age = 30
    employee1.position = "Software Engineer"

    # Call the display method to print the details using abstraction
    employee1.display()

if __name__ == "__main__":
    main()
