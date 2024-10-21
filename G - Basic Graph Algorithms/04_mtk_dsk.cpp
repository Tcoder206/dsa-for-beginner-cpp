/*
Input:
5
0 1 1 1 0
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
0 1 1 1 0
Output:
1 2
1 3
1 4
2 3
2 4
2 5
3 4
3 5
4 5
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int a[n + 1][n + 1] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    vector<pair<int, int>> res;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(a[i][j] == 1 && i < j) {
                res.push_back({i, j});
            }
        }
    }
    for(auto it : res) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}