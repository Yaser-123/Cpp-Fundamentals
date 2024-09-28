#include<iostream>
using namespace std;

int main() {
    int index = 1;

    cout << "While loop!!!\n";

    while(index <= 5){
        cout << index << endl;
        index++;
    } 

    cout << "Do while loop!\n";

    do{
        cout << index;
        index++;
    }while(index <= 5);

    return 0;
}