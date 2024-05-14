#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    string position;

    // Override the display method to include position
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

    // Call the display method to print the details using polymorphism
    employee1.display();

    return 0;
}
