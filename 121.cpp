//121. 买卖股票的最佳时机
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int res = 0;
        // for (int i=0; i<prices.size()-1; ++i) {
        //     for (int j = i+1; j<prices.size(); ++j) {
        //         int profit = prices[j] - prices[i];
        //         if (profit > res) {
        //             res = profit;
        //         }
        //     }
        // }
        // return res;
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        for (auto i : prices) {
            minPrice = min(minPrice, i);
            maxProfit = max(maxProfit, i - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {7,1,5,3,6,4};
    int res = s.maxProfit(v1);
    cout << res << "\n";
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}