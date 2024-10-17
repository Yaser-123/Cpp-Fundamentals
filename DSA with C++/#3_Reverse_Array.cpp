#include<iostream>
using namespace std;

void reversearray(int array[], int n){
    int s = 0;
    int e = n-1;

    while(s<e) {
        swap(array[s], array[e]);
        s++;
        e--;
    }
}

int main() {
    int arr[] = {10,20,30,40,50,99};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Before reverse functoion: \n";   
    for(int i =0; i<n; i++){
        cout << arr[i];
        if (i < n - 1) cout << ",";
    }

    cout << endl;

    reversearray(arr, n);
    cout << "After reverse functoion: \n"; 
    for(int i =0; i<n; i++){
        cout << arr[i];
        if (i < n - 1) cout << ",";
    }
    

}
