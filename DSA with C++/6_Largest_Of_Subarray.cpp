#include <iostream>
#include <climits>  // To use INT_MIN
using namespace std;

void printSubarraysAndLargestSum(int arr[], int n) {
    int maxSum = INT_MIN;  // Initialize to the smallest possible int value

    // Loop through the starting index of the subarray
    for (int i = 0; i < n; i++) {
        // Loop through the ending index of the subarray
        for (int j = i; j < n; j++) {
            int currentSum = 0;  // Initialize currentSum for each subarray

            // Inner loop to calculate the sum of the current subarray
            for (int k = i; k <= j; k++) {
                cout << arr[k] << ",";  // Print the current subarray element
                currentSum += arr[k];  // Update the current sum
            }
            cout << endl;  // Print a new line after each subarray

            // Update maxSum if the currentSum is greater
            maxSum = (currentSum > maxSum) ? currentSum : maxSum; //Ternary operator (condition) ? true : false;

        }
    }

    // Output the largest sum of all subarrays
    cout << "Largest sum of subarrays: " << maxSum << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    printSubarraysAndLargestSum(arr, n);  // Call the modified function
    return 0;
}
