#include<iostream>
using namespace std;

int BinaryToDecimal(int num) {
    int ans = 0, pow = 1;
    while(num > 0){
        int rem = num % 2;
        num /= 10;
        ans += (rem * pow);
        pow *= 2;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << BinaryToDecimal(num);
    return 0;
}