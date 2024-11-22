#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n) {
    // Iterate through each starting index of the subarray
    for (int i = 0; i < n; i++) {
        // Iterate through each ending index of the subarray
        for (int j = i; j < n; j++) {
            // Print the elements from the starting index to the ending index
            for (int k = i; k <= j; k++) {
                cout << arr[k] << ","; // Corrected to use << for output
            }
            cout << endl; // Print a new line after each subarray
        }
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60}; // Sample array
    int n = sizeof(arr) / sizeof(int); // Calculate the number of elements
    printSubarrays(arr, n); // Call the function to print subarrays
    return 0; // End of program
}
