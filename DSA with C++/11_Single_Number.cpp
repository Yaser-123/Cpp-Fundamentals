#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v1;
    int size, ans = 0;
    cout << "Enter the size of the vector:  ";
    cin >> size;
    cout << "Enter the vector elements: ";
    for(int i = 0; i < size; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(int val : v1){
        ans ^= val;
    }
    cout << "The single number is " << ans;
    return 0;
}