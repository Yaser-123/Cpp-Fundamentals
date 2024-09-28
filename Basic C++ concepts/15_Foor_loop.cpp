#include<iostream>
using namespace std;

int main() {
    int nums[] = {1,4,40,56,2,5,7,5};

    for (int i=0; i <  sizeof(nums) / sizeof(int); i++) {  // sizeof(nums) / sizeof(int) is similar to length(nums). unfortunately c++ doesn't haave length function
        cout << nums[i] << endl;
    }
}