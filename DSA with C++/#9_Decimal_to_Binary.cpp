#include<iostream>
using namespace std;

int DecimalToBinary(int num) {
    int ans = 0, pow = 1;
    while(num > 0){
        int rem = num % 2;
        num /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a integer number: ";
    cin >> num;
    cout << DecimalToBinary(num);
    return 0;
}
