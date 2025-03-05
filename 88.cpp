#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int i,j;
        // i=j=0;
        // for (; i<m || j<n; ) {
        //     if (nums1[i] <= nums2[j]) {
        //         ++i;
        //     } else {
        //         nums1.insert(nums1.begin() + i, nums2[j]);
        //         ++j;
        //     }
        // }
        int i=m-1;
        int j=n-1;
        int k = m+n-1;
        while (j>=0) {
            if (i>=0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> v1 = {1, 2, 3, 0, 0, 0};
    vector<int> v2 = {2, 5, 6};
    s.merge(v1, 3, v2, 3);
    for (auto i : v1) {
        cout << i << endl;
    }
    return 0;
}