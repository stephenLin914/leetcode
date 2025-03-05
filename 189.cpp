//189. 轮转数组
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> copyArr(nums);
        if (k > len) {
            k = k % len;
        }
        int i = len - k;
        int j = 0;
        while (j < len) {
            nums[j++] = copyArr[(i % len)];
            ++i;
        }
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1,2};
    s.rotate(v1, 5);
    cout << "\n";
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}