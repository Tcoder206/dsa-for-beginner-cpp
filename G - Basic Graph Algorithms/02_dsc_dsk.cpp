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
1 : 2 3 4
2 : 1 3 4 5
3 : 1 2 4 5
4 : 1 2 3 5
5 : 2 3 4
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m; cin >> n >> m;
    vector<int> res[n + 1];
    for(int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        res[x].push_back(y);
        res[y].push_back(x);
    }
    for(int i = 1; i <= n; i++) {
        cout << i << " : ";
        for(int j : res[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}