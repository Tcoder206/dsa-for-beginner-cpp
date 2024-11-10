/*
Input:
7 7
1 2
2 3
2 4
3 5
4 5
1 6
7 6
Output: 1 7 2 6 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;
const int maxn = 1001;
int n, m;
vector<int> a[maxn];
int in_degree[maxn]; // Bán bậc vào
bool visited[maxn];
vector<int> topo;
void inp() {
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        in_degree[y]++; // tăng y lên 1 đơn vị vì y là đỉnh liền sau của x
    }
}
void kahn() {
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        if(in_degree[i] == 0) q.push(i);
    }
    while(!q.empty()) {
        int top = q.front(); q.pop();
        topo.push_back(top);
        for(int x : a[top]) { // Lặp qua tất cả các đỉnh x kề vs top
            in_degree[x]--;
            if(in_degree[x] == 0) q.push(x);
        }
    }
    for(int x : topo) {
        cout << x << " ";
    }
}
int main() {
    inp();
    kahn();
    return 0;
}