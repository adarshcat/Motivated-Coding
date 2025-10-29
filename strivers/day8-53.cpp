// Maximum Subarray
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = nums[0];
        int max_ending_here = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            max_ending_here = max(nums[i], max_ending_here + nums[i]);
            max_so_far = max(max_so_far, max_ending_here);
        }

        return max_so_far;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << solution.maxSubArray(nums);
    return 0;
}