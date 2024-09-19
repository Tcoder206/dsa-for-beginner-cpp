/*
n = 10
X = 8
a = 2 6 7 8 8 9 11 13 24 28
output: 4
*/

#include<iostream>
using namespace std;
int BinarySearch(int n, int *a, int k) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r)/2;
        if(a[m] == k) {
            return m;
        } else {
            if(a[m] < k) l = m + 1;
            else r = m - 1;
        }
    }
    return -1;
}
int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << BinarySearch(n, a, k);
    return 0;
}