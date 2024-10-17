#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key) {
    //searching the given key
    for(int i=0; i < n; i++) {
        if(arr[i]==key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,4,3,5,6,9,72};
    int n = sizeof(arr)/sizeof(int);
    int key;

    cout << "Enter the number you want to search: ";
    cin >> key;

    int index = linear_search(arr,n,key);
    if(index != -1) {
        cout << "The element is found at " << index << " position."; 
    }
    else{
        cout << "The element is NOT Found!";
    }

    return 0;
}
