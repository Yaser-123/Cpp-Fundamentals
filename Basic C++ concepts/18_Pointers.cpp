#include<iostream>
using namespace std;

int main() {

    int age = 18;
    int *pAge = &age; //Pointer variable declaration done ny '*'.
    double grade = 8.97;
    string name = "T Mohamed Yaser";
    string *pName = &name; //The address can be identified using '&'.
    cout <<" Age : "<<*pAge <<endl;
    cout <<" Grade address : "<< &grade <<endl; //The address will be printed in hexa-decimal code.
    cout <<" name address : "<< *&*pName <<endl;

    return 0;
}