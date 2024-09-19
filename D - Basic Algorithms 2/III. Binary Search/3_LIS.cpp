#include<iostream>
using namespace std;
int BinarySearch(int n, int *a, int k) {

}
int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << BinarySearch(n, a, k);
    return 0;
}