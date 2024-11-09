#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
        int ans = 0, lp = 0, rp = height.size() - 1;
        while(lp<rp){
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int area = w *ht;
            ans = max(ans, area);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return ans;
    }

int main() {
    vector <int> v1 = {1,8,6,2,5,4,8,3,7};
    vector <int> v2 = {1,1};
    int ans = maxArea(v1);
    cout << "The maximum container is = " << ans;
    ans = maxArea(v2);
    cout << "\nThe maximum container is = " << ans;
}