#include<iostream>
using namespace std;
int BinarySearch(int n, int *a, int k, int l, int r) {
    int m = (l + r)/2;
    if(l == r) { 
        return (a[l] == k ? l : -1); // Kiểm tra left hoặc right xem có bằng số k ko
    } else {
        if(a[m] == k) {
            return m;
        } else {
            if(a[m] < k) {
                return BinarySearch(n, a, k, m + 1, r);
            } else {
                return BinarySearch(n, a, k, l, m - 1);
            }
        }
    }
}
int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << BinarySearch(n, a, k, 0, n);
    return 0;
}