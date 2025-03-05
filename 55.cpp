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
            
        }
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2,3,4,5};
    int res = s.canJump(v1);
    cout << res << "\n";
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}