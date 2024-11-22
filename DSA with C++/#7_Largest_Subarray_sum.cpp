#include<iostream>
#include<cmath>
using namespace std;

int maximimum_subarray_sum(int arr[],int n){
    int cs = 0;
    int largest = 0;
    for(int i=0; i < n; i++){
        cs += arr[i];
        if(cs<0) {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}

int main() {
    int array[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(array)/sizeof(array[0]);
    cout<< maximimum_subarray_sum(array, n);
    return 0;
}
