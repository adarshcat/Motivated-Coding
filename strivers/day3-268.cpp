// Missing number
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = ((nums.size()+1)*nums.size())/2;
        for (int &num : nums)
            sum -= num;
        return sum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout << solution.missingNumber(nums);

    return 0;
}