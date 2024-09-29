/*

8 92
69 16 82 170 31 24 45 112
true

4 8
1 2 5 7
true

*/

#include<bits/stdc++.h>
using namespace std;
bool SubsetSum(int n, int sum, int *a) {
    bool dp[n + 1][sum + 1];

    for(int i = 0; i <= n; i++) dp[i][0] = true; // Toàn bộ cột j = 0 sẽ là true
    for(int j = 1; j <= sum; j++) dp[0][j] = false; // j = 0 đã xét trong vòng lặp bên trên

    for(int i = 1; i <= n; i++) { // i = 0 và j = 0 trong biến dp[][] đã đc xử lý
        for(int j = 1; j <= sum; j++) {
            if(a[i - 1] > j){ // Index của mảng a bắt đầu từ 0
            // vd: a[i - 1] = 1, j = 2 thì số 1 ko thể tạo thành các số lớn hơn như 2, 3, 4,...
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i - 1]];
            }
        }
    }
    return dp[n][sum];
}
int main() {
    int n, sum; cin >> n >> sum;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << boolalpha << SubsetSum(n, sum, a);
    return 0;
}