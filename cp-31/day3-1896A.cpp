// Jagged Swaps
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        
        int firstElement;
        cin >> firstElement;
        if (firstElement == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
        for (int i=1; i<n; i++) cin >> firstElement;
    }
    return 0;
}