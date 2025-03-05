//55. 跳跃游戏
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for (int i=0; i<nums.size(); ++i) {
            if (i > maxReach) {
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
        }
        return maxReach >= nums.size()-1;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {3,2,1,0,4};
    int res = s.canJump(v1);
    cout << res << "\n";
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}