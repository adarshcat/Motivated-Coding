// Doremy's Paint 3
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;

        int failed = 0;
        
        int el1 = -1;
        int el2 = -1;
        int el1Count = 0;
        int el2Count = 0;

        for (int i=0; i<n; i++) {
            int num;
            cin >> num;
            if (failed) continue;
            if (el1 == -1) {
                el1 = num;
            }
            else if (num != el1 && el2 == -1) {
                el2 = num;
            }

            if (num == el1) el1Count++;
            else if (num == el2) el2Count++;
            else failed = 1;
        }
        if (failed || (el1Count != n/2 && el2Count != n/2 && el1Count != n)) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}