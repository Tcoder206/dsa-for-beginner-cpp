/*
Input:
9 9
1 2
1 3
1 5
2 4
3 6
3 7
3 9
5 8
8 9
Output:
1 2 4 3 6 7 9 8 5
*/
#include<bits/stdc++.h>
using namespace std;
void dsc_dsk(vector<int>* a, int n, int m) { // n là giá trị max, m là số dòng
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void dfs(vector<int>* a, bool* visited, int n, int m) {
    cout << n << " ";
    visited[n] = true;
    for(int x : a[n]) {
        if(!visited[x]) dfs(a, visited, x, m);
    }
}
int main() {
    int n, m; cin >> n >> m;
    vector<int> a[n + 1];
    bool visited[n + 1] = {false};
    dsc_dsk(a, n, m);
    dfs(a, visited, 1, m);
    return 0;
}