// Count Unguarded Cells in the Grid
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n));

        for (vector<int> &pos : guards)
            grid[pos[0]][pos[1]] = 1;
        for (vector<int> &pos : walls)
            grid[pos[0]][pos[1]] = -1;
        
        for (vector<int> &pos : guards) {
            int x = pos[0]+1;
            int y = pos[1];
            while (x < m && abs(grid[x][y]) != 1) {grid[x][y] = 2; x++;}
            x = pos[0]-1;
            while (x >= 0 && abs(grid[x][y]) != 1) {grid[x][y] = 2; x--;}
            x = pos[0]; y = pos[1]+1;
            while (y < n && abs(grid[x][y]) != 1) {grid[x][y] = 2; y++;}
            y = pos[1]-1;
            while (y >= 0 && abs(grid[x][y]) != 1) {grid[x][y] = 2; y--;}
        }

        int count = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j] == 0)
                    count++;
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    int m = 4, n = 6;
    vector<vector<int>> guards = {{0,0},{1,1},{2,3}};
    vector<vector<int>> walls = {{0,1}, {2,2}, {1,4}};
    cout << solution.countUnguarded(m, n, guards, walls);;

    return 0;
}