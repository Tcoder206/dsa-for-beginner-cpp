#include<bits/stdc++.h>
using namespace std;
int fibonacci(int *dp, int n) {
    if(n == 0 || n == 1) return n;
    if(dp[n] != -1) return dp[n];
    dp[n] = fibonacci(dp, n - 1) + fibonacci(dp, n - 2);
    return dp[n];
}
int main() {
    int n; cin >> n;
    int dp[n + 1];
    memset(dp, -1, sizeof(dp));
    cout << fibonacci(dp, n);
    return 0;
}