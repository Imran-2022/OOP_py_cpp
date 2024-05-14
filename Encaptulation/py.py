class Person:
    def __init__(self):
        self._name = ""
        self._age = 0

    def set_details(self, new_name, new_age):
        self._name = new_name
        self._age = new_age

    def get_name(self):
        return self._name

    def get_age(self):
        return self._age

    def display(self):
        print(f"Name: {self._name}, Age: {self._age}")

class Employee(Person):
    def __init__(self):
        super().__init__()
        self._position = ""

    def set_employee_details(self, new_name, new_age, new_position):
        self.set_details(new_name, new_age)
        self._position = new_position

    def get_position(self):
        return self._position

    def display_employee(self):
        self.display()
        print(f"Position: {self._position}")

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
