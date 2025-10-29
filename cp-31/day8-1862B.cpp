// Sequence Game
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int N, prev;
        vector<int> nums{};
        cin >> N;
        for (int i=0; i<N; i++) {
            int num;
            cin >> num;
            if (i == 0) prev = num;
            
            nums.push_back(num);
            if (num < prev)
                nums.push_back(num);
            
            prev = num;
        }

        cout << nums.size() << '\n';
        for (int i=0; i<nums.size(); i++) {
            cout << nums[i] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}