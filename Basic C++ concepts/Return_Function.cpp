#include<iostream>
#include<cmath>
using namespace std;

double cube(double num) {
    return pow(num, 3);
}

int main() {
    int num;
    cout<< "Enter a number: ";
    cin>> num;
    cout<< cube(num);
    return 0;
}