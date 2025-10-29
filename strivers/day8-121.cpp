// Best Time to Buy and Sell Stock
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int maxProfit = 0;
        for (int i=1; i<prices.size(); i++) {
            buyPrice = min(buyPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - buyPrice);
        }
        return maxProfit;
    }
};

int main() {
    Solution solution;
    vector<int> prices = {7,1,5,3,6,4};
    cout << solution.maxProfit(prices);
    return 0;
}