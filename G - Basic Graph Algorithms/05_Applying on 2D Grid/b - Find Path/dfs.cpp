/*

Ký hiệu: o là có đường đi, x là ko có đường đi

Input:
6 6
Aooxoo
oxoooo
oxoooo
ooooxx
Boooxo
oooxxx

*/
#include<bits/stdc++.h>
using namespace std;
int n, m, s, t; // s, t là toạ độ bắt đầu (bắt đầu từ điểm A)
char a[1001][1001];
bool visited[1001][1001];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
bool dfs(int p, int q) {
    cout << p << " " << q << endl;
    if(a[p][q] == 'B') return true;
    a[p][q] = 'x'; // Đã đi qua rồi thì ko đi lại nữa
    visited[p][q] = true;
    for(int k = 0; k < 4; k++) {
        int i = p + dx[k];
        int j = q + dy[k];
        if(i >= 1 && i <= n && j >= 1 && j <= m && !visited[i][j] && a[i][j] != 'x') {
            if(dfs(i, j)) return true;
        }
    }
    return false;
}
void inp() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if(a[i][j] == 'A') {
                s = i; t = j; // Note: Phải đặt dấu ngoặc nhọn để cả dòng đc thực hiện :v
            }
        }
    }
    memset(visited, false, sizeof(visited));
    if(dfs(s, t)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    inp();
    return 0;
}