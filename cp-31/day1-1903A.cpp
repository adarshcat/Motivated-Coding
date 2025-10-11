// Halloumi Boxes
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int N, K; cin >> N >> K;
        vector<int> A(N);
        for (auto& a : A) cin >> a;
        cout << (K >= 2 || is_sorted(A.begin(), A.end()) ? "YES" : "NO") << '\n';
    }
    return 0;
}