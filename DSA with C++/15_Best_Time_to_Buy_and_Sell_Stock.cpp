#include<iostream>
#include<cmath>
#include<climits>
#include<vector>
using namespace std;

int main() {
    vector <int> v1;
    int size, BestBuy = INT_MAX, MaxProfit = 0;
    cout << "Enter the days of Stock: ";
    cin >> size;
    cout << "Enter the cost of Stock: ";
    for(int i=0; i < size; i++){
        int temp;
        cin >> temp;
        v1.push_back(temp);
    }

    for(int i = 0; i < v1.size(); i++){
        if(v1[i] > BestBuy){
            MaxProfit = max(MaxProfit, v1[i] - BestBuy);
        }
        BestBuy = min(BestBuy, v1[i]);
    }
    cout << "The maximum profit you can get in this stock is " <<MaxProfit;
}