#include<iostream>
#include<vector>
using namespace std;

vector <int> pairSum(vector<int> nums, int target){
    int n = nums.size();
    int i = 0, j = n-1;
    vector <int> ans;
    while(i<j){
        if(nums[i]+nums[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if(nums[i]+nums[j] < target){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}

int main() {
    vector<int> a = {1,2,3,4,5,12}, ans;
    int target = 7;
    ans = pairSum(a,target); //seven = index 1 and 4 (2+5) = 7
    cout << ans[0] << "," << ans[1]; 
    return 0;
}