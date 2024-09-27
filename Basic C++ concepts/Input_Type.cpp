#include <iostream>
using namespace std;

int main() {
    string Name;
    float age;
    
    cout << "Enter your Name: " << endl;
    getline(cin, Name); // Read the full line for the name.

    cout << "Enter your Age: ";
    cin >> age; // Read the age

    cout << "Hello " << Name << " \n"; //You can use "\n" instead of endl.
    cout << "You are " << age << " years old." << endl;

    return 0;
}
