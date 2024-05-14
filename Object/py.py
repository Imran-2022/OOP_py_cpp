class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print(f"Name: {self.name}, Age: {self.age}")

def main():
    # Correctly instantiate the Person object
    person1 = Person("John Doe", 30)
    
    # Call the display method to print the details
    person1.display()

if __name__ == "__main__":
    main()
