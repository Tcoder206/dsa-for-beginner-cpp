/*
Input:
5 9
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5
Output:
0 1 1 1 0
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    int res[n + 1][n + 1] = {0};
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        res[x][y] = res[y][x] = 1;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}