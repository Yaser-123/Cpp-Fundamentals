#include<iostream>
using namespace std;

void Greet(string Name, int age){
    cout<< "Hello " << Name << " You are " << age << endl;
}

int main() {
    Greet("Yaser", 18);
    Greet("Wahab", 21); //Functions are reusable
    Greet("Ghouse", 22);
}