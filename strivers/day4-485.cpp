// Max consecutive ones
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int consecutive = 0;
        for (int &num : nums) {
            if (num == 1) consecutive++;
            maxConsecutive = (consecutive > maxConsecutive)?consecutive : maxConsecutive;
            if (num != 1) consecutive = 0;
        }
        return maxConsecutive;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1,1,0,1,1,1};
    cout << solution.findMaxConsecutiveOnes(nums) << '\n';

    return 0;
}