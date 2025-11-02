// Buttons
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        double halfC = c/2.0;

        if ((a + ceil(halfC)) > (b + floor(halfC)))
            cout << "First" << '\n';
        else
            cout << "Second" << '\n';
    }
    
    return 0;
}