// Target Practice
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int getScore(int ind) {
    return (ind < 5)?(ind+1):(10-ind);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        int totalScore = 0;
        for (int i=0; i<10; i++) {
            string line;
            cin >> line;

            int rowScore = getScore(i);
            for (int j=0; j<10; j++) {
                if (line[j] == 'X') totalScore += min(getScore(j), rowScore);
            }
        }
        cout << totalScore << '\n';
    }
    return 0;
}