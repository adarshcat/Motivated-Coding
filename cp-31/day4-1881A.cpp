// Don't Try to Count
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int found = 0;

        if(x.find(s) != string::npos) {
            cout << 0 << '\n';
            found = 1;
            continue;
        }
        
        for(int i = 0; i < 5; i++){
            x += x;
            if(x.find(s) != string::npos) {
                cout << (i+1) << '\n';
                found = 1;
                break;
            }
        }

        if (found == 0)
            cout << -1 << '\n';
    }
    return 0;
}