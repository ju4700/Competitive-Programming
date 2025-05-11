#include <bits/stdc++.h>
using namespace std;
 
struct Cell {
    int i, j;
    long long freq;
};
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<Cell> cells;
        cells.reserve(n*n);
        
        // Calculate frequency for each cell.
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                long long f = (long long)(i+1) * (j+1) * (n-i) * (n-j);
                cells.push_back({i, j, f});
            }
        }
        
        // Sort cells in descending order of frequency.
        // For ties, order by row then by column.
        sort(cells.begin(), cells.end(), [](const Cell &a, const Cell &b){
            if(a.freq == b.freq){
                if(a.i == b.i) return a.j < b.j;
                return a.i < b.i;
            }
            return a.freq > b.freq;
        });
        
        // Assignment: smallest numbers go to highest frequency positions.
        vector<vector<int>> grid(n, vector<int>(n));
        int total = cells.size();
        for (int idx = 0; idx < total; idx++) {
            grid[cells[idx].i][cells[idx].j] = idx;
        }
        
        // Output the grid.
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << grid[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}