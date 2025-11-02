// The Two Sneaky Numbers of Digitville
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> map(nums.size()-2);
        vector<int> result(2);
        int found = 0;

        for (int i=0; i<nums.size(); i++) {
            if (map[nums[i]]++ == 1)
                result[found++] = nums[i];
            
            if (found == 2) break;
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0,3,2,1,3,2};
    vector<int> result = solution.getSneakyNumbers(nums);
    cout << result[0] << " " << result[1];

    return 0;
}