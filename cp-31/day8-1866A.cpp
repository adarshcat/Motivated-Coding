// Ambitious Kid
#include <iostream>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N; cin >> N;
    int minVal = INT_MAX;
    while (N--) {
        int num;
        cin >> num;
        minVal = min(abs(num), minVal);
    }
    cout << minVal;
    return 0;
}