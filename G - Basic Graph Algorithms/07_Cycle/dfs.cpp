/*

* Giải thích dòng code 45 tại sao lại là u != parent[k]:
Giả sử đồ thị có các cạnh:
1 -> 2 -> 3
3 -> 1 (cạnh ngược tạo chu trình)
Quá trình chạy code:
+ DFS(1): visited[1] = true
+ DFS(2): visited[2] = true, parent[2] = 1
+ DFS(3): visited[3] = true, parent[3] = 2
Khi gọi tiếp DFS(1), ta thấy 1 đã được thăm và 1 != parent[3].
=> Chu trình được phát hiện.

Input:
7 6
1 2
2 3
2 4
3 6
6 7
1 6
Output: Yes
*/
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1001;
int n, m;
bool visited[maxn];
vector<int> a[maxn];
int parent[maxn];
void inp() {
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
bool dfs(int k) {
    visited[k] = true;
    for(int u : a[k]) { // Duyệt các đỉnh kề với nó
        if(!visited[u]) {
            parent[u] = k;
            if(dfs(u)) return true; // Duyệ
        } else if(u != parent[k]) return true; // Tồn tại cạnh ngược
    }
    return false; // Ko tìm đc cạnh ngược -> Đồ thị ko có chu trình
}
int main() {
    inp();
    cout << (dfs(1) ? "Yes" : "No") << endl;
    return 0;
}