#include<iostream>
using namespace std;

/*
The process of pairing involves the following steps:
1. Iterate through each element in the array using an outer loop.
2. For each element (x), use an inner loop to iterate through the remaining elements.
3. In the inner loop, select each subsequent element (y) to form a pair with the current element (x).
4. Print the pair (x, y) to show all unique pairs without repetition.
*/

void printingPairs(int arr[], int n) {
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            int y = arr[j];
            cout << x <<"," <<y <<endl;
        }

        cout << endl;
    }
}

int main() {
    int array[] = {10,30,45,60};
    int n = sizeof(array)/sizeof(array[0]);
    printingPairs(array,n);
    return 0;
}