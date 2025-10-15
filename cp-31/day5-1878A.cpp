// How Much Does Daytona Cost?
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        
        int found = 0;
        for (int i=0; i<n; i++) {
            int num;
            cin >> num;
            if (num == k) found = 1;
        }

        if (found) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}