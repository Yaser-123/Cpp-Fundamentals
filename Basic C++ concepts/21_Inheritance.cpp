#include <iostream>
using namespace std;

// Base class
class Animal {
    public:
        // Method to make sound
        void makeSound() {
            cout << "Animal sound!" << endl;
        }
};

// Derived class
class Dog : public Animal {  // Inheriting from Animal class
    public:
        // Method to display Dog's information
        void displayInfo() {
            cout << "This is a dog." << endl;
        }

        // Overriding the makeSound method
        void makeSound() {
            cout << "Bark!" << endl;
        }
};

int main() {
    // Creating an object of the Dog class
    Dog dog;

    // Calling methods from the Dog class
    dog.displayInfo();       // Calls Dog's method
    dog.makeSound();        // Calls overridden method

    // Calling method from the base class
    Animal animal;
    animal.makeSound(); // Calls Animal's method

    //or u can use this both are same
    cout << endl;
    dog.Animal::makeSound(); 

    return 0;
}
