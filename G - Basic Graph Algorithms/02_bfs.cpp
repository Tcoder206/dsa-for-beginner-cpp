/*
Input:
10 11
1 2
1 3
1 5
1 10
2 4
3 6
3 7
3 9
5 8
6 7
8 9
Output:
1 2 3 5 10 4 6 7 9 8
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
void bfs(vector<int>* a, bool* visited, int n, int m) {
    queue<int> temp;
    temp.push(n);
    visited[n] = true;
    while(!temp.empty()) {
        int top = temp.front();
        temp.pop();
        cout << top << " ";
        for(int x : a[top]) {
            if(!visited[x]) {
                temp.push(x);
                visited[x] = true;
            }
        }
    }
}
int main() {
    int n, m; cin >> n >> m;
    vector<int> a[n + 1];
    bool visited[n + 1] = {false};
    dsc_dsk(a, n, m);
    bfs(a, visited, 1, m);
    return 0;
}