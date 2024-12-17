#include<bits/stdc++.h>
using namespace std;
const int maxn = 200005;
int arr[maxn], tr[4 * maxn];
int build(int n, int l, int r) {
    if(l == r) {
        tr[n] = tr[l];
    } else {
        int m = (l + r)/2;
        build(2 * n, l , m);
        build(2 * n + 1, m + 1, r);
        tr[n] = tr[2 * n] + tr[2 * n + 1];
    }
}
int main() {
    int t; cin >> t;
    for(int i = 0; i < t; i++) cin >> arr[i];
    return 0;
}