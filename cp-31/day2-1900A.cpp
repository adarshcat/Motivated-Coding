// Cover in water
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int consecutive = 0;
        int actions = 0;
        
        for (int i=0; i<n; i++) {
            if (s[i] == '.'){
                consecutive++;
                if (consecutive == 3) {
                    actions = 2;
                    break;
                }
                actions++;
            } else {
                consecutive = 0;
            }
        }
        cout << actions << '\n';
    }
    return 0;
}