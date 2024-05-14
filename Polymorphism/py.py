class Person:
    def __init__(self):
        self.name = ""
        self.age = 0

    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")

class Employee(Person):
    def __init__(self):
        super().__init__()
        self.position = ""

    # Override the display method to include position
    def display(self):
        super().display()  # Call the base class display method
        print(f"Position: {self.position}")

def main():
    # Correctly instantiate the Employee object
    employee1 = Employee()

    # Set the member variables for Employee
    employee1.name = "John Doe"
    employee1.age = 30
    employee1.position = "Software Engineer"

    # Call the display method to print the details using polymorphism
    employee1.display()

if __name__ == "__main__":
    main()
