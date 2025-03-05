//26. 删除有序数组中的重复项
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if (nums.size() == 0) {
        //     return 0;
        // }
        // if (nums.size() == 1) {
        //     return 1;
        // }
        // int i,j;
        // i = j = 0;
        // int len = nums.size();
        // while (j+1 < len) {
        //     if (nums[j] != nums[j+1]) {
        //         nums[i] = nums[j];
        //         ++i;
        //     }
        //     ++j;
        // }
        // if (nums[i-1] != nums[len-1]) {
        //     nums[i] = nums[len-1];
        //     ++i;
        // }
        // return i;
        int i, j;
        i = j = 1;
        int len = nums.size();
        while (j < len) {
            if (nums[j] != nums[j-1]) {
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
    vector<int> v1 = {0,0,1,1,1,2,2,3,3,4};
    int res = s.removeDuplicates(v1);
    cout << res << endl;
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}