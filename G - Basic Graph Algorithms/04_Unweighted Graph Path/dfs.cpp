
/*
Input:
10 8
1 2
2 3
2 4
3 6
3 7
6 7
5 8
8 9
1 7
Output: 1 2 3 6 7
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool visited[1001];
int parent[1001];
void dfs(int n) {
    visited[n] = true;
    for(int x : a[n]) {
        if(!visited[x]) {
            parent[x] = n;
            dfs(x);
        }
    }
}
void path(int s, int t) {
    memset(visited, false, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    dfs(s);
    if(!visited[t]) {
        cout << "Ko co duong di" << endl;
    } else {
        vector<int> path; // Truy vết ngược đường đi
        while(t != s) {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(), path.end()); // Truy vết từ cuối lên đầu nên phải reverse
        for(int i : path) cout << i << " ";
    }
}
int main() {
    int n, m; cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int s, t; cin >> s >> t;
    path(s, t);
    return 0;
}