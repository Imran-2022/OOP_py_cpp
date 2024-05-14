#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Method to set the details of the person
    void setDetails(string newName, int newAge) {
        name = newName;
        age = newAge;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for age
    int getAge() const {
        return age;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    string position;

public:
    // Method to set the details of the employee
    void setEmployeeDetails(string newName, int newAge, string newPosition) {
        setDetails(newName, newAge);
        position = newPosition;
    }

    // Getter for position
    string getPosition() const {
        return position;
    }

    void displayEmployee() const {
        display();
        cout << "Position: " << position << endl;
    }
};

int main() {
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
