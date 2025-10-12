// Move zeroes
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int shift = 0;
        for (int i=0; i<nums.size(); i++) {
            nums[i-shift] = nums[i];
            if (nums[i] == 0) shift++;
        }
        for (int i=nums.size()-shift; i<nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0,1,0,3,12};
    solution.moveZeroes(nums);

    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}