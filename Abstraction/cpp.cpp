#include <iostream>
#include <string>
using namespace std;

// Abstract base class
class Person {
public:
    string name;
    int age;

    // Pure virtual function for abstraction
    virtual void display() = 0;  // Pure virtual function

    // Virtual destructor (needed for polymorphism and dynamic memory handling)
    virtual ~Person() {}  // Virtual destructor

    // Non-abstract method
    void setDetails(string newName, int newAge) {
        name = newName;
        age = newAge;
    }
};

// Concrete derived class
class Employee : public Person {
public:
    string position;

    // Implementation of the abstract method
    void display() override {
        cout << "Name: " << name << ", Age: " << age << ", Position: " << position << endl;
    }
};

int main() {
    // Correctly instantiate the Employee object
    Employee employee1;

    // Set the member variables for Employee
    employee1.name = "John Doe";
    employee1.age = 30;
    employee1.position = "Software Engineer";

    // Call the display method to print the details using abstraction
    employee1.display();

    return 0;
}
