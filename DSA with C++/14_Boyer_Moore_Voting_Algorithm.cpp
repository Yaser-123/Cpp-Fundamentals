#include<iostream>
#include<vector>
using namespace std;


int majorityElement(vector<int>& nums) {
    int fre = 0, ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(fre == 0){
            ans = nums[i];
            fre = 1;
        }
        else if(ans == nums[i]){
            fre ++;
        }
        else {
            fre --;
        }
    }
    return ans;
}

int main() {
    vector<int> v1 = {1,2,1,2,1,2,2};
    int ans = majorityElement(v1);
    cout << "The majority element is " << ans;
    return 0;
}