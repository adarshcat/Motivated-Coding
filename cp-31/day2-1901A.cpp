// Line Trip
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> points(n+1);
        points[0] = 0;
        for (int i=1; i<n+1; i++) cin >> points[i];
        
        int max = 0;
        for (int i=0; i<n; i++) {
            int dist = points[i+1] - points[i];
            max = (dist > max)? dist : max;
        }

        int endDist = (x - points[n])*2;
        max = (endDist > max)? endDist : max;

        cout << max << '\n';
    }
    return 0;
}