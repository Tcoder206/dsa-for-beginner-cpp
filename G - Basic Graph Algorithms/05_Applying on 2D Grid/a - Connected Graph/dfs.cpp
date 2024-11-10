/*
|        | i-1, j |        |
| i, j-1 |  i, j  | i, j+1 |
|        | i+1, j |        |

Input:
6 6
xxxooo
ooxooo
oxxxxo
ooooox
xxoxox
xoxxox
Output: 4
*/
#include<bits/stdc++.h>
using namespace std;
const int direction = 4;
int dx[direction] = {-1, 0, 0, 1};
int dy[direction] = {0, -1, 1, 0};
bool visited[1001][1001];
char a[1001][1001];
int n, m;
void dfs(int p, int q) {
    visited[p][q] = true;
    for(int k = 0; k < direction; k++) {
        int i = p + dx[k];
        int j = q + dy[k];
        if(i >= 1 && i <= n && j >= 1 && j <= m && a[i][j] == 'x' && !visited[i][j]){
            dfs(i, j);
        }
    }
}
void handle() { // Xử lý input và đếm thành phần liên thông
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    memset(visited, false, sizeof(visited)); // Đặt lại visited sau mỗi lần đếm số liên thông
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++) {
            if(a[i][j] == 'x' && !visited[i][j]) { // Mục tiêu là xét các ô 'x'
                dfs(i, j);
                ++count;
            }
        }
    }
    cout << count << endl;
}
int main() {
    handle();
    return 0;
}