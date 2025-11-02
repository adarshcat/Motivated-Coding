// Rearrange Array Elements by Sign
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int posIndex = 0;
        int negIndex = 1;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] >= 0) {
                result[posIndex] = nums[i];
                posIndex += 2;
            } else {
                result[negIndex] = nums[i];
                negIndex += 2;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> result = solution.rearrangeArray(nums);
    for (int &num : result) {
        cout << num << " ";
    }

    return 0;
}