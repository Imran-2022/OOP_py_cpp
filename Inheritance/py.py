class Person:
    def __init__(self, name="", age=0):
        self.name = name
        self.age = age

    def set_details(self, new_name, new_age):
        self.name = new_name
        self.age = new_age

    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")

class Employee(Person):
    def __init__(self, name="", age=0, position=""):
        super().__init__(name, age)
        self.position = position

    def set_employee_details(self, new_name, new_age, new_position):
        self.set_details(new_name, new_age)
        self.position = new_position

    def display_employee(self):
        self.display()
        print(f"Position: {self.position}")

def main():
    # Correctly instantiate the Employee object
    employee1 = Employee()

    # Use the set_employee_details method to set the member variables
    employee1.set_employee_details("John Doe", 30, "Software Engineer")

    # Call the display_employee method to print the details
    employee1.display_employee()

    # Changing details using the set_employee_details method
    employee1.set_employee_details("Jane Smith", 25, "Data Scientist")
    employee1.display_employee()

if __name__ == "__main__":
    main()
