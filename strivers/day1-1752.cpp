// Check if an array is sorted
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int rotated = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] > nums[(i+1)%nums.size()] && ++rotated > 1)
                return false;
        }
        return true;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,1,3,4};
    cout << solution.check(nums);

    return 0;
}