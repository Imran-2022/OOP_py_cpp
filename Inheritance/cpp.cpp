#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Method to set the details of the person
    void setDetails(string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    string position;

    // Method to set the details of the employee
    void setEmployeeDetails(string newName, int newAge, string newPosition) {
        setDetails(newName, newAge);
        position = newPosition;
    }

    void displayEmployee() {
        display();
        cout << "Position: " << position << endl;
    }
};

int main()
{
    // Correctly instantiate the Employee object
    Employee employee1;

    // Use the setEmployeeDetails method to set the member variables
    employee1.setEmployeeDetails("John Doe", 30, "Software Engineer");

    // Call the displayEmployee method to print the details
    employee1.displayEmployee();

    // Changing details using the setEmployeeDetails method
    employee1.setEmployeeDetails("Jane Smith", 25, "Data Scientist");
    employee1.displayEmployee();

    return 0;
}
