// Two sum
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> toReturn;
        for (int i = 0; i<nums.size()-1; i++){
            for (int j=i+1; j<nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    toReturn.clear();
                    toReturn.push_back(i);
                    toReturn.push_back(j);

                    return toReturn;
                }
            }
        }

        return vector<int>();
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    for (int &num : result) {
        cout << num << " ";
    }

    return 0;
}