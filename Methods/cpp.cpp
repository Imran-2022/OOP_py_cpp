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

int main()
{
    // Correctly instantiate the Person object
    Person person1;

    // Use the setDetails method to set the member variables
    person1.setDetails("John Doe", 30);

    // Call the display method to print the details
    person1.display();

    // Changing details using the setDetails method
    person1.setDetails("Jane Smith", 25);
    person1.display();

    return 0;
}
