#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int main() {
    vector <int> v1;
    int currSum = 0, maxSum = INT_MIN, size;
    cout << "Enter the size of Vector: ";
    cin >> size;
    cout << "Enter the vector elements: ";
    for(int i=0; i < size; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(int val : v1){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "The Laegest subArray sum is " << maxSum;
}