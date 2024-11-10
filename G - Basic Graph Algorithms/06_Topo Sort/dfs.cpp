/*

Áp dụng khi sắp xếp ko có chu trình

Input:
7 7
1 2
2 3
2 4
3 5
4 5
1 6
7 6
Output: 7 1 6 2 4 3 5

*/
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1001;
int n, m;
bool visited[maxn];
vector<int> a[maxn];
vector<int> topo;
void inp() {
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
    }
}
void dfs(int k) {
    visited[k] = true;
    for(int i : a[k]) {
        if(!visited[i]) dfs(i);
    }
    topo.push_back(k);
}
int main() {
    inp();
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) dfs(i);
    }
    reverse(topo.begin(), topo.end());
    for(int x : topo) cout << x << " ";
    return 0;
}