//80. 删除有序数组中的重复项
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i, j;
        i = j = 2;
        int len = nums.size();
        while (j < len) {
            if (nums[j] != nums[i-2]) {
                nums[i] = nums[j];
                ++i;
            }
            ++j;
        }
        return i;
    }
};

int main() {
    Solution s;
    vector<int> v1 = {0,0,1,1,1,1,2,3,3};
    int res = s.removeDuplicates(v1);
    cout << res << endl;
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}