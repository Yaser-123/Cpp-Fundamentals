#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector <int> ans(n,1);
    for(int i = 1; i < n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i = n-2; i >= 0; i--){
        suffix = suffix * nums[i+1];
        ans[i] = ans[i] * suffix;
    }
    return ans;
}

int main() {
    vector <int> v1 = {1,2,3,4};
    vector <int> ans = productExceptSelf(v1);
    cout << "The product except itself is \n";
    for(int i = 0; i< ans.size(); i++){
        cout<< ans[i] << " ";
    }
}