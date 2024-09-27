//fmax(),ciel(),floor(),round(),sqrt(),pow(),fmin()
#include<iostream>
#include<cmath> //Has many builtin math functions including trignometric and logrithmic functions.
using namespace std;
int main() {

    cout<<round(4.445)<<endl;
    cout<<ceil(4.445)<<endl; //rounds off by next possible number.
    cout<<floor(4.445)<<endl; //Eliminates the decimal number.
    cout<<sqrt(36)<<endl;
    cout<<pow(3,4)<<endl; //Power function takes 2 arguments base example(3) and power example(4) pow(3,4) = 3 power 4.
    cout<<fmax(3,10)<<endl; //maximum
    cout<<fmin(3,10)<<endl; //minimum

    return 0;
}