#include<iostream>
using namespace  std;

int main() {

    int array[] = {10,20,30}; //Declaration of Array
    array[1] = 50; //Arrays are Immutable
    cout<< array[0] <<endl;
    cout<< array[1] <<endl;
    cout<< array[2] <<endl;

    return 0;
}