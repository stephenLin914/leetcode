//169. 多数元素
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res, cnt;
        res = cnt = 0;
        for (auto i : nums) {
            if (cnt == 0) {
                res = i;
                ++cnt;
                continue;
            }
            if (res == i) {
                ++cnt;
            } else {
                --cnt;
            }
        }
        return res;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {2,2,1,1,1,2,2};
    int res = s.majorityElement(v1);
    cout << res << endl;
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}