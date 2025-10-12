// Game with Integers
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int n;
        cin >> n;
        
        if (n % 3 == 0)
            cout << "Second" << '\n';
        else
            cout << "First" << '\n';
    }
    return 0;
}