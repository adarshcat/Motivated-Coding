// Goals of Victory
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        
        int sum = 0;
        for (int i=0; i<n-1; i++) {
            int num;
            cin >> num;

            sum += num;
        }
        cout << -sum << '\n';
    }
    return 0;
}