#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int &num : nums) {
            result ^= num;
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4,1,2,1,2};
    cout << solution.singleNumber(nums) << '\n';
    
    return 0;
}