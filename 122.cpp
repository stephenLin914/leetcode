//122. 买卖股票的最佳时机 II
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        if (prices.size() == 1) {
            return 0;
        }
        for (int i=1; i<prices.size(); ++i) {
            if (prices[i] > prices[i-1]) {
                maxProfit += (prices[i] - prices[i-1]);
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2,3,4,5};
    int res = s.maxProfit(v1);
    cout << res << "\n";
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}