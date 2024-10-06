/*

4 4
1 2 3 4
5 6 7 8
2 2 1 3
4 2 6 8
1
1 3 1 4
44 (Output)

4 4
1 5 6 11
1 7 11 9
4 6 1 3
7 5 4 2
1
2 3 2 4
37 (Output)

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int m, n; cin >> m >> n; int a[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) cin >> a[i][j];
    }
    int prefix[n + 1][m + 1] = {0};
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i - 1][j - 1];
        }
    }
    int t; cin >> t;
    while(t--) {
        int h1, h2, c1, c2; cin >> h1 >> h2 >> c1 >> c2;
        cout << (prefix[h2][c2] - prefix[h2][c1 - 1] - prefix[h1 - 1][c2] + prefix[h1 - 1][c1 - 1]) << endl;
    }
    return 0;
}