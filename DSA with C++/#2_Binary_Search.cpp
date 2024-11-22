#include <iostream>
using namespace std;

int Binary_search(int arr[], int n, int key) {
    //searching the given key
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    while(s<=e) {
        if(arr[mid]==key) {
            return mid+1; //mid+1 because we are returning position not index
        }
        else if(arr[mid] > key) {
            e = mid-1;
        }
        else {
            s = mid + 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,4,6,8,15,21,33};
    int n = sizeof(arr)/sizeof(int); //you can use sizeof(arr)/sizeof(arr[0]) in case you don't know the size of array.
    int key;

    cout << "Enter the number you want to search: ";
    cin >> key;

    int index = Binary_search(arr,n,key);
    if(index != -1) {
        cout << "The element is found at " << index << " position."; 
    }
    else{
        cout << "The element is NOT Found!";
    }

    return 0;
}
