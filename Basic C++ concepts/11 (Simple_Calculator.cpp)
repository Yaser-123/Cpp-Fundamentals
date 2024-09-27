#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    char ch;

    // Input for first number
    cout << "Enter first number: ";
    cin >> num1;

    // Input for operator
    cout << "Enter the operator {+, -, *, /, %}: ";
    cin >> ch;

    // Input for second number
    cout << "Enter second number: ";
    cin >> num2;

    // Perform the operation based on the operator using if-else
    if (ch == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } 
    else if (ch == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } 
    else if (ch == '*') {
        cout << "Result: " << num1 * num2 << endl;
    } 
    else if (ch == '/') {
        // Check if second number is zero to avoid division by zero
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else if (ch == '%') {
        // The modulus operator can only be used with integers
        if (num2 != 0) {
            cout << "Result: " << num1 % num2 << endl;
        } else {
            cout << "Error: Modulo by zero!" << endl;
        }
    } 
    else {
        // Invalid operator input
        cout << "Invalid operator!" << endl;
    }

    return 0;
}
