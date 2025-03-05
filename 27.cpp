#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j;
        i=j=0;
        int len = nums.size();
        while (j < len) {
            if (nums[j] != val) {
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
    vector<int> v1 = {0,1,2,2,3,0,4,2};
    int res = s.removeElement(v1, 2);
    cout << res << endl;
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}