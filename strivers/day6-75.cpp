// Sort colors
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroIndex = 0;
        int twoIndex = nums.size() - 1;

        while(zeroIndex < nums.size() && nums[zeroIndex] == 0) zeroIndex++;
        while(twoIndex >= 0 && nums[twoIndex] == 2) twoIndex--;
        
        for (int i=zeroIndex; i<=twoIndex; i++) {
            if (nums[i] == 0) {
                int temp = nums[zeroIndex];
                nums[zeroIndex] = nums[i];
                nums[i] = temp;
                zeroIndex++;
                if (i != zeroIndex) i--;
            } else if (nums[i] == 2) {
                int temp = nums[twoIndex];
                nums[twoIndex] = nums[i];
                nums[i] = temp;
                twoIndex--;
                if (i != zeroIndex) i--;
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,0,2,1,1,0};
    solution.sortColors(nums);

    for (int &num: nums) {
        cout << num << " ";
    }

    return 0;
}