#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Correctly instantiate the Person object
    Person person1;

    // Set the member variables
    person1.name = "John Doe";
    person1.age = 30;

    // Call the display method to print the details
    person1.display();

    return 0;
}
