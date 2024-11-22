#include<iostream>
#include<cmath>
#include <algorithm> 
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main() {
    int arr[] = {1, 4, 6, 2, 8};  // Correct array initialization
    int n = sizeof(arr) / sizeof(arr[0]);  // Correctly calculate array size
    selectionSort(arr, n);  // Call selectionSort with correct parameters

    // Display the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

