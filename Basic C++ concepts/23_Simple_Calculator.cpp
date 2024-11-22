#include <iostream>
using namespace std;

void add() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}

void subtract() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Difference: " << a - b << endl;
}

int main() {
    int choice;
    cout << "1. Add\n2. Subtract\nChoose an operation: ";
    cin >> choice;
    
    if (choice == 1) {
        add();
    } else if (choice == 2) {
        subtract();
    } else {
        cout << "Invalid option!" << endl;
    }
    return 0;
}
