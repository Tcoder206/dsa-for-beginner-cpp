/*

6
2 3 8 6 4 1
1 4
19 (Output)
2 4
17 (Output)

*/

#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n; int a[n];
    for(int &x : a) cin >> x;
    int prefix[n + 1] = {0};
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    int l, r; cin >> l >> r;
    cout << prefix[r] - prefix[l - 1] << endl;
    /*
    Giải thích tại sao tổng [l, r] = p[r] - p[l - 1]
    VD: 2 3 8 6 4 1
    l = 3, r = 5
    Tổng [1; 5] = 2 + 3 + 8 + 6 + 4
    Tổng [1; 3] = 2 + 3 + 8
    Mà tổng [3; 5] = 8 + 6 + 4 (Đây là tổng [1; 5] nhưng loại đi [1; 2])
    Nên [3; 5] = [1; 5] - [1; 2]
    */
    return 0;
}