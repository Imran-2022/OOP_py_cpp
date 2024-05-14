class Person:
    def __init__(self, name="", age=0):
        self.name = name
        self.age = age

    def set_details(self, new_name, new_age):
        self.name = new_name
        self.age = new_age

    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")

def main():
    # Correctly instantiate the Person object
    person1 = Person()

    # Use the set_details method to set the member variables
    person1.set_details("John Doe", 30)

    # Call the display method to print the details
    person1.display()

    # Changing details using the set_details method
    person1.set_details("Jane Smith", 25)
    person1.display()

if __name__ == "__main__":
    main()
