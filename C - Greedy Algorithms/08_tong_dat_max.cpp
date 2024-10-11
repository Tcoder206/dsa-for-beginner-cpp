/*

Input:
2
5
5 3 2 4 1
3
1 2 3

Output:
40
8

*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll big = 1e9 + 7; // Giới hạn đề bài yêu cầu
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; ll a[n];
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            ans += a[i] * i;
            ans %= big; // Lấy mod để kết quả ko đc vượt quá biến big
        }
        cout << ans << "\n";
    }
    return 0;
}