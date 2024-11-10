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
Output:
3
*/
#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a[1001];
bool visited[1001];
void dfs(int n) {
    visited[n] = true;
    for(int x : a[n]) {
        if(!visited[x]) dfs(x);
    }
}
int connected_component() {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            count++;
            dfs(i);
        }
    }
    return count;
}
int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    cout << connected_component();
    return 0;
}