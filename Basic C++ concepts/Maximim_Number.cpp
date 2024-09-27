#include<iostream>
#include<cmath>  // Required for fmax function
using namespace std;

// Function to return the maximum of three numbers
double getMax(double a, double b, double c) {
    // Use fmax to find the maximum of a, b, and c
    return fmax(fmax(a, b), c);
}

int main() {
    // Output the maximum of the three numbers 5, 10, and 15
    cout << getMax(5, 10, 15);
    return 0;
}
