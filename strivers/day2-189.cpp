// Rotate Array
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> copied(nums);
        for (int i=nums.size()-1; i>=0; i--) {
            int wrapped = i-k;
            if (wrapped < 0) {
                wrapped = (-(-wrapped % nums.size()) + nums.size()) % nums.size();
            }
            nums[i%nums.size()] = copied[wrapped];
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1,2,3,4,5,6,7};
    solution.rotate(nums, 3);

    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}