/*
abcadf acbaed
output: 4

AGGTAB GXTXAYB
output: 4

AA BB
output: 0
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1]; // Xâu bắt đầu từ 1 nên độ dài mảng 2 chiều phải thêm 1
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(i == 0 || j == 0) {
                dp[i][j] = 0; // Xâu tính từ 1 nên bỏ qua toàn bộ xâu với i = 0, j = 0
            } else {
                if(a[i - 1] == b[j - 1]) { // Do index thực tế bắt đầu từ 0 nên phải trừ 1
                    dp[i][j] = dp[i - 1][j - 1] + 1; // Tăng số liền trước trên đường chéo chính 1 đơn vị
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}