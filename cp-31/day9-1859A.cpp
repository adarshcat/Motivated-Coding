// United We Stand
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int len;
        cin >> len;
        vector<int> nums(len);

        bool same = true;
        int maxVal = 0;
        int maxCount = 0;
        for (int i=0; i<len; i++) {
            int num;
            cin >> num;
            nums[i] = num;

            if (i > 0 && nums[i-1] != num) same = false;
            
            if (num > maxVal) {
                maxVal = num;
                maxCount = 0;
            }

            if (num == maxVal) maxCount++;
        }

        if (same){
            cout << -1 << '\n';
            continue;
        }


        cout << nums.size() - maxCount << " " << maxCount << '\n';
        for (int i=0; i<len; i++) {
            if (nums[i] != maxVal) cout << nums[i] << " ";
        }
        cout << '\n';
        for (int i=0; i<maxCount; i++) {
            cout << maxVal << " ";
        }
        cout << '\n';
    }
    
    return 0;
}