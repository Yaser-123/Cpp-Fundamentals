#include<iostream>
#include<vector>
#include<climits>
using namespace std;
 
int largestElement(vector<int> A) {
    int largestEle = INT_MIN;
    for (auto element : A ) {
        largestEle = max(largestEle, element);
    }
    return largestEle;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;  // Input the size of the vector
    vector<int> A(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];  // Input the elements of the vector
    }
    
    cout << "The Largest element is " << largestElement(A);  // Output the largest element
    return 0;
}
