// Remove duplicates from sorted array
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        for (int i=0; i<nums.size(); i++) {
            while (i+1 < nums.size() && nums[i+1] == nums[i]) {
                i++;
            }
            nums[index] = nums[i];
            index++;
        }
        return index;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << solution.removeDuplicates(nums);

    return 0;
}